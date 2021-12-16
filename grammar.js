const binary_chars = "+\\-/*~<>=@,%|&?!";

module.exports = grammar({
  name: "smalltalk",

  supertypes: ($) => [$.selector, $.expression, $.primary],
  conflicts: ($) => [
    [$.keyword_message, $.keyword_message],
    [$.temporaries, $.primary],
    [$.temporaries, $.temporaries],
  ],
  inline: ($) => [$.keyword_part],
  word: ($) => $.keyword,

  rules: {
    method: ($) =>
      seq($.selector, optional($.temporaries), sep(optional($.statement), ".")),

    temporaries: ($) => prec.dynamic(10, seq("|", repeat($.identifier), "|")),

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
    assignment: ($) => prec.left(-2, seq($.identifier, ":=", $.expression)),

    keyword: ($) => /[A-Za-z_]+:/,
    // TODO: base should determine valid digits (need custom scanner)
    number: ($) => /([0-9]+r)?[0-9]+/,
    string: ($) => seq("'", /[^']*/, "'"),
    symbol: ($) =>
      seq(
        "#",
        choice(
          new RegExp(`[A-Za-z0-9_:]+|[${binary_chars}]+`),
          seq("'", /[^']*/, "'")
        )
      ),
    character: ($) => /\$(\s|.)/,
    identifier: ($) => /[A-Za-z_]+/,
    binary_operator: ($) => new RegExp(`[${binary_chars}]+`),

    statement: ($) => choice($.expression, $.return),
    return: ($) => seq("^", $.expression),

    dynamic_array: ($) => seq("{", sep1($.expression, "."), optional("."), "}"),
    byte_array: ($) => seq("#[", repeat($.number), "]"),
    parenthesized_expression: ($) => seq("(", $.expression, ")"),

    block_argument: ($) => /:[A-Za-z_]+/,
    block: ($) =>
      seq(
        "[",
        optional(seq(repeat($.block_argument), "|")),
        optional($.temporaries),
        sep($.statement, "."),
        optional("."),
        "]"
      ),

    true: ($) => "true",
    false: ($) => "false",
    thisContext: ($) => "thisContext",
    self: ($) => "self",
    super: ($) => "super",
    nil: ($) => "nil",

    primary: ($) =>
      choice(
        $.identifier,
        $.dynamic_array,
        $.byte_array,
        $.parenthesized_expression,
        $.number,
        $.string,
        $.character,
        $.symbol,
        $.block,
        $.true,
        $.false,
        $.thisContext,
        $.self,
        $.super,
        $.nil
      ),

    expression: ($) =>
      choice(
        $.unary_message,
        $.assignment,
        $.binary_message,
        $.keyword_message,
        $.primary
      ),
  },
});

function sep1(rule, char) {
  return seq(rule, repeat(seq(char, rule)));
}

function sep(rule, char) {
  return optional(sep1(rule, char));
}
