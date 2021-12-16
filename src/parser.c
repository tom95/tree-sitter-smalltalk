#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_keyword = 1,
  anon_sym_DOT = 2,
  sym_identifier = 3,
  sym_binary_operator = 4,
  sym_method = 5,
  sym_selector = 6,
  sym_unary_selector = 7,
  sym_binary_selector = 8,
  sym_keyword_selector = 9,
  sym_unary_message = 10,
  sym_binary_message = 11,
  sym_keyword_message = 12,
  sym_statement = 13,
  sym_expression = 14,
  aux_sym_method_repeat1 = 15,
  aux_sym_keyword_selector_repeat1 = 16,
  aux_sym_keyword_message_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_binary_operator] = "binary_operator",
  [sym_method] = "method",
  [sym_selector] = "selector",
  [sym_unary_selector] = "unary_selector",
  [sym_binary_selector] = "binary_selector",
  [sym_keyword_selector] = "keyword_selector",
  [sym_unary_message] = "unary_message",
  [sym_binary_message] = "binary_message",
  [sym_keyword_message] = "keyword_message",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [aux_sym_method_repeat1] = "method_repeat1",
  [aux_sym_keyword_selector_repeat1] = "keyword_selector_repeat1",
  [aux_sym_keyword_message_repeat1] = "keyword_message_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_binary_operator] = sym_binary_operator,
  [sym_method] = sym_method,
  [sym_selector] = sym_selector,
  [sym_unary_selector] = sym_unary_selector,
  [sym_binary_selector] = sym_binary_selector,
  [sym_keyword_selector] = sym_keyword_selector,
  [sym_unary_message] = sym_unary_message,
  [sym_binary_message] = sym_binary_message,
  [sym_keyword_message] = sym_keyword_message,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [aux_sym_method_repeat1] = aux_sym_method_repeat1,
  [aux_sym_keyword_selector_repeat1] = aux_sym_keyword_selector_repeat1,
  [aux_sym_keyword_message_repeat1] = aux_sym_keyword_message_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
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
  [sym_statement] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(1);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_binary_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_method] = STATE(25),
    [sym_selector] = STATE(2),
    [sym_unary_selector] = STATE(20),
    [sym_binary_selector] = STATE(20),
    [sym_keyword_selector] = STATE(20),
    [aux_sym_keyword_selector_repeat1] = STATE(10),
    [sym_keyword] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_binary_operator] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(8), 1,
      sym_expression,
    STATE(17), 1,
      sym_statement,
    STATE(18), 1,
      aux_sym_method_repeat1,
    STATE(9), 3,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
  [24] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(8), 1,
      sym_expression,
    STATE(23), 1,
      sym_statement,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
    STATE(9), 3,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
  [43] = 4,
    ACTIONS(19), 1,
      sym_keyword,
    ACTIONS(22), 1,
      sym_identifier,
    STATE(4), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_binary_operator,
  [58] = 3,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
  [71] = 5,
    ACTIONS(26), 1,
      sym_identifier,
    ACTIONS(28), 1,
      sym_keyword,
    ACTIONS(31), 1,
      sym_binary_operator,
    STATE(7), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [88] = 4,
    ACTIONS(35), 1,
      sym_keyword,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(4), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_binary_operator,
  [103] = 5,
    ACTIONS(26), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_binary_operator,
    ACTIONS(42), 1,
      sym_keyword,
    STATE(7), 1,
      aux_sym_keyword_message_repeat1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [120] = 2,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
  [130] = 4,
    ACTIONS(3), 1,
      sym_keyword,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [144] = 4,
    ACTIONS(54), 1,
      sym_keyword,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_keyword_selector_repeat1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [158] = 3,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expression,
    STATE(9), 3,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
  [170] = 2,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
      sym_binary_operator,
  [180] = 3,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expression,
    STATE(9), 3,
      sym_unary_message,
      sym_binary_message,
      sym_keyword_message,
  [192] = 2,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_keyword,
  [201] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_identifier,
  [207] = 3,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_method_repeat1,
  [217] = 3,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym_method_repeat1,
  [227] = 3,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym_method_repeat1,
  [237] = 1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_identifier,
  [243] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_method_repeat1,
  [253] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_identifier,
  [259] = 1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [264] = 1,
    ACTIONS(78), 1,
      sym_identifier,
  [268] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
  [272] = 1,
    ACTIONS(82), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 130,
  [SMALL_STATE(11)] = 144,
  [SMALL_STATE(12)] = 158,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 192,
  [SMALL_STATE(16)] = 201,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 217,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 237,
  [SMALL_STATE(21)] = 243,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 259,
  [SMALL_STATE(24)] = 264,
  [SMALL_STATE(25)] = 268,
  [SMALL_STATE(26)] = 272,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT_REPEAT(12),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_message_repeat1, 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_message, 3),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_message_repeat1, 2), SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1), SHIFT(12),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_message, 2, .dynamic_precedence = -1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_selector, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_selector, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_selector_repeat1, 2), SHIFT_REPEAT(24),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_selector_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_message, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_message, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_selector, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2), SHIFT_REPEAT(3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_selector, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
