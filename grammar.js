const binary_chars = "+\\-/*~<>=@,%|&?!";

module.exports = grammar({
  name: "smalltalk",

  supertypes: ($) => [$.selector, $.expression, $.primary],
  conflicts: ($) => [
    [$.keyword_message, $.keyword_message],
    [$.temporaries, $.primary],
    [$.temporaries, $.temporaries],
    // [$.binary_message, $.unary_message, $.cascade],
    // [$.unary_message, $.binary_message, $.cascade, $.cascaded_binary],
    // [$.cascade],
    // [$.keyword_message, $.cascaded_binary],
    // [$.keyword_message, $.cascaded_keyword, $.cascade],
    // [$.keyword_message, $.cascaded_keyword],
    // [$.keyword_message, $.cascade, $.cascaded_binary],
    // [$.cascaded_keyword],
  ],
  inline: ($) => [$.keyword_part],
  word: ($) => $.keyword,
  extras: ($) => [$.comment, /[\s]/],

  rules: {
    method: ($) =>
      seq($.selector, optional($.temporaries), sep(optional($.statement), ".")),

    temporaries: ($) => prec.dynamic(10, seq("|", repeat($.identifier), "|")),

    selector: ($) =>
      choice($.unary_selector, $.binary_selector, $.keyword_selector),
    unary_selector: ($) => $.identifier,
    binary_selector: ($) => seq($.binary_operator, $.identifier),
    keyword_selector: ($) => repeat1(seq($.keyword, $.identifier)),

    unary_message: ($) => prec(4, seq(field('receiver', $.expression), $.identifier)),
    binary_message: ($) =>
      prec.left(3, seq(field('receiver', $.expression), $.binary_operator, $.expression)),
    keyword_message: ($) =>
      prec(-1, seq(field('receiver', $.expression), repeat1($.keyword_part))),
    keyword_part: ($) => seq($.keyword, $.expression),
    assignment: ($) => prec.left(-10, seq($.identifier, ":=", $.expression)),

    cascade: ($) => prec(-2, seq(field('receiver', $.expression), repeat1(seq(';', $._cascaded_send)))),
    _cascaded_send: ($) => choice(
      $.cascaded_unary_message,
      $.cascaded_binary_message,
      $.cascaded_keyword_message,
    ),
    cascaded_unary_message: ($) => prec(-2, $.identifier),
    cascaded_binary_message: ($) => prec(-3, seq($.binary_operator, $.expression)),
    cascaded_keyword_message: ($) => prec(-4, repeat1($.keyword_part)),

    keyword: ($) => /[A-Za-z_]+:/,
    // TODO: base should determine valid digits (need custom scanner)
    number: ($) => /([0-9]+r)?[0-9]+|[0-9]+\.[0-9]+/,
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
    identifier: ($) => /[A-Za-z_][A-Za-z0-9_]*/,
    binary_operator: ($) => new RegExp(`[${binary_chars}]+`),

    statement: ($) => choice($.expression, $.return),
    return: ($) => seq("^", $.expression),

    dynamic_array: ($) => seq("{", sep($.expression, "."), optional("."), "}"),
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
        $.cascade,
        $.primary
      ),

    comment: ($) => token(seq("\"", /[^"]*/, "\"")),
  },
});

function sep1(rule, char) {
  return seq(rule, repeat(seq(char, rule)));
}

function sep(rule, char) {
  return optional(sep1(rule, char));
}
