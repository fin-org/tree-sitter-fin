module.exports = grammar({
  name: "fin",
  extras: ($) => [$.comment, /\s/, ","],
  inline: ($) => [$.value],

  rules: {
    source_file: ($) => repeat($.value),

    value: ($) => choice($.boolean, $.string, $.map, $.array, $.block),

    boolean: (_) => token(choice("false", "true")),

    // TODO numbers
    // TODO symbols
    // TODO calls

    // collections
    map: ($) => seq("(", repeat(choice($.value, ",")), ")"),
    array: ($) => seq("[", repeat(choice($.value, ",")), "]"),
    block: ($) => seq("{", repeat(choice($.value, ",")), "}"),

    // go interpreted string literal
    string: ($) =>
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

    comment: (_) => token(seq("#", /.*/)),
  },
});
