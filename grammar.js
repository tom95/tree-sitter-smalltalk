const binary_chars = "-+\\\\/*~<>=@,%|&?!";
const symbol_chars = `[A-Za-z0-9_:]+|[${binary_chars}]+`;
const identifier_regex = /[A-Za-z_][A-Za-z0-9_]*/;

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
  word: ($) => $.identifier_or_keyword,
  extras: ($) => [$.comment, /[\s\f]/],

  rules: {
    method: ($) =>
      seq($.selector, repeat(choice($.pragma, $.temporaries)), sep(optional($.statement), ".")),

    temporaries: ($) => prec.dynamic(10, seq("|", repeat($.identifier), "|")),

    selector: ($) =>
      choice($.unary_selector, $.binary_selector, $.keyword_selector),
    unary_selector: ($) => alias($.identifier, $.unary_identifier),
    binary_selector: ($) => seq($.binary_operator, $.identifier),
    keyword_selector: ($) => repeat1(seq($.keyword, $.identifier)),

    unary_message: ($) => prec(4, seq(field('receiver', $.expression), alias($.identifier, $.unary_identifier))),
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

    keyword: ($) => /[A-Za-z_][A-Za-z0-9_]*:/,
    // TODO: base should determine valid digits (need custom scanner)
    number: ($) => /-?[0-9]+\.[0-9]+|-?([0-9]+r)?[0-9]+/,
    string: ($) => token(seq("'", /([^']|'')*/, "'")),
    symbol: ($) =>
      seq(
        "#",
        choice(
          new RegExp(symbol_chars),
          seq("'", /[^']*/, "'")
        )
      ),
    character: ($) => /\$(\s|.)/,
    identifier: ($) => identifier_regex,
    binary_operator: ($) => new RegExp(`[${binary_chars}]+`),
    identifier_or_keyword: ($) => token(seq(identifier_regex, /:?/)),

    statement: ($) => choice($.expression, $.return),
    return: ($) => seq("^", $.expression),

    dynamic_array: ($) => seq("{", sep($.expression, "."), optional("."), "}"),
    byte_array: ($) => seq("#[", repeat($.number), "]"),
    literal_array: ($) => seq("#(", repeat($._literal_array_element), ")"),
    _literal_array_element: ($) => choice(
      $.string,
      $.number,
      $.character,
      $.nil,
      $.true,
      $.false,
      $.symbol,
      alias(new RegExp(symbol_chars), $.symbol),
      alias($.binary_operator, $.symbol),
      alias(/\./, $.symbol),
      alias(':=', $.symbol),
      alias('^', $.symbol),
      alias($.identifier, $.symbol),
      choice(alias($.nested_array_literal, $.literal_array), $.literal_array),
    ),
    nested_array_literal: ($) => seq('(', repeat($._literal_array_element), ')'),
    parenthesized_expression: ($) => seq("(", $.expression, ")"),

    block_argument: ($) => /: *[A-Za-z_][A-Za-z0-9_]*/,
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
        $.literal_array,
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

    pragma: ($) => seq('<', choice($.pragma_unary_selector, $.pragma_keyword_selector), '>'),
    pragma_unary_selector: ($) => alias($.identifier, $.unary_identifier),
    pragma_keyword_selector: ($) => repeat1(seq($.keyword, $.primary)),


    comment: ($) => token(seq("\"", /[^"]*/, "\"")),
  },
});

function sep1(rule, char) {
  return seq(rule, repeat(seq(char, rule)));
}

function sep(rule, char) {
  return optional(sep1(rule, char));
}
