#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SPACE = 1,
  anon_sym_DOT = 2,
  anon_sym_DASH = 3,
  sym__lf = 4,
  sym_name = 5,
  sym__indentation = 6,
  sym_singleton = 7,
  sym_string = 8,
  sym_nothing = 9,
  sym_grammar = 10,
  sym_rule = 11,
  sym_literal = 12,
  sym_range = 13,
  sym_exclude = 14,
  aux_sym_rules_repeat1 = 15,
  aux_sym_alternatives_repeat1 = 16,
  aux_sym_items_repeat1 = 17,
  aux_sym_literal_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SPACE] = " ",
  [anon_sym_DOT] = " . ",
  [anon_sym_DASH] = " - ",
  [sym__lf] = "_lf",
  [sym_name] = "name",
  [sym__indentation] = "_indentation",
  [sym_singleton] = "singleton",
  [sym_string] = "string",
  [sym_nothing] = "nothing",
  [sym_grammar] = "grammar",
  [sym_rule] = "rule",
  [sym_literal] = "literal",
  [sym_range] = "range",
  [sym_exclude] = "exclude",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
  [aux_sym_items_repeat1] = "items_repeat1",
  [aux_sym_literal_repeat1] = "literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__lf] = sym__lf,
  [sym_name] = sym_name,
  [sym__indentation] = sym__indentation,
  [sym_singleton] = sym_singleton,
  [sym_string] = sym_string,
  [sym_nothing] = sym_nothing,
  [sym_grammar] = sym_grammar,
  [sym_rule] = sym_rule,
  [sym_literal] = sym_literal,
  [sym_range] = sym_range,
  [sym_exclude] = sym_exclude,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_alternatives_repeat1] = aux_sym_alternatives_repeat1,
  [aux_sym_items_repeat1] = aux_sym_items_repeat1,
  [aux_sym_literal_repeat1] = aux_sym_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__lf] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym__indentation] = {
    .visible = false,
    .named = true,
  },
  [sym_singleton] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_nothing] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_exclude] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_items_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead > 0x1f) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead > 0x1f) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '0') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(14);
      if (lookahead > 0x1f) ADVANCE(10);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(13);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(12);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(18);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == ' ') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__lf);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__indentation);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_singleton);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_nothing);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__lf] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym__indentation] = ACTIONS(1),
    [sym_singleton] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_nothing] = ACTIONS(1),
  },
  [1] = {
    [sym_grammar] = STATE(27),
    [sym_rule] = STATE(11),
    [aux_sym_rules_repeat1] = STATE(11),
    [sym_name] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      sym_singleton,
    ACTIONS(9), 1,
      sym_string,
    ACTIONS(11), 1,
      sym_nothing,
    STATE(6), 1,
      sym_range,
    STATE(13), 1,
      sym_literal,
  [19] = 4,
    ACTIONS(13), 1,
      anon_sym_SPACE,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(18), 1,
      sym__lf,
    STATE(3), 2,
      sym_exclude,
      aux_sym_literal_repeat1,
  [33] = 4,
    ACTIONS(20), 1,
      anon_sym_SPACE,
    ACTIONS(22), 1,
      anon_sym_DASH,
    ACTIONS(24), 1,
      sym__lf,
    STATE(3), 2,
      sym_exclude,
      aux_sym_literal_repeat1,
  [47] = 5,
    ACTIONS(7), 1,
      sym_singleton,
    ACTIONS(9), 1,
      sym_string,
    ACTIONS(26), 1,
      sym_name,
    STATE(6), 1,
      sym_range,
    STATE(23), 1,
      sym_literal,
  [63] = 4,
    ACTIONS(22), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      anon_sym_SPACE,
    ACTIONS(30), 1,
      sym__lf,
    STATE(4), 2,
      sym_exclude,
      aux_sym_literal_repeat1,
  [77] = 3,
    ACTIONS(34), 1,
      sym__indentation,
    STATE(7), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym_name,
  [88] = 3,
    ACTIONS(39), 1,
      sym__indentation,
    STATE(10), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_name,
  [99] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_name,
    STATE(9), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [110] = 3,
    ACTIONS(39), 1,
      sym__indentation,
    STATE(7), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_name,
  [121] = 3,
    ACTIONS(3), 1,
      sym_name,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [132] = 3,
    ACTIONS(50), 1,
      anon_sym_SPACE,
    ACTIONS(52), 1,
      anon_sym_DOT,
    ACTIONS(54), 2,
      anon_sym_DASH,
      sym__lf,
  [143] = 3,
    ACTIONS(56), 1,
      anon_sym_SPACE,
    ACTIONS(58), 1,
      sym__lf,
    STATE(16), 1,
      aux_sym_items_repeat1,
  [153] = 3,
    ACTIONS(28), 1,
      anon_sym_SPACE,
    ACTIONS(30), 1,
      sym__lf,
    ACTIONS(52), 1,
      anon_sym_DOT,
  [163] = 1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      sym_name,
      sym__indentation,
  [169] = 3,
    ACTIONS(56), 1,
      anon_sym_SPACE,
    ACTIONS(62), 1,
      sym__lf,
    STATE(18), 1,
      aux_sym_items_repeat1,
  [179] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      sym_name,
      sym__indentation,
  [185] = 3,
    ACTIONS(66), 1,
      anon_sym_SPACE,
    ACTIONS(69), 1,
      sym__lf,
    STATE(18), 1,
      aux_sym_items_repeat1,
  [195] = 2,
    ACTIONS(71), 1,
      anon_sym_SPACE,
    ACTIONS(73), 2,
      anon_sym_DASH,
      sym__lf,
  [203] = 2,
    ACTIONS(50), 1,
      anon_sym_SPACE,
    ACTIONS(54), 2,
      anon_sym_DASH,
      sym__lf,
  [211] = 1,
    ACTIONS(30), 2,
      anon_sym_SPACE,
      sym__lf,
  [216] = 2,
    ACTIONS(75), 1,
      sym_singleton,
    STATE(20), 1,
      sym_range,
  [223] = 1,
    ACTIONS(69), 2,
      anon_sym_SPACE,
      sym__lf,
  [228] = 1,
    ACTIONS(58), 1,
      sym__lf,
  [232] = 1,
    ACTIONS(77), 1,
      sym__lf,
  [236] = 1,
    ACTIONS(79), 1,
      sym_singleton,
  [240] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 143,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 169,
  [SMALL_STATE(17)] = 179,
  [SMALL_STATE(18)] = 185,
  [SMALL_STATE(19)] = 195,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 211,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 223,
  [SMALL_STATE(24)] = 228,
  [SMALL_STATE(25)] = 232,
  [SMALL_STATE(26)] = 236,
  [SMALL_STATE(27)] = 240,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exclude, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 4, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_items_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_items_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mckeeman(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
