module.exports = grammar({
  name: "fin",
  extras: ($) => [$.comment, /\s/],
  rules: {
    source_file: ($) => repeat(choice($.string)),

    comment: (_) => token(seq("#", /.*/)),

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
  },
});
