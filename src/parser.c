#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_rules_token1 = 1,
  anon_sym_SPACE = 2,
  anon_sym_DOT = 3,
  anon_sym_DASH = 4,
  sym__lf = 5,
  sym_name = 6,
  sym__indentation = 7,
  sym_singleton = 8,
  sym_string = 9,
  sym_nothing = 10,
  sym_comment = 11,
  sym_grammar = 12,
  sym_rule = 13,
  sym_alternatives = 14,
  sym_items = 15,
  sym_literal = 16,
  sym_range = 17,
  sym_exclude = 18,
  sym__eol = 19,
  aux_sym_rules_repeat1 = 20,
  aux_sym_alternatives_repeat1 = 21,
  aux_sym_items_repeat1 = 22,
  aux_sym_literal_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_rules_token1] = "rules_token1",
  [anon_sym_SPACE] = " ",
  [anon_sym_DOT] = " . ",
  [anon_sym_DASH] = " - ",
  [sym__lf] = "_lf",
  [sym_name] = "name",
  [sym__indentation] = "_indentation",
  [sym_singleton] = "singleton",
  [sym_string] = "string",
  [sym_nothing] = "nothing",
  [sym_comment] = "comment",
  [sym_grammar] = "grammar",
  [sym_rule] = "rule",
  [sym_alternatives] = "alternatives",
  [sym_items] = "items",
  [sym_literal] = "literal",
  [sym_range] = "range",
  [sym_exclude] = "exclude",
  [sym__eol] = "_eol",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
  [aux_sym_items_repeat1] = "items_repeat1",
  [aux_sym_literal_repeat1] = "literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_rules_token1] = aux_sym_rules_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__lf] = sym__lf,
  [sym_name] = sym_name,
  [sym__indentation] = sym__indentation,
  [sym_singleton] = sym_singleton,
  [sym_string] = sym_string,
  [sym_nothing] = sym_nothing,
  [sym_comment] = sym_comment,
  [sym_grammar] = sym_grammar,
  [sym_rule] = sym_rule,
  [sym_alternatives] = sym_alternatives,
  [sym_items] = sym_items,
  [sym_literal] = sym_literal,
  [sym_range] = sym_range,
  [sym_exclude] = sym_exclude,
  [sym__eol] = sym__eol,
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
  [aux_sym_rules_token1] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
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
  [sym_alternatives] = {
    .visible = true,
    .named = true,
  },
  [sym_items] = {
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
  [sym__eol] = {
    .visible = false,
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
      if (eof) ADVANCE(22);
      if (lookahead == '\t') ADVANCE(6);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(6);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == ';') ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(6);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == ';') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(6);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ';') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(6);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ';') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead > 0x1f) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead > 0x1f) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '0') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(15);
      if (lookahead > 0x1f) ADVANCE(11);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(14);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(13);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(19);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\t') ADVANCE(6);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_rules_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__indentation);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
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
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead > 0x1f) ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_rules_token1] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__lf] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_singleton] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_nothing] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_grammar] = STATE(27),
    [sym_rule] = STATE(6),
    [aux_sym_rules_repeat1] = STATE(6),
    [aux_sym_rules_token1] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      sym_singleton,
    ACTIONS(13), 1,
      sym_string,
    ACTIONS(15), 1,
      sym_nothing,
    STATE(4), 1,
      sym_range,
    STATE(14), 1,
      sym_literal,
    STATE(21), 1,
      sym_items,
  [25] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__indentation,
    STATE(9), 1,
      aux_sym_alternatives_repeat1,
    STATE(16), 1,
      sym_alternatives,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [43] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_rules_token1,
    ACTIONS(23), 1,
      anon_sym_SPACE,
    ACTIONS(25), 1,
      anon_sym_DASH,
    STATE(10), 2,
      sym_exclude,
      aux_sym_literal_repeat1,
  [60] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_singleton,
    ACTIONS(13), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_name,
    STATE(4), 1,
      sym_range,
    STATE(25), 1,
      sym_literal,
  [79] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_rules_token1,
    STATE(7), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [96] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_rules_token1,
    ACTIONS(38), 1,
      sym_name,
    STATE(7), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym_rules_token1,
    ACTIONS(43), 1,
      anon_sym_SPACE,
    ACTIONS(45), 1,
      anon_sym_DASH,
    STATE(8), 2,
      sym_exclude,
      aux_sym_literal_repeat1,
  [130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__indentation,
    STATE(11), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [145] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      aux_sym_rules_token1,
    ACTIONS(52), 1,
      anon_sym_SPACE,
    STATE(8), 2,
      sym_exclude,
      aux_sym_literal_repeat1,
  [162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym__indentation,
    STATE(11), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_SPACE,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(59), 2,
      aux_sym_rules_token1,
      anon_sym_DASH,
  [191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__indentation,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_rules_token1,
    ACTIONS(71), 1,
      anon_sym_SPACE,
    STATE(15), 1,
      aux_sym_items_repeat1,
  [216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SPACE,
    ACTIONS(73), 1,
      aux_sym_rules_token1,
    STATE(17), 1,
      aux_sym_items_repeat1,
  [229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_rules_token1,
    ACTIONS(79), 1,
      anon_sym_SPACE,
    STATE(17), 1,
      aux_sym_items_repeat1,
  [251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_SPACE,
    ACTIONS(82), 2,
      aux_sym_rules_token1,
      anon_sym_DASH,
  [262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_rules_token1,
    ACTIONS(23), 1,
      anon_sym_SPACE,
    ACTIONS(63), 1,
      anon_sym_DOT,
  [275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_SPACE,
    ACTIONS(59), 2,
      aux_sym_rules_token1,
      anon_sym_DASH,
  [286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_rules_token1,
    STATE(13), 1,
      sym__eol,
  [296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_rules_token1,
    STATE(3), 1,
      sym__eol,
  [306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_singleton,
    STATE(20), 1,
      sym_range,
  [316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_rules_token1,
    ACTIONS(23), 1,
      anon_sym_SPACE,
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_rules_token1,
    ACTIONS(92), 1,
      anon_sym_SPACE,
  [336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_singleton,
  [343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 177,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 238,
  [SMALL_STATE(18)] = 251,
  [SMALL_STATE(19)] = 262,
  [SMALL_STATE(20)] = 275,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 296,
  [SMALL_STATE(23)] = 306,
  [SMALL_STATE(24)] = 316,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 336,
  [SMALL_STATE(27)] = 343,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exclude, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_items, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_items, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_items_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_items_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_items_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
