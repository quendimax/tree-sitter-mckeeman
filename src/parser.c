#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym__comment = 11,
  sym_grammar = 12,
  sym_rule = 13,
  sym_literal = 14,
  sym_range = 15,
  sym_exclude = 16,
  sym__eol = 17,
  aux_sym_rules_repeat1 = 18,
  aux_sym_alternatives_repeat1 = 19,
  aux_sym_items_repeat1 = 20,
  aux_sym_literal_repeat1 = 21,
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
  [sym__comment] = "_comment",
  [sym_grammar] = "grammar",
  [sym_rule] = "rule",
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
  [sym__comment] = sym__comment,
  [sym_grammar] = sym_grammar,
  [sym_rule] = sym_rule,
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
  [sym__comment] = {
    .visible = false,
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
      ACCEPT_TOKEN(sym__comment);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 0},
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
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_grammar] = STATE(27),
    [sym_rule] = STATE(5),
    [aux_sym_rules_repeat1] = STATE(5),
    [aux_sym_rules_token1] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      sym_singleton,
    ACTIONS(13), 1,
      sym_string,
    ACTIONS(15), 1,
      sym_nothing,
    STATE(11), 1,
      sym_range,
    STATE(15), 1,
      sym_literal,
  [22] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym__indentation,
    STATE(3), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [37] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym_singleton,
    ACTIONS(13), 1,
      sym_string,
    ACTIONS(22), 1,
      sym_name,
    STATE(11), 1,
      sym_range,
    STATE(25), 1,
      sym_literal,
  [56] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      aux_sym_rules_token1,
    STATE(7), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [73] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(30), 1,
      sym__indentation,
    STATE(8), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [88] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      aux_sym_rules_token1,
    ACTIONS(37), 1,
      sym_name,
    STATE(7), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [105] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(30), 1,
      sym__indentation,
    STATE(3), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [120] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(42), 1,
      aux_sym_rules_token1,
    ACTIONS(44), 1,
      anon_sym_SPACE,
    ACTIONS(46), 1,
      anon_sym_DASH,
    STATE(9), 2,
      sym_exclude,
      aux_sym_literal_repeat1,
  [137] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(49), 1,
      aux_sym_rules_token1,
    ACTIONS(51), 1,
      anon_sym_SPACE,
    ACTIONS(53), 1,
      anon_sym_DASH,
    STATE(9), 2,
      sym_exclude,
      aux_sym_literal_repeat1,
  [154] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_rules_token1,
    ACTIONS(57), 1,
      anon_sym_SPACE,
    STATE(10), 2,
      sym_exclude,
      aux_sym_literal_repeat1,
  [171] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(61), 1,
      sym__indentation,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [183] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(65), 1,
      sym__indentation,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      sym_name,
  [195] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(67), 1,
      aux_sym_rules_token1,
    ACTIONS(69), 1,
      anon_sym_SPACE,
    STATE(12), 1,
      sym__eol,
    STATE(17), 1,
      aux_sym_items_repeat1,
  [211] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(69), 1,
      anon_sym_SPACE,
    ACTIONS(71), 1,
      aux_sym_rules_token1,
    STATE(13), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym_items_repeat1,
  [227] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(75), 1,
      anon_sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(73), 2,
      aux_sym_rules_token1,
      anon_sym_DASH,
  [241] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(79), 1,
      aux_sym_rules_token1,
    ACTIONS(81), 1,
      anon_sym_SPACE,
    STATE(17), 1,
      aux_sym_items_repeat1,
  [254] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(86), 1,
      anon_sym_SPACE,
    ACTIONS(84), 2,
      aux_sym_rules_token1,
      anon_sym_DASH,
  [265] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(75), 1,
      anon_sym_SPACE,
    ACTIONS(73), 2,
      aux_sym_rules_token1,
      anon_sym_DASH,
  [276] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(55), 1,
      aux_sym_rules_token1,
    ACTIONS(57), 1,
      anon_sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_DOT,
  [289] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(55), 1,
      aux_sym_rules_token1,
    ACTIONS(57), 1,
      anon_sym_SPACE,
  [299] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(71), 1,
      aux_sym_rules_token1,
    STATE(13), 1,
      sym__eol,
  [309] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(88), 1,
      aux_sym_rules_token1,
    STATE(6), 1,
      sym__eol,
  [319] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(90), 1,
      sym_singleton,
    STATE(19), 1,
      sym_range,
  [329] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(79), 1,
      aux_sym_rules_token1,
    ACTIONS(92), 1,
      anon_sym_SPACE,
  [339] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(94), 1,
      sym_singleton,
  [346] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 37,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 171,
  [SMALL_STATE(13)] = 183,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 211,
  [SMALL_STATE(16)] = 227,
  [SMALL_STATE(17)] = 241,
  [SMALL_STATE(18)] = 254,
  [SMALL_STATE(19)] = 265,
  [SMALL_STATE(20)] = 276,
  [SMALL_STATE(21)] = 289,
  [SMALL_STATE(22)] = 299,
  [SMALL_STATE(23)] = 309,
  [SMALL_STATE(24)] = 319,
  [SMALL_STATE(25)] = 329,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 346,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exclude, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_items_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_items_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
