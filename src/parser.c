#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym_keyword = 1,
  anon_sym_DOT = 2,
  anon_sym_PIPE = 3,
  anon_sym_COLON_EQ = 4,
  sym_number = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_string_token1 = 7,
  anon_sym_POUND = 8,
  aux_sym_symbol_token1 = 9,
  sym_character = 10,
  sym_identifier = 11,
  sym_binary_operator = 12,
  anon_sym_CARET = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_POUND_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  sym_block_argument = 20,
  anon_sym_LBRACK = 21,
  sym_true = 22,
  sym_false = 23,
  sym_thisContext = 24,
  sym_self = 25,
  sym_super = 26,
  sym_nil = 27,
  sym_method = 28,
  sym_temporaries = 29,
  sym_selector = 30,
  sym_unary_selector = 31,
  sym_binary_selector = 32,
  sym_keyword_selector = 33,
  sym_unary_message = 34,
  sym_binary_message = 35,
  sym_keyword_message = 36,
  sym_assignment = 37,
  sym_string = 38,
  sym_symbol = 39,
  sym_statement = 40,
  sym_return = 41,
  sym_dynamic_array = 42,
  sym_byte_array = 43,
  sym_parenthesized_expression = 44,
  sym_block = 45,
  sym_primary = 46,
  sym_expression = 47,
  aux_sym_method_repeat1 = 48,
  aux_sym_temporaries_repeat1 = 49,
  aux_sym_keyword_selector_repeat1 = 50,
  aux_sym_keyword_message_repeat1 = 51,
  aux_sym_dynamic_array_repeat1 = 52,
  aux_sym_byte_array_repeat1 = 53,
  aux_sym_block_repeat1 = 54,
  aux_sym_block_repeat2 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [anon_sym_DOT] = ".",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON_EQ] = ":=",
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
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '~') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(20);
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
          lookahead == '~') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ']') ADVANCE(82);
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
          lookahead == '~') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 7:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 8:
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 9:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
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
          lookahead == '~') ADVANCE(77);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'r') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '[') ADVANCE(81);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 's') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 's') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 't') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 't') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_block_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == ':') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == ':') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_thisContext);
      if (lookahead == ':') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_thisContext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_self);
      if (lookahead == ':') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_self);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_super);
      if (lookahead == ':') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_super);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == ':') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_nil);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
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
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
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
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 21},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
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
    [sym_method] = STATE(101),
    [sym_selector] = STATE(4),
    [sym_unary_selector] = STATE(34),
    [sym_binary_selector] = STATE(34),
    [sym_keyword_selector] = STATE(34),
    [aux_sym_keyword_selector_repeat1] = STATE(27),
    [sym_keyword] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_binary_operator] = ACTIONS(7),
  },
  [2] = {
    [sym_temporaries] = STATE(7),
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(78),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
    [aux_sym_block_repeat1] = STATE(89),
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
    [sym_temporaries] = STATE(8),
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(66),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
    [aux_sym_temporaries_repeat1] = STATE(70),
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
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(73),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
    [aux_sym_method_repeat1] = STATE(69),
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
    [sym_temporaries] = STATE(10),
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(86),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
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
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(91),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
    [aux_sym_method_repeat1] = STATE(87),
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
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(66),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
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
  [8] = {
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(86),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
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
  [9] = {
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(94),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(57),
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
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(67),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(61),
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
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(93),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
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
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(93),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
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
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(93),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
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
  [14] = {
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(93),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
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
  [15] = {
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(93),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_character] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_POUND_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_thisContext] = ACTIONS(35),
    [sym_self] = ACTIONS(35),
    [sym_super] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
  [16] = {
    [sym_unary_message] = STATE(57),
    [sym_binary_message] = STATE(57),
    [sym_keyword_message] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_string] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_statement] = STATE(93),
    [sym_return] = STATE(71),
    [sym_dynamic_array] = STATE(45),
    [sym_byte_array] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_block] = STATE(45),
    [sym_primary] = STATE(57),
    [sym_expression] = STATE(62),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
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
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    STATE(57), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(45), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [55] = 13,
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
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    STATE(57), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(45), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [110] = 12,
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
    STATE(61), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    STATE(57), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(45), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [162] = 12,
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
    STATE(65), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    STATE(57), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(45), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [214] = 12,
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
    STATE(60), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    STATE(57), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(45), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [266] = 12,
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
    STATE(39), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    STATE(57), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(45), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [318] = 12,
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
    STATE(64), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    STATE(57), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(45), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [370] = 12,
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
    STATE(37), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    STATE(57), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(45), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [422] = 12,
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
    STATE(38), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_number,
      sym_character,
    STATE(57), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    ACTIONS(35), 6,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    STATE(45), 6,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
      sym_block,
  [474] = 4,
    ACTIONS(75), 1,
      sym_keyword,
    STATE(26), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(78), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(73), 11,
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
  [504] = 4,
    ACTIONS(3), 1,
      sym_keyword,
    STATE(26), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(82), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(80), 11,
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
  [534] = 2,
    ACTIONS(78), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(73), 12,
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
  [559] = 5,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_temporaries_repeat1,
    ACTIONS(88), 7,
      anon_sym_POUND,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(84), 10,
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
  [590] = 2,
    ACTIONS(95), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(93), 11,
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
  [614] = 2,
    ACTIONS(99), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(97), 11,
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
  [638] = 2,
    ACTIONS(103), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(101), 11,
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
  [662] = 2,
    ACTIONS(88), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(84), 11,
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
  [686] = 2,
    ACTIONS(107), 8,
      anon_sym_POUND,
      sym_identifier,
      sym_true,
      sym_false,
      sym_thisContext,
      sym_self,
      sym_super,
      sym_nil,
    ACTIONS(105), 11,
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
  [710] = 4,
    ACTIONS(111), 1,
      sym_keyword,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [728] = 3,
    ACTIONS(118), 1,
      anon_sym_COLON_EQ,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [744] = 5,
    ACTIONS(122), 1,
      sym_keyword,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_binary_operator,
    STATE(40), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [764] = 3,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [780] = 5,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_binary_operator,
    ACTIONS(133), 1,
      sym_keyword,
    STATE(40), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [800] = 4,
    ACTIONS(137), 1,
      sym_keyword,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [818] = 2,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [831] = 2,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [844] = 2,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [857] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [870] = 2,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [883] = 2,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [896] = 2,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [909] = 2,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [922] = 2,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [935] = 2,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [948] = 2,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [961] = 2,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [974] = 2,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [987] = 2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1000] = 2,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1013] = 2,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1026] = 2,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1039] = 2,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1052] = 2,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(210), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1065] = 5,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_binary_operator,
    ACTIONS(133), 1,
      sym_keyword,
    STATE(40), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1083] = 7,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_binary_operator,
    ACTIONS(133), 1,
      sym_keyword,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_keyword_message_repeat1,
    STATE(77), 1,
      aux_sym_dynamic_array_repeat1,
  [1105] = 5,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_binary_operator,
    ACTIONS(133), 1,
      sym_keyword,
    STATE(40), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1123] = 5,
    ACTIONS(118), 1,
      anon_sym_COLON_EQ,
    ACTIONS(120), 1,
      sym_binary_operator,
    ACTIONS(222), 1,
      anon_sym_PIPE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(116), 3,
      anon_sym_DOT,
      sym_keyword,
      anon_sym_RBRACK,
  [1141] = 5,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_binary_operator,
    ACTIONS(133), 1,
      sym_keyword,
    STATE(40), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(227), 2,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1158] = 5,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_binary_operator,
    ACTIONS(133), 1,
      sym_keyword,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_keyword_message_repeat1,
  [1174] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym_block_repeat2,
  [1184] = 3,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(233), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_block_repeat2,
  [1194] = 3,
    ACTIONS(235), 1,
      sym_number,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_byte_array_repeat1,
  [1204] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      aux_sym_method_repeat1,
  [1214] = 3,
    ACTIONS(239), 1,
      anon_sym_PIPE,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(80), 1,
      aux_sym_temporaries_repeat1,
  [1224] = 1,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1230] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_block_repeat2,
  [1240] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_method_repeat1,
  [1250] = 3,
    ACTIONS(243), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      sym_block_argument,
    STATE(74), 1,
      aux_sym_block_repeat1,
  [1260] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      aux_sym_method_repeat1,
  [1270] = 3,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_byte_array_repeat1,
  [1280] = 3,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 1,
      anon_sym_DOT,
    STATE(83), 1,
      aux_sym_dynamic_array_repeat1,
  [1290] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_block_repeat2,
  [1300] = 3,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_block_repeat2,
  [1310] = 3,
    ACTIONS(261), 1,
      anon_sym_PIPE,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(80), 1,
      aux_sym_temporaries_repeat1,
  [1320] = 3,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(233), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_block_repeat2,
  [1330] = 3,
    ACTIONS(266), 1,
      sym_number,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_byte_array_repeat1,
  [1340] = 3,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(83), 1,
      aux_sym_dynamic_array_repeat1,
  [1350] = 3,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      anon_sym_DOT,
    STATE(84), 1,
      aux_sym_method_repeat1,
  [1360] = 3,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(278), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_temporaries_repeat1,
  [1370] = 3,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    ACTIONS(280), 1,
      anon_sym_DOT,
    STATE(81), 1,
      aux_sym_block_repeat2,
  [1380] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      aux_sym_method_repeat1,
  [1390] = 3,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    ACTIONS(280), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_block_repeat2,
  [1400] = 3,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      sym_block_argument,
    STATE(74), 1,
      aux_sym_block_repeat1,
  [1410] = 3,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_block_repeat2,
  [1420] = 3,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      aux_sym_method_repeat1,
  [1430] = 2,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      aux_sym_symbol_token1,
  [1437] = 1,
    ACTIONS(291), 2,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1442] = 1,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [1447] = 1,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
  [1451] = 1,
    ACTIONS(299), 1,
      aux_sym_string_token1,
  [1455] = 1,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
  [1459] = 1,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
  [1463] = 1,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
  [1467] = 1,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
  [1471] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [1475] = 1,
    ACTIONS(303), 1,
      sym_identifier,
  [1479] = 1,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
  [1483] = 1,
    ACTIONS(307), 1,
      sym_identifier,
  [1487] = 1,
    ACTIONS(309), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 55,
  [SMALL_STATE(19)] = 110,
  [SMALL_STATE(20)] = 162,
  [SMALL_STATE(21)] = 214,
  [SMALL_STATE(22)] = 266,
  [SMALL_STATE(23)] = 318,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 422,
  [SMALL_STATE(26)] = 474,
  [SMALL_STATE(27)] = 504,
  [SMALL_STATE(28)] = 534,
  [SMALL_STATE(29)] = 559,
  [SMALL_STATE(30)] = 590,
  [SMALL_STATE(31)] = 614,
  [SMALL_STATE(32)] = 638,
  [SMALL_STATE(33)] = 662,
  [SMALL_STATE(34)] = 686,
  [SMALL_STATE(35)] = 710,
  [SMALL_STATE(36)] = 728,
  [SMALL_STATE(37)] = 744,
  [SMALL_STATE(38)] = 764,
  [SMALL_STATE(39)] = 780,
  [SMALL_STATE(40)] = 800,
  [SMALL_STATE(41)] = 818,
  [SMALL_STATE(42)] = 831,
  [SMALL_STATE(43)] = 844,
  [SMALL_STATE(44)] = 857,
  [SMALL_STATE(45)] = 870,
  [SMALL_STATE(46)] = 883,
  [SMALL_STATE(47)] = 896,
  [SMALL_STATE(48)] = 909,
  [SMALL_STATE(49)] = 922,
  [SMALL_STATE(50)] = 935,
  [SMALL_STATE(51)] = 948,
  [SMALL_STATE(52)] = 961,
  [SMALL_STATE(53)] = 974,
  [SMALL_STATE(54)] = 987,
  [SMALL_STATE(55)] = 1000,
  [SMALL_STATE(56)] = 1013,
  [SMALL_STATE(57)] = 1026,
  [SMALL_STATE(58)] = 1039,
  [SMALL_STATE(59)] = 1052,
  [SMALL_STATE(60)] = 1065,
  [SMALL_STATE(61)] = 1083,
  [SMALL_STATE(62)] = 1105,
  [SMALL_STATE(63)] = 1123,
  [SMALL_STATE(64)] = 1141,
  [SMALL_STATE(65)] = 1158,
  [SMALL_STATE(66)] = 1174,
  [SMALL_STATE(67)] = 1184,
  [SMALL_STATE(68)] = 1194,
  [SMALL_STATE(69)] = 1204,
  [SMALL_STATE(70)] = 1214,
  [SMALL_STATE(71)] = 1224,
  [SMALL_STATE(72)] = 1230,
  [SMALL_STATE(73)] = 1240,
  [SMALL_STATE(74)] = 1250,
  [SMALL_STATE(75)] = 1260,
  [SMALL_STATE(76)] = 1270,
  [SMALL_STATE(77)] = 1280,
  [SMALL_STATE(78)] = 1290,
  [SMALL_STATE(79)] = 1300,
  [SMALL_STATE(80)] = 1310,
  [SMALL_STATE(81)] = 1320,
  [SMALL_STATE(82)] = 1330,
  [SMALL_STATE(83)] = 1340,
  [SMALL_STATE(84)] = 1350,
  [SMALL_STATE(85)] = 1360,
  [SMALL_STATE(86)] = 1370,
  [SMALL_STATE(87)] = 1380,
  [SMALL_STATE(88)] = 1390,
  [SMALL_STATE(89)] = 1400,
  [SMALL_STATE(90)] = 1410,
  [SMALL_STATE(91)] = 1420,
  [SMALL_STATE(92)] = 1430,
  [SMALL_STATE(93)] = 1437,
  [SMALL_STATE(94)] = 1442,
  [SMALL_STATE(95)] = 1447,
  [SMALL_STATE(96)] = 1451,
  [SMALL_STATE(97)] = 1455,
  [SMALL_STATE(98)] = 1459,
  [SMALL_STATE(99)] = 1463,
  [SMALL_STATE(100)] = 1467,
  [SMALL_STATE(101)] = 1471,
  [SMALL_STATE(102)] = 1475,
  [SMALL_STATE(103)] = 1479,
  [SMALL_STATE(104)] = 1483,
  [SMALL_STATE(105)] = 1487,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2), SHIFT_REPEAT(102),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_selector, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_selector, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_temporaries, 2, .dynamic_precedence = 10), SHIFT(70),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_selector, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_selector, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_selector, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_selector, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporaries, 3, .dynamic_precedence = 10),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporaries, 3, .dynamic_precedence = 10),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT_REPEAT(24),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT(24),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_message, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1), SHIFT(24),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_message, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_message, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_temporaries_repeat1, 1),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary, 1), REDUCE(aux_sym_temporaries_repeat1, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2), SHIFT_REPEAT(76),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_temporaries_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_temporaries_repeat1, 2), SHIFT_REPEAT(80),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2), SHIFT_REPEAT(23),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2), SHIFT_REPEAT(9),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(16),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [301] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
