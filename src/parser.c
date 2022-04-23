#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  sym_block_argument = 21,
  anon_sym_LBRACK = 22,
  sym_true = 23,
  sym_false = 24,
  sym_thisContext = 25,
  sym_self = 26,
  sym_super = 27,
  sym_nil = 28,
  sym_method = 29,
  sym_temporaries = 30,
  sym_selector = 31,
  sym_unary_selector = 32,
  sym_binary_selector = 33,
  sym_keyword_selector = 34,
  sym_unary_message = 35,
  sym_binary_message = 36,
  sym_keyword_message = 37,
  sym_assignment = 38,
  sym_cascade = 39,
  sym_cascaded_unary = 40,
  sym_cascaded_binary = 41,
  sym_cascaded_keyword = 42,
  sym_string = 43,
  sym_symbol = 44,
  sym_statement = 45,
  sym_return = 46,
  sym_dynamic_array = 47,
  sym_byte_array = 48,
  sym_parenthesized_expression = 49,
  sym_block = 50,
  sym_primary = 51,
  sym_expression = 52,
  aux_sym_method_repeat1 = 53,
  aux_sym_temporaries_repeat1 = 54,
  aux_sym_keyword_selector_repeat1 = 55,
  aux_sym_keyword_message_repeat1 = 56,
  aux_sym_cascade_repeat1 = 57,
  aux_sym_dynamic_array_repeat1 = 58,
  aux_sym_byte_array_repeat1 = 59,
  aux_sym_block_repeat1 = 60,
  aux_sym_block_repeat2 = 61,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_block_argument] = "block_argument",
  [anon_sym_LBRACK] = "[",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_thisContext] = "thisContext",
  [sym_self] = "self",
  [sym_super] = "super",
  [sym_nil] = "nil",
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
  [sym_cascaded_unary] = "unary_message",
  [sym_cascaded_binary] = "binary_message",
  [sym_cascaded_keyword] = "keyword_message",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym_statement] = "statement",
  [sym_return] = "return",
  [sym_dynamic_array] = "dynamic_array",
  [sym_byte_array] = "byte_array",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_block_argument] = sym_block_argument,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_thisContext] = sym_thisContext,
  [sym_self] = sym_self,
  [sym_super] = sym_super,
  [sym_nil] = sym_nil,
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
  [sym_cascaded_unary] = sym_unary_message,
  [sym_cascaded_binary] = sym_binary_message,
  [sym_cascaded_keyword] = sym_keyword_message,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym_statement] = sym_statement,
  [sym_return] = sym_return,
  [sym_dynamic_array] = sym_dynamic_array,
  [sym_byte_array] = sym_byte_array,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_cascaded_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_cascaded_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_cascaded_keyword] = {
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
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_receiver, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '@') ||
          lookahead == '~') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '~') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 7:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 9:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '^') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(78);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '[') ADVANCE(82);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'C') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 's') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 's') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_block_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_thisContext);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_thisContext);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_self);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_super);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
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
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_block_argument] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_thisContext] = ACTIONS(1),
    [sym_self] = ACTIONS(1),
    [sym_super] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
  },
  [1] = {
    [sym_method] = STATE(124),
    [sym_selector] = STATE(4),
    [sym_unary_selector] = STATE(37),
    [sym_binary_selector] = STATE(37),
    [sym_keyword_selector] = STATE(37),
    [aux_sym_keyword_selector_repeat1] = STATE(30),
    [sym_keyword] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_binary_operator] = ACTIONS(7),
  },
  [2] = {
    [sym_temporaries] = STATE(8),
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(107),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [aux_sym_block_repeat1] = STATE(105),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_block_argument] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [3] = {
    [sym_temporaries] = STATE(10),
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(87),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [aux_sym_temporaries_repeat1] = STATE(85),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [4] = {
    [sym_temporaries] = STATE(6),
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(99),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [aux_sym_method_repeat1] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(49),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [5] = {
    [sym_temporaries] = STATE(7),
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(91),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(49),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [6] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(104),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [aux_sym_method_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(47),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [7] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(109),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [8] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(87),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [9] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(111),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [10] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(91),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [anon_sym_DOT] = ACTIONS(51),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [11] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(112),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [12] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(112),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [13] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(112),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [14] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(112),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [15] = {
    [sym_unary_message] = STATE(58),
    [sym_binary_message] = STATE(58),
    [sym_keyword_message] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_cascade] = STATE(58),
    [sym_string] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_statement] = STATE(112),
    [sym_return] = STATE(100),
    [sym_dynamic_array] = STATE(69),
    [sym_byte_array] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_block] = STATE(69),
    [sym_primary] = STATE(58),
    [sym_expression] = STATE(44),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_expression,
    STATE(100), 1,
      sym_return,
    STATE(112), 1,
      sym_statement,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [62] = 14,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [121] = 13,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [177] = 13,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [233] = 12,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [286] = 12,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [339] = 12,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(41), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [392] = 12,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(42), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [445] = 12,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(38), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [498] = 12,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [551] = 12,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [604] = 12,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(39), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [657] = 12,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(40), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(58), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
    STATE(69), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [710] = 4,
    ACTIONS(81), 1,
      sym_keyword,
    STATE(29), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(84), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(79), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [740] = 4,
    ACTIONS(3), 1,
      sym_keyword,
    STATE(29), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(88), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [770] = 5,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(85), 1,
      aux_sym_temporaries_repeat1,
    ACTIONS(94), 7,
      anon_sym_POUND,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(90), 10,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [801] = 2,
    ACTIONS(84), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(79), 12,
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
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [826] = 2,
    ACTIONS(101), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(99), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [850] = 2,
    ACTIONS(105), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(103), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [874] = 2,
    ACTIONS(94), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(90), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [898] = 2,
    ACTIONS(109), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(107), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [922] = 2,
    ACTIONS(113), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(111), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_number,
      anon_sym_SQUOTE,
      sym_character,
      anon_sym_CARET,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [946] = 6,
    ACTIONS(117), 1,
      sym_keyword,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_binary_operator,
    STATE(52), 1,
      aux_sym_keyword_message_repeat1,
    STATE(50), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [972] = 6,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_binary_operator,
    ACTIONS(126), 1,
      sym_keyword,
    STATE(52), 1,
      aux_sym_keyword_message_repeat1,
    STATE(50), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [998] = 4,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_keyword_message_repeat1,
    STATE(50), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1020] = 5,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_keyword_message_repeat1,
    STATE(50), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1044] = 6,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_binary_operator,
    ACTIONS(134), 1,
      sym_keyword,
    STATE(52), 1,
      aux_sym_keyword_message_repeat1,
    STATE(50), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1070] = 6,
    ACTIONS(126), 1,
      sym_keyword,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_binary_operator,
    STATE(55), 1,
      aux_sym_keyword_message_repeat1,
    STATE(54), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1095] = 6,
    ACTIONS(126), 1,
      sym_keyword,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_binary_operator,
    STATE(55), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
    STATE(54), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
  [1118] = 4,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1137] = 6,
    ACTIONS(126), 1,
      sym_keyword,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_binary_operator,
    STATE(55), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
    STATE(54), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
  [1160] = 4,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1179] = 4,
    ACTIONS(154), 1,
      sym_keyword,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1198] = 3,
    ACTIONS(161), 1,
      anon_sym_COLON_EQ,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(159), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1215] = 4,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1234] = 8,
    ACTIONS(126), 1,
      sym_keyword,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_binary_operator,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_keyword_message_repeat1,
    STATE(89), 1,
      aux_sym_dynamic_array_repeat1,
    STATE(54), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
  [1261] = 4,
    ACTIONS(179), 1,
      sym_keyword,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1280] = 4,
    ACTIONS(188), 1,
      sym_keyword,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1299] = 4,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1318] = 5,
    ACTIONS(179), 1,
      sym_keyword,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1339] = 4,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1358] = 3,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1374] = 2,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(206), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1388] = 2,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1402] = 3,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_COLON_EQ,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1418] = 2,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1432] = 2,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(220), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1446] = 2,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1460] = 2,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(228), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1474] = 2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1488] = 2,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1502] = 2,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1516] = 2,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(202), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1530] = 2,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(159), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1544] = 2,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1558] = 2,
    ACTIONS(244), 1,
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
  [1572] = 2,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(246), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1586] = 2,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1600] = 2,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1614] = 2,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1628] = 2,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(262), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1642] = 2,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(266), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1656] = 2,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1670] = 6,
    ACTIONS(126), 1,
      sym_keyword,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_binary_operator,
    STATE(55), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(274), 2,
      anon_sym_DOT,
      anon_sym_RBRACE,
    STATE(54), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
  [1692] = 2,
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
  [1706] = 2,
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
  [1720] = 6,
    ACTIONS(126), 1,
      sym_keyword,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_binary_operator,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_keyword_message_repeat1,
    STATE(54), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
  [1741] = 5,
    ACTIONS(126), 1,
      sym_keyword,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym_binary_operator,
    STATE(53), 1,
      aux_sym_keyword_message_repeat1,
    STATE(67), 3,
      sym_cascaded_unary,
      sym_cascaded_binary,
      sym_cascaded_keyword,
  [1759] = 5,
    ACTIONS(163), 1,
      sym_binary_operator,
    ACTIONS(214), 1,
      anon_sym_COLON_EQ,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(159), 3,
      anon_sym_DOT,
      sym_keyword,
      anon_sym_RBRACK,
  [1777] = 3,
    ACTIONS(295), 1,
      anon_sym_PIPE,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_temporaries_repeat1,
  [1787] = 3,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(299), 1,
      anon_sym_DOT,
    STATE(95), 1,
      aux_sym_block_repeat2,
  [1797] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    STATE(93), 1,
      aux_sym_block_repeat2,
  [1807] = 3,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym_dynamic_array_repeat1,
  [1817] = 3,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym_dynamic_array_repeat1,
  [1827] = 3,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(85), 1,
      aux_sym_temporaries_repeat1,
  [1837] = 3,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(310), 1,
      anon_sym_DOT,
    STATE(86), 1,
      aux_sym_block_repeat2,
  [1847] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    STATE(95), 1,
      aux_sym_block_repeat2,
  [1857] = 3,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(310), 1,
      anon_sym_DOT,
    STATE(95), 1,
      aux_sym_block_repeat2,
  [1867] = 3,
    ACTIONS(312), 1,
      sym_number,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_byte_array_repeat1,
  [1877] = 3,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_block_repeat2,
  [1887] = 3,
    ACTIONS(321), 1,
      sym_number,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_byte_array_repeat1,
  [1897] = 3,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    ACTIONS(328), 1,
      sym_block_argument,
    STATE(97), 1,
      aux_sym_block_repeat1,
  [1907] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      aux_sym_method_repeat1,
  [1917] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym_method_repeat1,
  [1927] = 1,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1933] = 3,
    ACTIONS(333), 1,
      anon_sym_PIPE,
    ACTIONS(335), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_temporaries_repeat1,
  [1943] = 3,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      anon_sym_DOT,
    STATE(102), 1,
      aux_sym_method_repeat1,
  [1953] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      aux_sym_method_repeat1,
  [1963] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    STATE(98), 1,
      aux_sym_method_repeat1,
  [1973] = 3,
    ACTIONS(345), 1,
      anon_sym_PIPE,
    ACTIONS(347), 1,
      sym_block_argument,
    STATE(97), 1,
      aux_sym_block_repeat1,
  [1983] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      aux_sym_method_repeat1,
  [1993] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    ACTIONS(349), 1,
      anon_sym_DOT,
    STATE(92), 1,
      aux_sym_block_repeat2,
  [2003] = 3,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(351), 1,
      anon_sym_DOT,
    STATE(95), 1,
      aux_sym_block_repeat2,
  [2013] = 3,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(299), 1,
      anon_sym_DOT,
    STATE(108), 1,
      aux_sym_block_repeat2,
  [2023] = 3,
    ACTIONS(353), 1,
      sym_number,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_byte_array_repeat1,
  [2033] = 1,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [2038] = 1,
    ACTIONS(319), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2043] = 2,
    ACTIONS(357), 1,
      anon_sym_SQUOTE,
    ACTIONS(359), 1,
      aux_sym_symbol_token1,
  [2050] = 1,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
  [2054] = 1,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
  [2058] = 1,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
  [2062] = 1,
    ACTIONS(361), 1,
      aux_sym_string_token1,
  [2066] = 1,
    ACTIONS(363), 1,
      anon_sym_SQUOTE,
  [2070] = 1,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
  [2074] = 1,
    ACTIONS(365), 1,
      anon_sym_SQUOTE,
  [2078] = 1,
    ACTIONS(367), 1,
      sym_identifier,
  [2082] = 1,
    ACTIONS(369), 1,
      aux_sym_string_token1,
  [2086] = 1,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
  [2090] = 1,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
  [2094] = 1,
    ACTIONS(373), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 62,
  [SMALL_STATE(18)] = 121,
  [SMALL_STATE(19)] = 177,
  [SMALL_STATE(20)] = 233,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 339,
  [SMALL_STATE(23)] = 392,
  [SMALL_STATE(24)] = 445,
  [SMALL_STATE(25)] = 498,
  [SMALL_STATE(26)] = 551,
  [SMALL_STATE(27)] = 604,
  [SMALL_STATE(28)] = 657,
  [SMALL_STATE(29)] = 710,
  [SMALL_STATE(30)] = 740,
  [SMALL_STATE(31)] = 770,
  [SMALL_STATE(32)] = 801,
  [SMALL_STATE(33)] = 826,
  [SMALL_STATE(34)] = 850,
  [SMALL_STATE(35)] = 874,
  [SMALL_STATE(36)] = 898,
  [SMALL_STATE(37)] = 922,
  [SMALL_STATE(38)] = 946,
  [SMALL_STATE(39)] = 972,
  [SMALL_STATE(40)] = 998,
  [SMALL_STATE(41)] = 1020,
  [SMALL_STATE(42)] = 1044,
  [SMALL_STATE(43)] = 1070,
  [SMALL_STATE(44)] = 1095,
  [SMALL_STATE(45)] = 1118,
  [SMALL_STATE(46)] = 1137,
  [SMALL_STATE(47)] = 1160,
  [SMALL_STATE(48)] = 1179,
  [SMALL_STATE(49)] = 1198,
  [SMALL_STATE(50)] = 1215,
  [SMALL_STATE(51)] = 1234,
  [SMALL_STATE(52)] = 1261,
  [SMALL_STATE(53)] = 1280,
  [SMALL_STATE(54)] = 1299,
  [SMALL_STATE(55)] = 1318,
  [SMALL_STATE(56)] = 1339,
  [SMALL_STATE(57)] = 1358,
  [SMALL_STATE(58)] = 1374,
  [SMALL_STATE(59)] = 1388,
  [SMALL_STATE(60)] = 1402,
  [SMALL_STATE(61)] = 1418,
  [SMALL_STATE(62)] = 1432,
  [SMALL_STATE(63)] = 1446,
  [SMALL_STATE(64)] = 1460,
  [SMALL_STATE(65)] = 1474,
  [SMALL_STATE(66)] = 1488,
  [SMALL_STATE(67)] = 1502,
  [SMALL_STATE(68)] = 1516,
  [SMALL_STATE(69)] = 1530,
  [SMALL_STATE(70)] = 1544,
  [SMALL_STATE(71)] = 1558,
  [SMALL_STATE(72)] = 1572,
  [SMALL_STATE(73)] = 1586,
  [SMALL_STATE(74)] = 1600,
  [SMALL_STATE(75)] = 1614,
  [SMALL_STATE(76)] = 1628,
  [SMALL_STATE(77)] = 1642,
  [SMALL_STATE(78)] = 1656,
  [SMALL_STATE(79)] = 1670,
  [SMALL_STATE(80)] = 1692,
  [SMALL_STATE(81)] = 1706,
  [SMALL_STATE(82)] = 1720,
  [SMALL_STATE(83)] = 1741,
  [SMALL_STATE(84)] = 1759,
  [SMALL_STATE(85)] = 1777,
  [SMALL_STATE(86)] = 1787,
  [SMALL_STATE(87)] = 1797,
  [SMALL_STATE(88)] = 1807,
  [SMALL_STATE(89)] = 1817,
  [SMALL_STATE(90)] = 1827,
  [SMALL_STATE(91)] = 1837,
  [SMALL_STATE(92)] = 1847,
  [SMALL_STATE(93)] = 1857,
  [SMALL_STATE(94)] = 1867,
  [SMALL_STATE(95)] = 1877,
  [SMALL_STATE(96)] = 1887,
  [SMALL_STATE(97)] = 1897,
  [SMALL_STATE(98)] = 1907,
  [SMALL_STATE(99)] = 1917,
  [SMALL_STATE(100)] = 1927,
  [SMALL_STATE(101)] = 1933,
  [SMALL_STATE(102)] = 1943,
  [SMALL_STATE(103)] = 1953,
  [SMALL_STATE(104)] = 1963,
  [SMALL_STATE(105)] = 1973,
  [SMALL_STATE(106)] = 1983,
  [SMALL_STATE(107)] = 1993,
  [SMALL_STATE(108)] = 2003,
  [SMALL_STATE(109)] = 2013,
  [SMALL_STATE(110)] = 2023,
  [SMALL_STATE(111)] = 2033,
  [SMALL_STATE(112)] = 2038,
  [SMALL_STATE(113)] = 2043,
  [SMALL_STATE(114)] = 2050,
  [SMALL_STATE(115)] = 2054,
  [SMALL_STATE(116)] = 2058,
  [SMALL_STATE(117)] = 2062,
  [SMALL_STATE(118)] = 2066,
  [SMALL_STATE(119)] = 2070,
  [SMALL_STATE(120)] = 2074,
  [SMALL_STATE(121)] = 2078,
  [SMALL_STATE(122)] = 2082,
  [SMALL_STATE(123)] = 2086,
  [SMALL_STATE(124)] = 2090,
  [SMALL_STATE(125)] = 2094,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2), SHIFT_REPEAT(121),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_selector, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_selector, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10), SHIFT(85),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_selector, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_selector, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporaries, 3, .dynamic_precedence = 10),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporaries, 3, .dynamic_precedence = 10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_selector, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_selector, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascaded_binary, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cascaded_binary, 2), SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_message, 3, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_message, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT(23),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascade, 3, .dynamic_precedence = -1, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascade, 3, .dynamic_precedence = -1, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cascade, 3, .dynamic_precedence = -1, .production_id = 1), SHIFT(83),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT_REPEAT(23),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascade, 2, .dynamic_precedence = -1, .production_id = 1),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cascade, 2, .dynamic_precedence = -1, .production_id = 1), SHIFT(83),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascade, 2, .dynamic_precedence = -1, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cascaded_keyword, 1, .dynamic_precedence = -1), REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1, .production_id = 1),
  [179] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_cascaded_keyword, 1, .dynamic_precedence = -1), REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1, .production_id = 1), SHIFT(23),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_cascaded_keyword, 1, .dynamic_precedence = -1), REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascaded_keyword, 1, .dynamic_precedence = -1),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cascaded_keyword, 1, .dynamic_precedence = -1), SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascaded_keyword, 1, .dynamic_precedence = -1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cascade_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cascade_repeat1, 2), SHIFT_REPEAT(83),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cascade_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_message, 2, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascaded_unary, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_message, 2, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascaded_unary, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_temporaries_repeat1, 1),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary, 1), REDUCE(aux_sym_temporaries_repeat1, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2), SHIFT_REPEAT(20),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(16),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2), SHIFT_REPEAT(96),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(97),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_temporaries_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_temporaries_repeat1, 2), SHIFT_REPEAT(101),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2), SHIFT_REPEAT(9),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [371] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
