/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: "fin",
	extras: (_) => [/[ \t\r\n,]/],
	inline: ($) => [$.val],

	rules: {
		root: ($) => repeat(choice($.com, $.kv)),
		sym: (_) => /[a-z:_][a-z:_\d]*/,
		num: (_) => /-?(0|[1-9]\d*)(\.\d+)?(e-?(0|[1-9]\d*))?/,
		esc: (_) => "ESC_TODO",
		raw: (_) => "RAW_TODO",
		com: (_) => "COM_TODO",
		arr: ($) =>
			seq(
				choice(seq(field("tag", $.sym), token.immediate("[")), "["),
				repeat(choice($.com, $.val, ",")),
				"]",
			),
		map: ($) =>
			seq(
				choice(seq(field("tag", $.sym), token.immediate("(")), "("),
				repeat(choice($.com, $.kv, ",")),
				")",
			),
		kv: ($) => seq($.val, "=", $.val),
		val: ($) => seq(choice($.sym, $.num, $.esc, $.raw, $.map, $.arr)),
	},
});
