// go number literals
const hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  binaryDigit = /[01]/,
  hexDigits = seq(hexDigit, repeat(seq(optional("_"), hexDigit))),
  octalDigits = seq(octalDigit, repeat(seq(optional("_"), octalDigit))),
  decimalDigits = seq(decimalDigit, repeat(seq(optional("_"), decimalDigit))),
  binaryDigits = seq(binaryDigit, repeat(seq(optional("_"), binaryDigit))),
  hexLiteral = seq("0", choice("x", "X"), optional("_"), hexDigits),
  octalLiteral = seq(
    "0",
    optional(choice("o", "O")),
    optional("_"),
    octalDigits,
  ),
  decimalLiteral = choice(
    "0",
    seq(/[1-9]/, optional(seq(optional("_"), decimalDigits))),
  ),
  binaryLiteral = seq("0", choice("b", "B"), optional("_"), binaryDigits),
  intLiteral = choice(binaryLiteral, decimalLiteral, octalLiteral, hexLiteral),
  decimalExponent = seq(
    choice("e", "E"),
    optional(choice("+", "-")),
    decimalDigits,
  ),
  decimalFloatLiteral = choice(
    seq(decimalDigits, ".", optional(decimalDigits), optional(decimalExponent)),
    seq(decimalDigits, decimalExponent),
    seq(".", decimalDigits, optional(decimalExponent)),
  ),
  hexExponent = seq(
    choice("p", "P"),
    optional(choice("+", "-")),
    decimalDigits,
  ),
  hexMantissa = choice(
    seq(optional("_"), hexDigits, ".", optional(hexDigits)),
    seq(optional("_"), hexDigits),
    seq(".", hexDigits),
  ),
  hexFloatLiteral = seq("0", choice("x", "X"), hexMantissa, hexExponent),
  floatLiteral = choice(decimalFloatLiteral, hexFloatLiteral);

module.exports = grammar({
  name: "fin",
  extras: (_) => [],
  inline: ($) => [$.sep, $.value, $.entry],
  rules: {
    source_file: ($) => repeat(choice($.sep, $.value)),
    comment: (_) => token(seq("#", /.*/)),
    sep: ($) => choice(",", /\s/, $.comment),
    value: ($) =>
      choice(
        $.boolean,
        $.string,
        $.number,
        $.symbol,
        $.map,
        $.array,
        $.block,
        $.call,
      ),
    boolean: (_) => token(choice("false", "true")),
    symbol: (_) => /[a-z_:][a-z_:\d]*/,
    number: (_) => token(choice(intLiteral, floatLiteral)),
    string: (_) =>
      // go interpreted string literal
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
    entry: ($) => seq($.value, repeat($.sep)),
    map: ($) => seq("(", repeat($.sep), repeat($.entry), ")"),
    array: ($) => seq("[", repeat($.sep), repeat($.entry), "]"),
    block: ($) => seq("{", repeat($.sep), repeat($.entry), "}"),
    call: ($) => prec(2, seq($.symbol, choice($.map, $.array, $.block))),
  },
});
