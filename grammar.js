module.exports = grammar({
  name: "fin",
  extras: (_) => [],
  inline: ($) => [$.sep, $.value, $.entry],

  rules: {
    source_file: ($) => repeat(choice($.sep, $.value)),
    comment: (_) => token(seq("#", /.*/)),
    sep: ($) => choice(",", /\s/, $.comment),
    value: ($) =>
      choice($.boolean, $.string, $.symbol, $.map, $.array, $.block, $.call),
    boolean: (_) => token(choice("false", "true")),
    symbol: (_) => /[a-z_:][a-z_:\d]*/,

    // TODO numbers

    // go interpreted string literal
    string: (_) =>
      token(
        seq(
          '"',
          repeat(
            choice(
              token.immediate(prec(1, /[^"\n\\]+/)),
              token.immediate(
                seq(
                  "\\",
                  choice(
                    /[^xuU]/,
                    /\d{2,3}/,
                    /x[0-9a-fA-F]{2}/,
                    /u[0-9a-fA-F]{4}/,
                    /U[0-9a-fA-F]{8}/,
                  ),
                ),
              ),
            ),
          ),
          token.immediate('"'),
        ),
      ),

    // collections
    entry: ($) => seq($.value, repeat($.sep)),
    map: ($) => seq("(", repeat($.sep), repeat($.entry), ")"),
    array: ($) => seq("[", repeat($.sep), repeat($.entry), "]"),
    block: ($) => seq("{", repeat($.sep), repeat($.entry), "}"),

    call: ($) => prec(2, seq($.symbol, choice($.map, $.array, $.block))),
  },
});
