#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_keyword = 1,
  anon_sym_DOT = 2,
  anon_sym_COLON_EQ = 3,
  sym_number = 4,
  anon_sym_SQUOTE = 5,
  aux_sym_string_token1 = 6,
  anon_sym_POUND = 7,
  aux_sym_symbol_token1 = 8,
  sym_identifier = 9,
  sym_binary_operator = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_POUND_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym_method = 17,
  sym_selector = 18,
  sym_unary_selector = 19,
  sym_binary_selector = 20,
  sym_keyword_selector = 21,
  sym_unary_message = 22,
  sym_binary_message = 23,
  sym_keyword_message = 24,
  sym_assignment = 25,
  sym_string = 26,
  sym_symbol = 27,
  sym_statement = 28,
  sym_dynamic_array = 29,
  sym_byte_array = 30,
  sym_parenthesized_expression = 31,
  sym_primary = 32,
  sym_expression = 33,
  aux_sym_method_repeat1 = 34,
  aux_sym_keyword_selector_repeat1 = 35,
  aux_sym_keyword_message_repeat1 = 36,
  aux_sym_dynamic_array_repeat1 = 37,
  aux_sym_byte_array_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_EQ] = ":=",
  [sym_number] = "number",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_symbol_token1] = "symbol_token1",
  [sym_identifier] = "identifier",
  [sym_binary_operator] = "binary_operator",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_method] = "method",
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
  [sym_dynamic_array] = "dynamic_array",
  [sym_byte_array] = "byte_array",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_primary] = "primary",
  [sym_expression] = "expression",
  [aux_sym_method_repeat1] = "method_repeat1",
  [aux_sym_keyword_selector_repeat1] = "keyword_selector_repeat1",
  [aux_sym_keyword_message_repeat1] = "keyword_message_repeat1",
  [aux_sym_dynamic_array_repeat1] = "dynamic_array_repeat1",
  [aux_sym_byte_array_repeat1] = "byte_array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_number] = sym_number,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [sym_identifier] = sym_identifier,
  [sym_binary_operator] = sym_binary_operator,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_method] = sym_method,
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
  [sym_dynamic_array] = sym_dynamic_array,
  [sym_byte_array] = sym_byte_array,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_primary] = sym_primary,
  [sym_expression] = sym_expression,
  [aux_sym_method_repeat1] = aux_sym_method_repeat1,
  [aux_sym_keyword_selector_repeat1] = aux_sym_keyword_selector_repeat1,
  [aux_sym_keyword_message_repeat1] = aux_sym_keyword_message_repeat1,
  [aux_sym_dynamic_array_repeat1] = aux_sym_dynamic_array_repeat1,
  [aux_sym_byte_array_repeat1] = aux_sym_byte_array_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
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
  [sym_method] = {
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
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(11);
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
          lookahead == '~') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'r') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '[') ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_binary_operator] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_method] = STATE(55),
    [sym_selector] = STATE(2),
    [sym_unary_selector] = STATE(15),
    [sym_binary_selector] = STATE(15),
    [sym_keyword_selector] = STATE(15),
    [aux_sym_keyword_selector_repeat1] = STATE(12),
    [sym_keyword] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_binary_operator] = ACTIONS(7),
  },
  [2] = {
    [sym_unary_message] = STATE(25),
    [sym_binary_message] = STATE(25),
    [sym_keyword_message] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym_string] = STATE(31),
    [sym_symbol] = STATE(31),
    [sym_statement] = STATE(45),
    [sym_dynamic_array] = STATE(31),
    [sym_byte_array] = STATE(31),
    [sym_parenthesized_expression] = STATE(31),
    [sym_primary] = STATE(25),
    [sym_expression] = STATE(38),
    [aux_sym_method_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_POUND_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [3] = {
    [sym_unary_message] = STATE(25),
    [sym_binary_message] = STATE(25),
    [sym_keyword_message] = STATE(25),
    [sym_assignment] = STATE(25),
    [sym_string] = STATE(31),
    [sym_symbol] = STATE(31),
    [sym_statement] = STATE(49),
    [sym_dynamic_array] = STATE(31),
    [sym_byte_array] = STATE(31),
    [sym_parenthesized_expression] = STATE(31),
    [sym_primary] = STATE(25),
    [sym_expression] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_number] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_POUND_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_expression,
    STATE(25), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    STATE(31), 5,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
  [42] = 11,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_expression,
    STATE(25), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    STATE(31), 5,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
  [84] = 10,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_expression,
    STATE(25), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    STATE(31), 5,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
  [123] = 10,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_expression,
    STATE(25), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    STATE(31), 5,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
  [162] = 10,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_expression,
    STATE(25), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    STATE(31), 5,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
  [201] = 10,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_expression,
    STATE(25), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    STATE(31), 5,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
  [240] = 10,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_expression,
    STATE(25), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    STATE(31), 5,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
  [279] = 10,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_expression,
    STATE(25), 5,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
      sym_assignment,
      sym_primary,
    STATE(31), 5,
      sym_string,
      sym_symbol,
      sym_dynamic_array,
      sym_byte_array,
      sym_parenthesized_expression,
  [318] = 4,
    ACTIONS(3), 1,
      sym_keyword,
    STATE(13), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(35), 2,
      anon_sym_POUND,
      sym_identifier,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
  [338] = 4,
    ACTIONS(39), 1,
      sym_keyword,
    STATE(13), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(42), 2,
      anon_sym_POUND,
      sym_identifier,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
  [358] = 2,
    ACTIONS(42), 2,
      anon_sym_POUND,
      sym_identifier,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
  [373] = 2,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(44), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
  [387] = 2,
    ACTIONS(50), 1,
      anon_sym_POUND,
    ACTIONS(48), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
  [401] = 2,
    ACTIONS(54), 1,
      anon_sym_POUND,
    ACTIONS(52), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_number,
      anon_sym_SQUOTE,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_POUND_LBRACK,
      anon_sym_LPAREN,
  [415] = 4,
    ACTIONS(58), 1,
      sym_keyword,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [432] = 3,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [447] = 5,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_keyword,
    ACTIONS(70), 1,
      sym_binary_operator,
    STATE(23), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [466] = 3,
    ACTIONS(74), 1,
      anon_sym_COLON_EQ,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [481] = 5,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_binary_operator,
    ACTIONS(80), 1,
      sym_keyword,
    STATE(23), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [500] = 4,
    ACTIONS(84), 1,
      sym_keyword,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [517] = 2,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [529] = 2,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [541] = 2,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [553] = 2,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [565] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_binary_operator,
    ACTIONS(80), 1,
      sym_keyword,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_keyword_message_repeat1,
    STATE(42), 1,
      aux_sym_dynamic_array_repeat1,
  [587] = 2,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [599] = 2,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [611] = 2,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [623] = 2,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [635] = 2,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [647] = 2,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [659] = 2,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [671] = 2,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [683] = 5,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_binary_operator,
    ACTIONS(80), 1,
      sym_keyword,
    STATE(23), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(137), 2,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [700] = 5,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_binary_operator,
    ACTIONS(80), 1,
      sym_keyword,
    STATE(23), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [717] = 5,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_binary_operator,
    ACTIONS(80), 1,
      sym_keyword,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_keyword_message_repeat1,
  [733] = 3,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_method_repeat1,
  [743] = 3,
    ACTIONS(145), 1,
      sym_number,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_byte_array_repeat1,
  [753] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_dynamic_array_repeat1,
  [763] = 3,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_method_repeat1,
  [773] = 3,
    ACTIONS(156), 1,
      sym_number,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_byte_array_repeat1,
  [783] = 3,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      aux_sym_method_repeat1,
  [793] = 3,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_method_repeat1,
  [803] = 3,
    ACTIONS(163), 1,
      sym_number,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_byte_array_repeat1,
  [813] = 3,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_dynamic_array_repeat1,
  [823] = 1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [828] = 2,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      aux_sym_symbol_token1,
  [835] = 1,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
  [839] = 1,
    ACTIONS(176), 1,
      aux_sym_string_token1,
  [843] = 1,
    ACTIONS(178), 1,
      sym_identifier,
  [847] = 1,
    ACTIONS(180), 1,
      aux_sym_string_token1,
  [851] = 1,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
  [855] = 1,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
  [859] = 1,
    ACTIONS(186), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 279,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 338,
  [SMALL_STATE(14)] = 358,
  [SMALL_STATE(15)] = 373,
  [SMALL_STATE(16)] = 387,
  [SMALL_STATE(17)] = 401,
  [SMALL_STATE(18)] = 415,
  [SMALL_STATE(19)] = 432,
  [SMALL_STATE(20)] = 447,
  [SMALL_STATE(21)] = 466,
  [SMALL_STATE(22)] = 481,
  [SMALL_STATE(23)] = 500,
  [SMALL_STATE(24)] = 517,
  [SMALL_STATE(25)] = 529,
  [SMALL_STATE(26)] = 541,
  [SMALL_STATE(27)] = 553,
  [SMALL_STATE(28)] = 565,
  [SMALL_STATE(29)] = 587,
  [SMALL_STATE(30)] = 599,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 623,
  [SMALL_STATE(33)] = 635,
  [SMALL_STATE(34)] = 647,
  [SMALL_STATE(35)] = 659,
  [SMALL_STATE(36)] = 671,
  [SMALL_STATE(37)] = 683,
  [SMALL_STATE(38)] = 700,
  [SMALL_STATE(39)] = 717,
  [SMALL_STATE(40)] = 733,
  [SMALL_STATE(41)] = 743,
  [SMALL_STATE(42)] = 753,
  [SMALL_STATE(43)] = 763,
  [SMALL_STATE(44)] = 773,
  [SMALL_STATE(45)] = 783,
  [SMALL_STATE(46)] = 793,
  [SMALL_STATE(47)] = 803,
  [SMALL_STATE(48)] = 813,
  [SMALL_STATE(49)] = 823,
  [SMALL_STATE(50)] = 828,
  [SMALL_STATE(51)] = 835,
  [SMALL_STATE(52)] = 839,
  [SMALL_STATE(53)] = 843,
  [SMALL_STATE(54)] = 847,
  [SMALL_STATE(55)] = 851,
  [SMALL_STATE(56)] = 855,
  [SMALL_STATE(57)] = 859,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_selector, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_selector, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2), SHIFT_REPEAT(53),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_selector, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_selector, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_selector, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_selector, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_message, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1), SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_message, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_message, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2), SHIFT_REPEAT(3),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2), SHIFT_REPEAT(44),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_array_repeat1, 2), SHIFT_REPEAT(7),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
