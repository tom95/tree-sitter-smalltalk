#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 3

enum {
  sym_keyword = 1,
  anon_sym_DOT = 2,
  anon_sym_PIPE = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_SEMI = 5,
  sym_number = 6,
  anon_sym_SQUOTE = 7,
  aux_sym_string_token1 = 8,
  anon_sym_POUND = 9,
  aux_sym_symbol_token1 = 10,
  sym_character = 11,
  sym_identifier = 12,
  sym_binary_operator = 13,
  anon_sym_CARET = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_POUND_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_POUND_LPAREN = 19,
  anon_sym_RPAREN = 20,
  aux_sym__literal_array_element_token1 = 21,
  anon_sym_LPAREN = 22,
  sym_block_argument = 23,
  anon_sym_LBRACK = 24,
  sym_true = 25,
  sym_false = 26,
  sym_thisContext = 27,
  sym_self = 28,
  sym_super = 29,
  sym_nil = 30,
  sym_comment = 31,
  sym_method = 32,
  sym_temporaries = 33,
  sym_selector = 34,
  sym_unary_selector = 35,
  sym_binary_selector = 36,
  sym_keyword_selector = 37,
  sym_unary_message = 38,
  sym_binary_message = 39,
  sym_keyword_message = 40,
  sym_assignment = 41,
  sym_cascade = 42,
  sym__cascaded_send = 43,
  sym_cascaded_unary_message = 44,
  sym_cascaded_binary_message = 45,
  sym_cascaded_keyword_message = 46,
  sym_string = 47,
  sym_symbol = 48,
  sym_statement = 49,
  sym_return = 50,
  sym_dynamic_array = 51,
  sym_byte_array = 52,
  sym_literal_array = 53,
  sym__literal_array_element = 54,
  sym__nested_array_literal = 55,
  sym_parenthesized_expression = 56,
  sym_block = 57,
  sym_primary = 58,
  sym_expression = 59,
  aux_sym_method_repeat1 = 60,
  aux_sym_temporaries_repeat1 = 61,
  aux_sym_keyword_selector_repeat1 = 62,
  aux_sym_keyword_message_repeat1 = 63,
  aux_sym_cascade_repeat1 = 64,
  aux_sym_dynamic_array_repeat1 = 65,
  aux_sym_byte_array_repeat1 = 66,
  aux_sym_literal_array_repeat1 = 67,
  aux_sym_block_repeat1 = 68,
  aux_sym_block_repeat2 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [anon_sym_DOT] = ".",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SEMI] = ";",
  [sym_number] = "number",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_symbol_token1] = "symbol_token1",
  [sym_character] = "character",
  [sym_identifier] = "identifier",
  [sym_binary_operator] = "binary_operator",
  [anon_sym_CARET] = "^",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__literal_array_element_token1] = "symbol",
  [anon_sym_LPAREN] = "(",
  [sym_block_argument] = "block_argument",
  [anon_sym_LBRACK] = "[",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_thisContext] = "thisContext",
  [sym_self] = "self",
  [sym_super] = "super",
  [sym_nil] = "nil",
  [sym_comment] = "comment",
  [sym_method] = "method",
  [sym_temporaries] = "temporaries",
  [sym_selector] = "selector",
  [sym_unary_selector] = "unary_selector",
  [sym_binary_selector] = "binary_selector",
  [sym_keyword_selector] = "keyword_selector",
  [sym_unary_message] = "unary_message",
  [sym_binary_message] = "binary_message",
  [sym_keyword_message] = "keyword_message",
  [sym_assignment] = "assignment",
  [sym_cascade] = "cascade",
  [sym__cascaded_send] = "_cascaded_send",
  [sym_cascaded_unary_message] = "cascaded_unary_message",
  [sym_cascaded_binary_message] = "cascaded_binary_message",
  [sym_cascaded_keyword_message] = "cascaded_keyword_message",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym_statement] = "statement",
  [sym_return] = "return",
  [sym_dynamic_array] = "dynamic_array",
  [sym_byte_array] = "byte_array",
  [sym_literal_array] = "literal_array",
  [sym__literal_array_element] = "_literal_array_element",
  [sym__nested_array_literal] = "literal_array",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_block] = "block",
  [sym_primary] = "primary",
  [sym_expression] = "expression",
  [aux_sym_method_repeat1] = "method_repeat1",
  [aux_sym_temporaries_repeat1] = "temporaries_repeat1",
  [aux_sym_keyword_selector_repeat1] = "keyword_selector_repeat1",
  [aux_sym_keyword_message_repeat1] = "keyword_message_repeat1",
  [aux_sym_cascade_repeat1] = "cascade_repeat1",
  [aux_sym_dynamic_array_repeat1] = "dynamic_array_repeat1",
  [aux_sym_byte_array_repeat1] = "byte_array_repeat1",
  [aux_sym_literal_array_repeat1] = "literal_array_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_number] = sym_number,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [sym_character] = sym_character,
  [sym_identifier] = sym_identifier,
  [sym_binary_operator] = sym_binary_operator,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__literal_array_element_token1] = sym_symbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_block_argument] = sym_block_argument,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_thisContext] = sym_thisContext,
  [sym_self] = sym_self,
  [sym_super] = sym_super,
  [sym_nil] = sym_nil,
  [sym_comment] = sym_comment,
  [sym_method] = sym_method,
  [sym_temporaries] = sym_temporaries,
  [sym_selector] = sym_selector,
  [sym_unary_selector] = sym_unary_selector,
  [sym_binary_selector] = sym_binary_selector,
  [sym_keyword_selector] = sym_keyword_selector,
  [sym_unary_message] = sym_unary_message,
  [sym_binary_message] = sym_binary_message,
  [sym_keyword_message] = sym_keyword_message,
  [sym_assignment] = sym_assignment,
  [sym_cascade] = sym_cascade,
  [sym__cascaded_send] = sym__cascaded_send,
  [sym_cascaded_unary_message] = sym_cascaded_unary_message,
  [sym_cascaded_binary_message] = sym_cascaded_binary_message,
  [sym_cascaded_keyword_message] = sym_cascaded_keyword_message,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym_statement] = sym_statement,
  [sym_return] = sym_return,
  [sym_dynamic_array] = sym_dynamic_array,
  [sym_byte_array] = sym_byte_array,
  [sym_literal_array] = sym_literal_array,
  [sym__literal_array_element] = sym__literal_array_element,
  [sym__nested_array_literal] = sym_literal_array,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_block] = sym_block,
  [sym_primary] = sym_primary,
  [sym_expression] = sym_expression,
  [aux_sym_method_repeat1] = aux_sym_method_repeat1,
  [aux_sym_temporaries_repeat1] = aux_sym_temporaries_repeat1,
  [aux_sym_keyword_selector_repeat1] = aux_sym_keyword_selector_repeat1,
  [aux_sym_keyword_message_repeat1] = aux_sym_keyword_message_repeat1,
  [aux_sym_cascade_repeat1] = aux_sym_cascade_repeat1,
  [aux_sym_dynamic_array_repeat1] = aux_sym_dynamic_array_repeat1,
  [aux_sym_byte_array_repeat1] = aux_sym_byte_array_repeat1,
  [aux_sym_literal_array_repeat1] = aux_sym_literal_array_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_array_element_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_block_argument] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_thisContext] = {
    .visible = true,
    .named = true,
  },
  [sym_self] = {
    .visible = true,
    .named = true,
  },
  [sym_super] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_temporaries] = {
    .visible = true,
    .named = true,
  },
  [sym_selector] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_unary_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_message] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_message] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_message] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_cascade] = {
    .visible = true,
    .named = true,
  },
  [sym__cascaded_send] = {
    .visible = false,
    .named = true,
  },
  [sym_cascaded_unary_message] = {
    .visible = true,
    .named = true,
  },
  [sym_cascaded_binary_message] = {
    .visible = true,
    .named = true,
  },
  [sym_cascaded_keyword_message] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_array] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_array] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_array] = {
    .visible = true,
    .named = true,
  },
  [sym__literal_array_element] = {
    .visible = false,
    .named = true,
  },
  [sym__nested_array_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [aux_sym_method_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_temporaries_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_selector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cascade_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dynamic_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_byte_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_receiver = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_receiver] = "receiver",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_receiver, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_symbol,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '~') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '^') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '~') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 10:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 12:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '^') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(83);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '[') ADVANCE(87);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 's') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 's') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__literal_array_element_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_block_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_thisContext);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_thisContext);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_self);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_super);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 25},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_binary_operator] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__literal_array_element_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_block_argument] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_thisContext] = ACTIONS(1),
    [sym_self] = ACTIONS(1),
    [sym_super] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_method] = STATE(129),
    [sym_selector] = STATE(4),
    [sym_unary_selector] = STATE(35),
    [sym_binary_selector] = STATE(35),
    [sym_keyword_selector] = STATE(35),
    [aux_sym_keyword_selector_repeat1] = STATE(28),
    [sym_keyword] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_binary_operator] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_temporaries] = STATE(8),
    [sym_unary_message] = STATE(67),
    [sym_binary_message] = STATE(67),
    [sym_keyword_message] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_cascade] = STATE(67),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_statement] = STATE(98),
    [sym_return] = STATE(113),
    [sym_dynamic_array] = STATE(61),
    [sym_byte_array] = STATE(61),
    [sym_literal_array] = STATE(61),
    [sym_parenthesized_expression] = STATE(61),
    [sym_block] = STATE(61),
    [sym_primary] = STATE(67),
    [sym_expression] = STATE(72),
    [aux_sym_block_repeat1] = STATE(112),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_block_argument] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_thisContext] = ACTIONS(39),
    [sym_self] = ACTIONS(39),
    [sym_super] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_temporaries] = STATE(9),
    [sym_unary_message] = STATE(67),
    [sym_binary_message] = STATE(67),
    [sym_keyword_message] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_cascade] = STATE(67),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_statement] = STATE(110),
    [sym_return] = STATE(113),
    [sym_dynamic_array] = STATE(61),
    [sym_byte_array] = STATE(61),
    [sym_literal_array] = STATE(61),
    [sym_parenthesized_expression] = STATE(61),
    [sym_block] = STATE(61),
    [sym_primary] = STATE(67),
    [sym_expression] = STATE(72),
    [aux_sym_temporaries_repeat1] = STATE(102),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(43),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_thisContext] = ACTIONS(39),
    [sym_self] = ACTIONS(39),
    [sym_super] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_temporaries] = STATE(6),
    [sym_unary_message] = STATE(67),
    [sym_binary_message] = STATE(67),
    [sym_keyword_message] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_cascade] = STATE(67),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_statement] = STATE(115),
    [sym_return] = STATE(113),
    [sym_dynamic_array] = STATE(61),
    [sym_byte_array] = STATE(61),
    [sym_literal_array] = STATE(61),
    [sym_parenthesized_expression] = STATE(61),
    [sym_block] = STATE(61),
    [sym_primary] = STATE(67),
    [sym_expression] = STATE(72),
    [aux_sym_method_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(53),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_thisContext] = ACTIONS(39),
    [sym_self] = ACTIONS(39),
    [sym_super] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_temporaries] = STATE(10),
    [sym_unary_message] = STATE(67),
    [sym_binary_message] = STATE(67),
    [sym_keyword_message] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_cascade] = STATE(67),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_statement] = STATE(105),
    [sym_return] = STATE(113),
    [sym_dynamic_array] = STATE(61),
    [sym_byte_array] = STATE(61),
    [sym_literal_array] = STATE(61),
    [sym_parenthesized_expression] = STATE(61),
    [sym_block] = STATE(61),
    [sym_primary] = STATE(67),
    [sym_expression] = STATE(72),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(53),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_thisContext] = ACTIONS(39),
    [sym_self] = ACTIONS(39),
    [sym_super] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_unary_message] = STATE(67),
    [sym_binary_message] = STATE(67),
    [sym_keyword_message] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_cascade] = STATE(67),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_statement] = STATE(114),
    [sym_return] = STATE(113),
    [sym_dynamic_array] = STATE(61),
    [sym_byte_array] = STATE(61),
    [sym_literal_array] = STATE(61),
    [sym_parenthesized_expression] = STATE(61),
    [sym_block] = STATE(61),
    [sym_primary] = STATE(67),
    [sym_expression] = STATE(72),
    [aux_sym_method_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(51),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_thisContext] = ACTIONS(39),
    [sym_self] = ACTIONS(39),
    [sym_super] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_unary_message] = STATE(67),
    [sym_binary_message] = STATE(67),
    [sym_keyword_message] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_cascade] = STATE(67),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_statement] = STATE(117),
    [sym_return] = STATE(113),
    [sym_dynamic_array] = STATE(61),
    [sym_byte_array] = STATE(61),
    [sym_literal_array] = STATE(61),
    [sym_parenthesized_expression] = STATE(61),
    [sym_block] = STATE(61),
    [sym_primary] = STATE(67),
    [sym_expression] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_thisContext] = ACTIONS(39),
    [sym_self] = ACTIONS(39),
    [sym_super] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_unary_message] = STATE(67),
    [sym_binary_message] = STATE(67),
    [sym_keyword_message] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_cascade] = STATE(67),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_statement] = STATE(110),
    [sym_return] = STATE(113),
    [sym_dynamic_array] = STATE(61),
    [sym_byte_array] = STATE(61),
    [sym_literal_array] = STATE(61),
    [sym_parenthesized_expression] = STATE(61),
    [sym_block] = STATE(61),
    [sym_primary] = STATE(67),
    [sym_expression] = STATE(72),
    [anon_sym_DOT] = ACTIONS(41),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_thisContext] = ACTIONS(39),
    [sym_self] = ACTIONS(39),
    [sym_super] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_unary_message] = STATE(67),
    [sym_binary_message] = STATE(67),
    [sym_keyword_message] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_cascade] = STATE(67),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_statement] = STATE(105),
    [sym_return] = STATE(113),
    [sym_dynamic_array] = STATE(61),
    [sym_byte_array] = STATE(61),
    [sym_literal_array] = STATE(61),
    [sym_parenthesized_expression] = STATE(61),
    [sym_block] = STATE(61),
    [sym_primary] = STATE(67),
    [sym_expression] = STATE(72),
    [anon_sym_DOT] = ACTIONS(55),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_thisContext] = ACTIONS(39),
    [sym_self] = ACTIONS(39),
    [sym_super] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_unary_message] = STATE(67),
    [sym_binary_message] = STATE(67),
    [sym_keyword_message] = STATE(67),
    [sym_assignment] = STATE(67),
    [sym_cascade] = STATE(67),
    [sym_string] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_statement] = STATE(90),
    [sym_return] = STATE(113),
    [sym_dynamic_array] = STATE(61),
    [sym_byte_array] = STATE(61),
    [sym_literal_array] = STATE(61),
    [sym_parenthesized_expression] = STATE(61),
    [sym_block] = STATE(61),
    [sym_primary] = STATE(67),
    [sym_expression] = STATE(72),
    [anon_sym_DOT] = ACTIONS(63),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_thisContext] = ACTIONS(39),
    [sym_self] = ACTIONS(39),
    [sym_super] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_CARET,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_expression,
    STATE(113), 1,
      sym_return,
    STATE(116), 1,
      sym_statement,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [72] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_CARET,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_expression,
    STATE(113), 1,
      sym_return,
    STATE(116), 1,
      sym_statement,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [144] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_CARET,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_expression,
    STATE(113), 1,
      sym_return,
    STATE(116), 1,
      sym_statement,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [216] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_CARET,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_expression,
    STATE(113), 1,
      sym_return,
    STATE(116), 1,
      sym_statement,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [288] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_CARET,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_expression,
    STATE(113), 1,
      sym_return,
    STATE(116), 1,
      sym_statement,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [360] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_CARET,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_expression,
    STATE(113), 1,
      sym_return,
    STATE(116), 1,
      sym_statement,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [429] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [495] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [558] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [621] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [681] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [741] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [801] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(86), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [861] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [921] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [981] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(39), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(67), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(61), 7,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_literal_array,
      sym_parenthesized_expression,
      sym_block,
  [1041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_keyword,
    STATE(27), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(86), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(81), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_keyword,
    STATE(27), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(90), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(88), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_temporaries_repeat1,
    ACTIONS(96), 7,
      anon_sym_POUND,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(92), 11,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(81), 13,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_keyword,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(101), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(105), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(109), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(113), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1313] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 2,
      sym_number,
      sym_character,
    ACTIONS(131), 3,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(117), 4,
      anon_sym_COLON_EQ,
      sym_binary_operator,
      anon_sym_CARET,
      aux_sym__literal_array_element_token1,
    STATE(39), 5,
      sym_string,
      sym_literal_array,
      sym__literal_array_element,
      sym__nested_array_literal,
      aux_sym_literal_array_repeat1,
  [1354] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 2,
      sym_number,
      sym_character,
    ACTIONS(137), 3,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(117), 4,
      anon_sym_COLON_EQ,
      sym_binary_operator,
      anon_sym_CARET,
      aux_sym__literal_array_element_token1,
    STATE(41), 5,
      sym_string,
      sym_literal_array,
      sym__literal_array_element,
      sym__nested_array_literal,
      aux_sym_literal_array_repeat1,
  [1395] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 2,
      sym_number,
      sym_character,
    ACTIONS(143), 3,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(117), 4,
      anon_sym_COLON_EQ,
      sym_binary_operator,
      anon_sym_CARET,
      aux_sym__literal_array_element_token1,
    STATE(37), 5,
      sym_string,
      sym_literal_array,
      sym__literal_array_element,
      sym__nested_array_literal,
      aux_sym_literal_array_repeat1,
  [1436] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 2,
      sym_number,
      sym_character,
    ACTIONS(137), 3,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(117), 4,
      anon_sym_COLON_EQ,
      sym_binary_operator,
      anon_sym_CARET,
      aux_sym__literal_array_element_token1,
    STATE(41), 5,
      sym_string,
      sym_literal_array,
      sym__literal_array_element,
      sym__nested_array_literal,
      aux_sym_literal_array_repeat1,
  [1477] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 2,
      sym_number,
      sym_character,
    ACTIONS(151), 3,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(117), 4,
      anon_sym_COLON_EQ,
      sym_binary_operator,
      anon_sym_CARET,
      aux_sym__literal_array_element_token1,
    STATE(42), 5,
      sym_string,
      sym_literal_array,
      sym__literal_array_element,
      sym__nested_array_literal,
      aux_sym_literal_array_repeat1,
  [1518] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 2,
      sym_number,
      sym_character,
    ACTIONS(173), 3,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(153), 4,
      anon_sym_COLON_EQ,
      sym_binary_operator,
      anon_sym_CARET,
      aux_sym__literal_array_element_token1,
    STATE(41), 5,
      sym_string,
      sym_literal_array,
      sym__literal_array_element,
      sym__nested_array_literal,
      aux_sym_literal_array_repeat1,
  [1559] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 2,
      sym_number,
      sym_character,
    ACTIONS(137), 3,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(117), 4,
      anon_sym_COLON_EQ,
      sym_binary_operator,
      anon_sym_CARET,
      aux_sym__literal_array_element_token1,
    STATE(41), 5,
      sym_string,
      sym_literal_array,
      sym__literal_array_element,
      sym__nested_array_literal,
      aux_sym_literal_array_repeat1,
  [1600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(178), 10,
      anon_sym_COLON_EQ,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      sym_binary_operator,
      anon_sym_CARET,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      aux_sym__literal_array_element_token1,
      anon_sym_LPAREN,
  [1622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(182), 10,
      anon_sym_COLON_EQ,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      sym_binary_operator,
      anon_sym_CARET,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      aux_sym__literal_array_element_token1,
      anon_sym_LPAREN,
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(186), 10,
      anon_sym_COLON_EQ,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      sym_binary_operator,
      anon_sym_CARET,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      aux_sym__literal_array_element_token1,
      anon_sym_LPAREN,
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(190), 10,
      anon_sym_COLON_EQ,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      sym_binary_operator,
      anon_sym_CARET,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      aux_sym__literal_array_element_token1,
      anon_sym_LPAREN,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(194), 10,
      anon_sym_COLON_EQ,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      sym_binary_operator,
      anon_sym_CARET,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      aux_sym__literal_array_element_token1,
      anon_sym_LPAREN,
  [1710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(198), 10,
      anon_sym_COLON_EQ,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      sym_binary_operator,
      anon_sym_CARET,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      aux_sym__literal_array_element_token1,
      anon_sym_LPAREN,
  [1732] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_binary_operator,
    STATE(56), 1,
      aux_sym_keyword_message_repeat1,
    STATE(57), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1757] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_binary_operator,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_keyword_message_repeat1,
    STATE(57), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(208), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1786] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym_keyword_message_repeat1,
    STATE(57), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1809] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_binary_operator,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_keyword_message_repeat1,
    STATE(57), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(218), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_keyword,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(230), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(236), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(234), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1926] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(238), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COLON_EQ,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(248), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(256), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(260), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(268), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(272), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_identifier,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(284), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2189] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_binary_operator,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_keyword_message_repeat1,
    STATE(57), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(294), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2318] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_binary_operator,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_keyword_message_repeat1,
    STATE(57), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(314), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2362] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_binary_operator,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    ACTIONS(320), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_keyword_message_repeat1,
    STATE(57), 1,
      aux_sym_cascade_repeat1,
    STATE(103), 1,
      aux_sym_dynamic_array_repeat1,
  [2393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(198), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2461] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_binary_operator,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_keyword_message_repeat1,
    STATE(57), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(332), 2,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [2487] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      sym_binary_operator,
    STATE(55), 1,
      aux_sym_keyword_message_repeat1,
    STATE(82), 4,
      sym__cascaded_send,
      sym_cascaded_unary_message,
      sym_cascaded_binary_message,
      sym_cascaded_keyword_message,
  [2509] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COLON_EQ,
    ACTIONS(246), 1,
      sym_binary_operator,
    ACTIONS(338), 1,
      anon_sym_PIPE,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(242), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      anon_sym_RBRACK,
  [2531] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_binary_operator,
    ACTIONS(210), 1,
      sym_keyword,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_keyword_message_repeat1,
    STATE(57), 1,
      aux_sym_cascade_repeat1,
  [2556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(100), 1,
      aux_sym_block_repeat2,
  [2569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym_method_repeat1,
  [2582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(349), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_block_repeat2,
  [2595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym_method_repeat1,
  [2608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_temporaries_repeat1,
  [2621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_PIPE,
    ACTIONS(355), 1,
      sym_block_argument,
    STATE(95), 1,
      aux_sym_block_repeat1,
  [2634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 1,
      anon_sym_DOT,
    STATE(96), 1,
      aux_sym_method_repeat1,
  [2647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym_method_repeat1,
  [2660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(365), 1,
      anon_sym_DOT,
    STATE(92), 1,
      aux_sym_block_repeat2,
  [2673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PIPE,
    ACTIONS(369), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_temporaries_repeat1,
  [2686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(372), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_block_repeat2,
  [2699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      anon_sym_DOT,
    STATE(101), 1,
      aux_sym_dynamic_array_repeat1,
  [2712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_temporaries_repeat1,
  [2725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      anon_sym_DOT,
    STATE(101), 1,
      aux_sym_dynamic_array_repeat1,
  [2738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_number,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_byte_array_repeat1,
  [2751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(387), 1,
      anon_sym_DOT,
    STATE(108), 1,
      aux_sym_block_repeat2,
  [2764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_number,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_byte_array_repeat1,
  [2777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(387), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_block_repeat2,
  [2790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_block_repeat2,
  [2803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_block_repeat2,
  [2816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(349), 1,
      anon_sym_DOT,
    STATE(107), 1,
      aux_sym_block_repeat2,
  [2829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_number,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_byte_array_repeat1,
  [2842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_PIPE,
    ACTIONS(405), 1,
      sym_block_argument,
    STATE(95), 1,
      aux_sym_block_repeat1,
  [2855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      aux_sym_method_repeat1,
  [2877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      aux_sym_method_repeat1,
  [2890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [2906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      aux_sym_symbol_token1,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_identifier,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
  [2937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
  [2944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
  [2951] = 2,
    ACTIONS(417), 1,
      aux_sym_string_token1,
    ACTIONS(419), 1,
      sym_comment,
  [2958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
  [2965] = 2,
    ACTIONS(419), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_string_token1,
  [2972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
  [2986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
  [3007] = 2,
    ACTIONS(419), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 72,
  [SMALL_STATE(13)] = 144,
  [SMALL_STATE(14)] = 216,
  [SMALL_STATE(15)] = 288,
  [SMALL_STATE(16)] = 360,
  [SMALL_STATE(17)] = 429,
  [SMALL_STATE(18)] = 495,
  [SMALL_STATE(19)] = 558,
  [SMALL_STATE(20)] = 621,
  [SMALL_STATE(21)] = 681,
  [SMALL_STATE(22)] = 741,
  [SMALL_STATE(23)] = 801,
  [SMALL_STATE(24)] = 861,
  [SMALL_STATE(25)] = 921,
  [SMALL_STATE(26)] = 981,
  [SMALL_STATE(27)] = 1041,
  [SMALL_STATE(28)] = 1075,
  [SMALL_STATE(29)] = 1109,
  [SMALL_STATE(30)] = 1144,
  [SMALL_STATE(31)] = 1173,
  [SMALL_STATE(32)] = 1201,
  [SMALL_STATE(33)] = 1229,
  [SMALL_STATE(34)] = 1257,
  [SMALL_STATE(35)] = 1285,
  [SMALL_STATE(36)] = 1313,
  [SMALL_STATE(37)] = 1354,
  [SMALL_STATE(38)] = 1395,
  [SMALL_STATE(39)] = 1436,
  [SMALL_STATE(40)] = 1477,
  [SMALL_STATE(41)] = 1518,
  [SMALL_STATE(42)] = 1559,
  [SMALL_STATE(43)] = 1600,
  [SMALL_STATE(44)] = 1622,
  [SMALL_STATE(45)] = 1644,
  [SMALL_STATE(46)] = 1666,
  [SMALL_STATE(47)] = 1688,
  [SMALL_STATE(48)] = 1710,
  [SMALL_STATE(49)] = 1732,
  [SMALL_STATE(50)] = 1757,
  [SMALL_STATE(51)] = 1786,
  [SMALL_STATE(52)] = 1809,
  [SMALL_STATE(53)] = 1838,
  [SMALL_STATE(54)] = 1860,
  [SMALL_STATE(55)] = 1882,
  [SMALL_STATE(56)] = 1904,
  [SMALL_STATE(57)] = 1926,
  [SMALL_STATE(58)] = 1948,
  [SMALL_STATE(59)] = 1968,
  [SMALL_STATE(60)] = 1985,
  [SMALL_STATE(61)] = 2002,
  [SMALL_STATE(62)] = 2019,
  [SMALL_STATE(63)] = 2036,
  [SMALL_STATE(64)] = 2053,
  [SMALL_STATE(65)] = 2070,
  [SMALL_STATE(66)] = 2087,
  [SMALL_STATE(67)] = 2104,
  [SMALL_STATE(68)] = 2121,
  [SMALL_STATE(69)] = 2138,
  [SMALL_STATE(70)] = 2155,
  [SMALL_STATE(71)] = 2172,
  [SMALL_STATE(72)] = 2189,
  [SMALL_STATE(73)] = 2216,
  [SMALL_STATE(74)] = 2233,
  [SMALL_STATE(75)] = 2250,
  [SMALL_STATE(76)] = 2267,
  [SMALL_STATE(77)] = 2284,
  [SMALL_STATE(78)] = 2301,
  [SMALL_STATE(79)] = 2318,
  [SMALL_STATE(80)] = 2345,
  [SMALL_STATE(81)] = 2362,
  [SMALL_STATE(82)] = 2393,
  [SMALL_STATE(83)] = 2410,
  [SMALL_STATE(84)] = 2427,
  [SMALL_STATE(85)] = 2444,
  [SMALL_STATE(86)] = 2461,
  [SMALL_STATE(87)] = 2487,
  [SMALL_STATE(88)] = 2509,
  [SMALL_STATE(89)] = 2531,
  [SMALL_STATE(90)] = 2556,
  [SMALL_STATE(91)] = 2569,
  [SMALL_STATE(92)] = 2582,
  [SMALL_STATE(93)] = 2595,
  [SMALL_STATE(94)] = 2608,
  [SMALL_STATE(95)] = 2621,
  [SMALL_STATE(96)] = 2634,
  [SMALL_STATE(97)] = 2647,
  [SMALL_STATE(98)] = 2660,
  [SMALL_STATE(99)] = 2673,
  [SMALL_STATE(100)] = 2686,
  [SMALL_STATE(101)] = 2699,
  [SMALL_STATE(102)] = 2712,
  [SMALL_STATE(103)] = 2725,
  [SMALL_STATE(104)] = 2738,
  [SMALL_STATE(105)] = 2751,
  [SMALL_STATE(106)] = 2764,
  [SMALL_STATE(107)] = 2777,
  [SMALL_STATE(108)] = 2790,
  [SMALL_STATE(109)] = 2803,
  [SMALL_STATE(110)] = 2816,
  [SMALL_STATE(111)] = 2829,
  [SMALL_STATE(112)] = 2842,
  [SMALL_STATE(113)] = 2855,
  [SMALL_STATE(114)] = 2864,
  [SMALL_STATE(115)] = 2877,
  [SMALL_STATE(116)] = 2890,
  [SMALL_STATE(117)] = 2898,
  [SMALL_STATE(118)] = 2906,
  [SMALL_STATE(119)] = 2916,
  [SMALL_STATE(120)] = 2923,
  [SMALL_STATE(121)] = 2930,
  [SMALL_STATE(122)] = 2937,
  [SMALL_STATE(123)] = 2944,
  [SMALL_STATE(124)] = 2951,
  [SMALL_STATE(125)] = 2958,
  [SMALL_STATE(126)] = 2965,
  [SMALL_STATE(127)] = 2972,
  [SMALL_STATE(128)] = 2979,
  [SMALL_STATE(129)] = 2986,
  [SMALL_STATE(130)] = 2993,
  [SMALL_STATE(131)] = 3000,
  [SMALL_STATE(132)] = 3007,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2), SHIFT_REPEAT(119),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_selector, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_selector, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10), SHIFT(102),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporaries, 3, .dynamic_precedence = 10),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporaries, 3, .dynamic_precedence = 10),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_selector, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_selector, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_selector, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_selector, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_array_repeat1, 2), SHIFT_REPEAT(46),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_array_repeat1, 2), SHIFT_REPEAT(41),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_array_repeat1, 2), SHIFT_REPEAT(132),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_literal_array_repeat1, 2), SHIFT_REPEAT(46),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_array_repeat1, 2), SHIFT_REPEAT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_array_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_array_repeat1, 2), SHIFT_REPEAT(36),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_literal_array_repeat1, 2), SHIFT_REPEAT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_array_literal, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_array_literal, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_array, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_array, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_array_literal, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_array_literal, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_array_element, 1, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_array_element, 1, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_array, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_array, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascaded_binary_message, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_message, 3, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cascade_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cascade_repeat1, 2), SHIFT_REPEAT(87),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cascade_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT_REPEAT(20),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascaded_keyword_message, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascaded_keyword_message, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_message, 2, .production_id = 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_message, 2, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascade, 2, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascade, 2, .production_id = 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_message, 2, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_message, 2, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascaded_unary_message, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascaded_unary_message, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_temporaries_repeat1, 1),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary, 1), REDUCE(aux_sym_temporaries_repeat1, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(95),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2), SHIFT_REPEAT(7),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_temporaries_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_temporaries_repeat1, 2), SHIFT_REPEAT(99),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2), SHIFT_REPEAT(23),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(16),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2), SHIFT_REPEAT(111),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [423] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_smalltalk(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_keyword,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
