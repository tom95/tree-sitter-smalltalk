module.exports = grammar({
  name: "smalltalk",

  supertypes: ($) => [$.selector, $.expression],
  conflicts: ($) => [[$.keyword_message, $.keyword_message]],
  inline: ($) => [$.keyword_part],
  word: ($) => $.keyword,

  rules: {
    method: ($) => seq($.selector, sep(optional($.statement), ".")),

    selector: ($) =>
      choice($.unary_selector, $.binary_selector, $.keyword_selector),
    unary_selector: ($) => $.identifier,
    binary_selector: ($) => seq($.binary_operator, $.identifier),
    keyword_selector: ($) => repeat1(seq($.keyword, $.identifier)),

    unary_message: ($) => prec(4, seq($.expression, $.identifier)),
    binary_message: ($) =>
      prec.left(3, seq($.expression, $.binary_operator, $.expression)),
    keyword_message: ($) =>
      prec.dynamic(-1, seq($.expression, repeat1($.keyword_part))),
    keyword_part: ($) => seq($.keyword, $.expression),

    keyword: ($) => /[A-Za-z_]+:/,
    identifier: ($) => /[A-Za-z_]+/,
    binary_operator: ($) => /[+\-*/]+/,

    statement: ($) => $.expression,

    expression: ($) =>
      choice(
        $.identifier,
        $.unary_message,
        $.binary_message,
        $.keyword_message
      ),
  },
});

function sep1(rule, char) {
  return seq(rule, repeat(seq(char, rule)));
}

function sep(rule, char) {
  return optional(sep1(rule, char));
}
