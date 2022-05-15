#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  sym_comment = 29,
  sym_method = 30,
  sym_temporaries = 31,
  sym_selector = 32,
  sym_unary_selector = 33,
  sym_binary_selector = 34,
  sym_keyword_selector = 35,
  sym_unary_message = 36,
  sym_binary_message = 37,
  sym_keyword_message = 38,
  sym_assignment = 39,
  sym_cascade = 40,
  sym__cascaded_send = 41,
  sym_cascaded_unary_message = 42,
  sym_cascaded_binary_message = 43,
  sym_cascaded_keyword_message = 44,
  sym_string = 45,
  sym_symbol = 46,
  sym_statement = 47,
  sym_return = 48,
  sym_dynamic_array = 49,
  sym_byte_array = 50,
  sym_parenthesized_expression = 51,
  sym_block = 52,
  sym_primary = 53,
  sym_expression = 54,
  aux_sym_method_repeat1 = 55,
  aux_sym_temporaries_repeat1 = 56,
  aux_sym_keyword_selector_repeat1 = 57,
  aux_sym_keyword_message_repeat1 = 58,
  aux_sym_cascade_repeat1 = 59,
  aux_sym_dynamic_array_repeat1 = 60,
  aux_sym_byte_array_repeat1 = 61,
  aux_sym_block_repeat1 = 62,
  aux_sym_block_repeat2 = 63,
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
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '~') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(22);
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
          lookahead == '~') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '~') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 8:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 9:
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 10:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(80);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '[') ADVANCE(84);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 's') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 's') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_block_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_thisContext);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_thisContext);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_self);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_super);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 102:
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
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_method] = STATE(112),
    [sym_selector] = STATE(4),
    [sym_unary_selector] = STATE(35),
    [sym_binary_selector] = STATE(35),
    [sym_keyword_selector] = STATE(35),
    [aux_sym_keyword_selector_repeat1] = STATE(27),
    [sym_keyword] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_binary_operator] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_temporaries] = STATE(7),
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(77),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [aux_sym_block_repeat1] = STATE(84),
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
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_block_argument] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_temporaries] = STATE(8),
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(83),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [aux_sym_temporaries_repeat1] = STATE(82),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(41),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_temporaries] = STATE(6),
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(87),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [aux_sym_method_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_temporaries] = STATE(10),
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(95),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(94),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [aux_sym_method_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(83),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(95),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [anon_sym_DOT] = ACTIONS(53),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(103),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(86),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [anon_sym_DOT] = ACTIONS(61),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(102),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(102),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(102),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(102),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_unary_message] = STATE(59),
    [sym_binary_message] = STATE(59),
    [sym_keyword_message] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_cascade] = STATE(59),
    [sym_string] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_statement] = STATE(102),
    [sym_return] = STATE(85),
    [sym_dynamic_array] = STATE(53),
    [sym_byte_array] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_block] = STATE(53),
    [sym_primary] = STATE(59),
    [sym_expression] = STATE(61),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_character] = ACTIONS(15),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_POUND_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_thisContext] = ACTIONS(37),
    [sym_self] = ACTIONS(37),
    [sym_super] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_expression,
    STATE(85), 1,
      sym_return,
    STATE(102), 1,
      sym_statement,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [65] = 15,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [127] = 14,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [186] = 14,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [245] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [301] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(74), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [357] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [413] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [469] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [525] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [581] = 13,
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
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number,
      sym_character,
    ACTIONS(37), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(53), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
    STATE(59), 6,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_cascade,
      sym_primary,
  [637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_keyword,
    STATE(28), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(81), 8,
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
  [670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_keyword,
    STATE(28), 1,
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
    ACTIONS(83), 11,
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
  [703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(83), 12,
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
  [731] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(82), 1,
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
  [765] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [819] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [846] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [873] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [900] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_binary_operator,
    STATE(41), 1,
      aux_sym_keyword_message_repeat1,
    STATE(44), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [925] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_binary_operator,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_keyword_message_repeat1,
    STATE(44), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_keyword_message_repeat1,
    STATE(44), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [977] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_binary_operator,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_keyword_message_repeat1,
    STATE(44), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1028] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_keyword,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1094] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COLON_EQ,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(131), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1306] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_binary_operator,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_keyword_message_repeat1,
    STATE(44), 1,
      aux_sym_cascade_repeat1,
    STATE(90), 1,
      aux_sym_dynamic_array_repeat1,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1405] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_binary_operator,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_keyword_message_repeat1,
    STATE(44), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1432] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_binary_operator,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_keyword_message_repeat1,
    STATE(44), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(229), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(245), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_binary_operator,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_keyword_message_repeat1,
    STATE(44), 1,
      aux_sym_cascade_repeat1,
    ACTIONS(249), 2,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COLON_EQ,
    ACTIONS(159), 1,
      sym_binary_operator,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(155), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_keyword,
      anon_sym_RBRACK,
  [1643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_binary_operator,
    STATE(42), 1,
      aux_sym_keyword_message_repeat1,
    STATE(49), 4,
      sym__cascaded_send,
      sym_cascaded_unary_message,
      sym_cascaded_binary_message,
      sym_cascaded_keyword_message,
  [1665] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_binary_operator,
    ACTIONS(123), 1,
      sym_keyword,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_keyword_message_repeat1,
    STATE(44), 1,
      aux_sym_cascade_repeat1,
  [1690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_PIPE,
    ACTIONS(264), 1,
      sym_block_argument,
    STATE(75), 1,
      aux_sym_block_repeat1,
  [1703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_block_repeat2,
  [1716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(91), 1,
      aux_sym_block_repeat2,
  [1729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_block_repeat2,
  [1742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      aux_sym_method_repeat1,
  [1755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_number,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_byte_array_repeat1,
  [1768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      aux_sym_method_repeat1,
  [1781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym_temporaries_repeat1,
  [1794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    STATE(97), 1,
      aux_sym_block_repeat2,
  [1807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PIPE,
    ACTIONS(287), 1,
      sym_block_argument,
    STATE(75), 1,
      aux_sym_block_repeat1,
  [1820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_block_repeat2,
  [1842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(98), 1,
      aux_sym_method_repeat1,
  [1855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(82), 1,
      aux_sym_temporaries_repeat1,
  [1868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_number,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_byte_array_repeat1,
  [1881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(92), 1,
      aux_sym_dynamic_array_repeat1,
  [1894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_block_repeat2,
  [1907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(92), 1,
      aux_sym_dynamic_array_repeat1,
  [1920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym_temporaries_repeat1,
  [1933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym_method_repeat1,
  [1946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(308), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_block_repeat2,
  [1959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_number,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_byte_array_repeat1,
  [1972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(308), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_block_repeat2,
  [1985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      aux_sym_method_repeat1,
  [1998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_block_repeat2,
  [2011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(321), 1,
      anon_sym_DOT,
    STATE(100), 1,
      aux_sym_method_repeat1,
  [2024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_symbol_token1,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [2050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_identifier,
  [2057] = 2,
    ACTIONS(330), 1,
      aux_sym_string_token1,
    ACTIONS(332), 1,
      sym_comment,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
  [2071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
  [2078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
  [2085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
  [2092] = 2,
    ACTIONS(332), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_string_token1,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
  [2106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_identifier,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 65,
  [SMALL_STATE(18)] = 127,
  [SMALL_STATE(19)] = 186,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 301,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 413,
  [SMALL_STATE(24)] = 469,
  [SMALL_STATE(25)] = 525,
  [SMALL_STATE(26)] = 581,
  [SMALL_STATE(27)] = 637,
  [SMALL_STATE(28)] = 670,
  [SMALL_STATE(29)] = 703,
  [SMALL_STATE(30)] = 731,
  [SMALL_STATE(31)] = 765,
  [SMALL_STATE(32)] = 792,
  [SMALL_STATE(33)] = 819,
  [SMALL_STATE(34)] = 846,
  [SMALL_STATE(35)] = 873,
  [SMALL_STATE(36)] = 900,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 954,
  [SMALL_STATE(39)] = 977,
  [SMALL_STATE(40)] = 1006,
  [SMALL_STATE(41)] = 1028,
  [SMALL_STATE(42)] = 1050,
  [SMALL_STATE(43)] = 1072,
  [SMALL_STATE(44)] = 1094,
  [SMALL_STATE(45)] = 1116,
  [SMALL_STATE(46)] = 1136,
  [SMALL_STATE(47)] = 1153,
  [SMALL_STATE(48)] = 1170,
  [SMALL_STATE(49)] = 1187,
  [SMALL_STATE(50)] = 1204,
  [SMALL_STATE(51)] = 1221,
  [SMALL_STATE(52)] = 1238,
  [SMALL_STATE(53)] = 1255,
  [SMALL_STATE(54)] = 1272,
  [SMALL_STATE(55)] = 1289,
  [SMALL_STATE(56)] = 1306,
  [SMALL_STATE(57)] = 1337,
  [SMALL_STATE(58)] = 1354,
  [SMALL_STATE(59)] = 1371,
  [SMALL_STATE(60)] = 1388,
  [SMALL_STATE(61)] = 1405,
  [SMALL_STATE(62)] = 1432,
  [SMALL_STATE(63)] = 1459,
  [SMALL_STATE(64)] = 1476,
  [SMALL_STATE(65)] = 1493,
  [SMALL_STATE(66)] = 1510,
  [SMALL_STATE(67)] = 1527,
  [SMALL_STATE(68)] = 1544,
  [SMALL_STATE(69)] = 1561,
  [SMALL_STATE(70)] = 1578,
  [SMALL_STATE(71)] = 1595,
  [SMALL_STATE(72)] = 1621,
  [SMALL_STATE(73)] = 1643,
  [SMALL_STATE(74)] = 1665,
  [SMALL_STATE(75)] = 1690,
  [SMALL_STATE(76)] = 1703,
  [SMALL_STATE(77)] = 1716,
  [SMALL_STATE(78)] = 1729,
  [SMALL_STATE(79)] = 1742,
  [SMALL_STATE(80)] = 1755,
  [SMALL_STATE(81)] = 1768,
  [SMALL_STATE(82)] = 1781,
  [SMALL_STATE(83)] = 1794,
  [SMALL_STATE(84)] = 1807,
  [SMALL_STATE(85)] = 1820,
  [SMALL_STATE(86)] = 1829,
  [SMALL_STATE(87)] = 1842,
  [SMALL_STATE(88)] = 1855,
  [SMALL_STATE(89)] = 1868,
  [SMALL_STATE(90)] = 1881,
  [SMALL_STATE(91)] = 1894,
  [SMALL_STATE(92)] = 1907,
  [SMALL_STATE(93)] = 1920,
  [SMALL_STATE(94)] = 1933,
  [SMALL_STATE(95)] = 1946,
  [SMALL_STATE(96)] = 1959,
  [SMALL_STATE(97)] = 1972,
  [SMALL_STATE(98)] = 1985,
  [SMALL_STATE(99)] = 1998,
  [SMALL_STATE(100)] = 2011,
  [SMALL_STATE(101)] = 2024,
  [SMALL_STATE(102)] = 2034,
  [SMALL_STATE(103)] = 2042,
  [SMALL_STATE(104)] = 2050,
  [SMALL_STATE(105)] = 2057,
  [SMALL_STATE(106)] = 2064,
  [SMALL_STATE(107)] = 2071,
  [SMALL_STATE(108)] = 2078,
  [SMALL_STATE(109)] = 2085,
  [SMALL_STATE(110)] = 2092,
  [SMALL_STATE(111)] = 2099,
  [SMALL_STATE(112)] = 2106,
  [SMALL_STATE(113)] = 2113,
  [SMALL_STATE(114)] = 2120,
  [SMALL_STATE(115)] = 2127,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_selector, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_selector, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2), SHIFT_REPEAT(104),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10), SHIFT(82),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_selector, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_selector, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporaries, 3, .dynamic_precedence = 10),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporaries, 3, .dynamic_precedence = 10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_selector, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_selector, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_message, 3, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascaded_binary_message, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cascade_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cascade_repeat1, 2), SHIFT_REPEAT(73),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cascade_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_message, 2, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_message, 2, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascaded_keyword_message, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascaded_keyword_message, 1),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT_REPEAT(23),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascade, 2, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascade, 2, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cascaded_unary_message, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cascaded_unary_message, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 5),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_message, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_message, 2, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_temporaries_repeat1, 1),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary, 1), REDUCE(aux_sym_temporaries_repeat1, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2), SHIFT_REPEAT(89),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2), SHIFT_REPEAT(26),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_temporaries_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_temporaries_repeat1, 2), SHIFT_REPEAT(93),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(16),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2), SHIFT_REPEAT(9),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [340] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
