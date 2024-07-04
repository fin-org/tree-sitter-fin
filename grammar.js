/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: "fin",
	extras: (_) => [/[ \t\r\n,]/],
	rules: {
		root: ($) => repeat(choice($.com, $.kv)),
		sym: (_) => /(:[a-z_][a-z_\d]*)+|[a-z_][a-z_\d]*(:[a-z_][a-z_\d]*)*/, // break apart into names and delimiter :
		num: (_) => /-?(0|[1-9]\d*)(\.\d+)?(e-?(0|[1-9]\d*))?/,
		esc: ($) => seq('"', repeat(choice($.esc_seq, /[^\\"]/)), '"'),
		esc_seq: (_) => /\\(\\|\"|n|r|t|u\{[0-9a-f]+\})/,
		raw: (_) => /(\|.*\n[ \t]*)+/,
		com: (_) => /(\#.*\n[ \t]*)+/,
		arr: ($) =>
			seq(
				choice(seq(field("tag", $.sym), token.immediate("[")), "["),
				repeat(choice($.com, $._val, ",")),
				"]",
			),
		map: ($) =>
			seq(
				choice(seq(field("tag", $.sym), token.immediate("(")), "("),
				repeat(choice($.com, $.kv, ",")),
				")",
			),
		kv: ($) => seq($._val, "=", $._val),
		_val: ($) => seq(choice($.sym, $.num, $.esc, $.raw, $.map, $.arr)),
	},
});
