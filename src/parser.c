#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_sym = 1,
  sym_num = 2,
  sym_esc = 3,
  sym_raw = 4,
  sym_com = 5,
  anon_sym_LBRACK = 6,
  anon_sym_LBRACK2 = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  anon_sym_LPAREN = 10,
  anon_sym_LPAREN2 = 11,
  anon_sym_RPAREN = 12,
  anon_sym_EQ = 13,
  sym_root = 14,
  sym_arr = 15,
  sym_map = 16,
  sym_kv = 17,
  aux_sym_root_repeat1 = 18,
  aux_sym_arr_repeat1 = 19,
  aux_sym_map_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_sym] = "sym",
  [sym_num] = "num",
  [sym_esc] = "esc",
  [sym_raw] = "raw",
  [sym_com] = "com",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_root] = "root",
  [sym_arr] = "arr",
  [sym_map] = "map",
  [sym_kv] = "kv",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_arr_repeat1] = "arr_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_sym] = sym_sym,
  [sym_num] = sym_num,
  [sym_esc] = sym_esc,
  [sym_raw] = sym_raw,
  [sym_com] = sym_com,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_root] = sym_root,
  [sym_arr] = sym_arr,
  [sym_map] = sym_map,
  [sym_kv] = sym_kv,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_arr_repeat1] = aux_sym_arr_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_sym] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_esc] = {
    .visible = true,
    .named = true,
  },
  [sym_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_com] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_arr] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_kv] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_root_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_tag = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_tag] = "tag",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_tag, 0},
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
  [6] = 3,
  [7] = 7,
  [8] = 7,
  [9] = 2,
  [10] = 5,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 12,
  [18] = 14,
  [19] = 11,
  [20] = 16,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 28,
  [34] = 34,
  [35] = 27,
  [36] = 24,
  [37] = 25,
  [38] = 32,
  [39] = 31,
  [40] = 30,
  [41] = 29,
  [42] = 34,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 48,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '(', 44,
        ')', 46,
        '-', 4,
        '0', 33,
        '=', 47,
        'C', 12,
        'E', 19,
        'R', 6,
        '[', 40,
        ']', 43,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '(', 44,
        ')', 46,
        ',', 42,
        '-', 4,
        '0', 33,
        'C', 12,
        'E', 19,
        'R', 6,
        '[', 40,
        ']', 43,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '(', 45,
        ')', 46,
        ',', 42,
        '-', 4,
        '0', 33,
        'C', 12,
        'E', 19,
        'R', 6,
        '[', 41,
        ']', 43,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'S') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'W') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '(', 45,
        ')', 46,
        '-', 4,
        '0', 33,
        '=', 47,
        'C', 12,
        'E', 19,
        'R', 6,
        '[', 41,
        ']', 43,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '(', 45,
        '-', 4,
        '0', 33,
        '=', 47,
        'C', 12,
        'E', 19,
        'R', 6,
        '[', 41,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_num);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_esc);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_raw);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_com);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ',') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_sym] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_esc] = ACTIONS(1),
    [sym_raw] = ACTIONS(1),
    [sym_com] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(47),
    [sym_arr] = STATE(48),
    [sym_map] = STATE(48),
    [sym_kv] = STATE(21),
    [aux_sym_root_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_sym] = ACTIONS(5),
    [sym_num] = ACTIONS(7),
    [sym_esc] = ACTIONS(7),
    [sym_raw] = ACTIONS(7),
    [sym_com] = ACTIONS(9),
    [anon_sym_LBRACK2] = ACTIONS(11),
    [anon_sym_LPAREN2] = ACTIONS(13),
  },
  [2] = {
    [sym_arr] = STATE(49),
    [sym_map] = STATE(49),
    [sym_kv] = STATE(7),
    [aux_sym_map_repeat1] = STATE(7),
    [sym_sym] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [sym_esc] = ACTIONS(17),
    [sym_raw] = ACTIONS(17),
    [sym_com] = ACTIONS(19),
    [anon_sym_LBRACK2] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [3] = {
    [sym_arr] = STATE(49),
    [sym_map] = STATE(49),
    [sym_kv] = STATE(4),
    [aux_sym_map_repeat1] = STATE(4),
    [sym_sym] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [sym_esc] = ACTIONS(17),
    [sym_raw] = ACTIONS(17),
    [sym_com] = ACTIONS(29),
    [anon_sym_LBRACK2] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [4] = {
    [sym_arr] = STATE(49),
    [sym_map] = STATE(49),
    [sym_kv] = STATE(4),
    [aux_sym_map_repeat1] = STATE(4),
    [sym_sym] = ACTIONS(35),
    [sym_num] = ACTIONS(38),
    [sym_esc] = ACTIONS(38),
    [sym_raw] = ACTIONS(38),
    [sym_com] = ACTIONS(41),
    [anon_sym_LBRACK2] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN2] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(53),
  },
  [5] = {
    [sym_arr] = STATE(49),
    [sym_map] = STATE(49),
    [sym_kv] = STATE(3),
    [aux_sym_map_repeat1] = STATE(3),
    [sym_sym] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [sym_esc] = ACTIONS(17),
    [sym_raw] = ACTIONS(17),
    [sym_com] = ACTIONS(55),
    [anon_sym_LBRACK2] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(59),
  },
  [6] = {
    [sym_arr] = STATE(49),
    [sym_map] = STATE(49),
    [sym_kv] = STATE(4),
    [aux_sym_map_repeat1] = STATE(4),
    [sym_sym] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [sym_esc] = ACTIONS(17),
    [sym_raw] = ACTIONS(17),
    [sym_com] = ACTIONS(29),
    [anon_sym_LBRACK2] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [7] = {
    [sym_arr] = STATE(49),
    [sym_map] = STATE(49),
    [sym_kv] = STATE(4),
    [aux_sym_map_repeat1] = STATE(4),
    [sym_sym] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [sym_esc] = ACTIONS(17),
    [sym_raw] = ACTIONS(17),
    [sym_com] = ACTIONS(29),
    [anon_sym_LBRACK2] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(63),
  },
  [8] = {
    [sym_arr] = STATE(49),
    [sym_map] = STATE(49),
    [sym_kv] = STATE(4),
    [aux_sym_map_repeat1] = STATE(4),
    [sym_sym] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [sym_esc] = ACTIONS(17),
    [sym_raw] = ACTIONS(17),
    [sym_com] = ACTIONS(29),
    [anon_sym_LBRACK2] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(65),
  },
  [9] = {
    [sym_arr] = STATE(49),
    [sym_map] = STATE(49),
    [sym_kv] = STATE(8),
    [aux_sym_map_repeat1] = STATE(8),
    [sym_sym] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [sym_esc] = ACTIONS(17),
    [sym_raw] = ACTIONS(17),
    [sym_com] = ACTIONS(67),
    [anon_sym_LBRACK2] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [10] = {
    [sym_arr] = STATE(49),
    [sym_map] = STATE(49),
    [sym_kv] = STATE(6),
    [aux_sym_map_repeat1] = STATE(6),
    [sym_sym] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [sym_esc] = ACTIONS(17),
    [sym_raw] = ACTIONS(17),
    [sym_com] = ACTIONS(73),
    [anon_sym_LBRACK2] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [11] = {
    [sym_arr] = STATE(13),
    [sym_map] = STATE(13),
    [aux_sym_arr_repeat1] = STATE(13),
    [sym_sym] = ACTIONS(79),
    [sym_num] = ACTIONS(81),
    [sym_esc] = ACTIONS(81),
    [sym_raw] = ACTIONS(81),
    [sym_com] = ACTIONS(81),
    [anon_sym_LBRACK2] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LPAREN2] = ACTIONS(89),
  },
  [12] = {
    [sym_arr] = STATE(13),
    [sym_map] = STATE(13),
    [aux_sym_arr_repeat1] = STATE(13),
    [sym_sym] = ACTIONS(79),
    [sym_num] = ACTIONS(81),
    [sym_esc] = ACTIONS(81),
    [sym_raw] = ACTIONS(81),
    [sym_com] = ACTIONS(81),
    [anon_sym_LBRACK2] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_LPAREN2] = ACTIONS(89),
  },
  [13] = {
    [sym_arr] = STATE(13),
    [sym_map] = STATE(13),
    [aux_sym_arr_repeat1] = STATE(13),
    [sym_sym] = ACTIONS(93),
    [sym_num] = ACTIONS(96),
    [sym_esc] = ACTIONS(96),
    [sym_raw] = ACTIONS(96),
    [sym_com] = ACTIONS(96),
    [anon_sym_LBRACK2] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LPAREN2] = ACTIONS(107),
  },
  [14] = {
    [sym_arr] = STATE(11),
    [sym_map] = STATE(11),
    [aux_sym_arr_repeat1] = STATE(11),
    [sym_sym] = ACTIONS(79),
    [sym_num] = ACTIONS(110),
    [sym_esc] = ACTIONS(110),
    [sym_raw] = ACTIONS(110),
    [sym_com] = ACTIONS(110),
    [anon_sym_LBRACK2] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(114),
    [anon_sym_LPAREN2] = ACTIONS(89),
  },
  [15] = {
    [sym_arr] = STATE(48),
    [sym_map] = STATE(48),
    [sym_kv] = STATE(15),
    [aux_sym_root_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_sym] = ACTIONS(118),
    [sym_num] = ACTIONS(121),
    [sym_esc] = ACTIONS(121),
    [sym_raw] = ACTIONS(121),
    [sym_com] = ACTIONS(124),
    [anon_sym_LBRACK2] = ACTIONS(127),
    [anon_sym_LPAREN2] = ACTIONS(130),
  },
  [16] = {
    [sym_arr] = STATE(12),
    [sym_map] = STATE(12),
    [aux_sym_arr_repeat1] = STATE(12),
    [sym_sym] = ACTIONS(79),
    [sym_num] = ACTIONS(133),
    [sym_esc] = ACTIONS(133),
    [sym_raw] = ACTIONS(133),
    [sym_com] = ACTIONS(133),
    [anon_sym_LBRACK2] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LPAREN2] = ACTIONS(89),
  },
  [17] = {
    [sym_arr] = STATE(13),
    [sym_map] = STATE(13),
    [aux_sym_arr_repeat1] = STATE(13),
    [sym_sym] = ACTIONS(79),
    [sym_num] = ACTIONS(81),
    [sym_esc] = ACTIONS(81),
    [sym_raw] = ACTIONS(81),
    [sym_com] = ACTIONS(81),
    [anon_sym_LBRACK2] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_LPAREN2] = ACTIONS(89),
  },
  [18] = {
    [sym_arr] = STATE(19),
    [sym_map] = STATE(19),
    [aux_sym_arr_repeat1] = STATE(19),
    [sym_sym] = ACTIONS(79),
    [sym_num] = ACTIONS(141),
    [sym_esc] = ACTIONS(141),
    [sym_raw] = ACTIONS(141),
    [sym_com] = ACTIONS(141),
    [anon_sym_LBRACK2] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_LPAREN2] = ACTIONS(89),
  },
  [19] = {
    [sym_arr] = STATE(13),
    [sym_map] = STATE(13),
    [aux_sym_arr_repeat1] = STATE(13),
    [sym_sym] = ACTIONS(79),
    [sym_num] = ACTIONS(81),
    [sym_esc] = ACTIONS(81),
    [sym_raw] = ACTIONS(81),
    [sym_com] = ACTIONS(81),
    [anon_sym_LBRACK2] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN2] = ACTIONS(89),
  },
  [20] = {
    [sym_arr] = STATE(17),
    [sym_map] = STATE(17),
    [aux_sym_arr_repeat1] = STATE(17),
    [sym_sym] = ACTIONS(79),
    [sym_num] = ACTIONS(149),
    [sym_esc] = ACTIONS(149),
    [sym_raw] = ACTIONS(149),
    [sym_com] = ACTIONS(149),
    [anon_sym_LBRACK2] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LPAREN2] = ACTIONS(89),
  },
  [21] = {
    [sym_arr] = STATE(48),
    [sym_map] = STATE(48),
    [sym_kv] = STATE(15),
    [aux_sym_root_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_sym] = ACTIONS(5),
    [sym_num] = ACTIONS(7),
    [sym_esc] = ACTIONS(7),
    [sym_raw] = ACTIONS(7),
    [sym_com] = ACTIONS(157),
    [anon_sym_LBRACK2] = ACTIONS(11),
    [anon_sym_LPAREN2] = ACTIONS(13),
  },
  [22] = {
    [sym_sym] = ACTIONS(159),
    [sym_num] = ACTIONS(159),
    [sym_esc] = ACTIONS(159),
    [sym_raw] = ACTIONS(159),
    [sym_com] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACK2] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_LPAREN2] = ACTIONS(159),
  },
  [23] = {
    [sym_sym] = ACTIONS(167),
    [sym_num] = ACTIONS(167),
    [sym_esc] = ACTIONS(167),
    [sym_raw] = ACTIONS(167),
    [sym_com] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACK2] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_LPAREN2] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(171), 9,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [15] = 2,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(175), 9,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [30] = 4,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 2,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
    ACTIONS(169), 6,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
  [49] = 2,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(183), 9,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [64] = 2,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(187), 9,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [79] = 2,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(191), 9,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [94] = 2,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(195), 9,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [109] = 2,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(199), 9,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [124] = 2,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(203), 9,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [139] = 1,
    ACTIONS(189), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [151] = 2,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(167), 8,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [165] = 1,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [177] = 1,
    ACTIONS(173), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [189] = 1,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [201] = 1,
    ACTIONS(205), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [213] = 1,
    ACTIONS(201), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [225] = 1,
    ACTIONS(197), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [237] = 1,
    ACTIONS(193), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [249] = 1,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      sym_esc,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
  [260] = 5,
    ACTIONS(207), 1,
      sym_sym,
    ACTIONS(211), 1,
      anon_sym_LBRACK2,
    ACTIONS(213), 1,
      anon_sym_LPAREN2,
    STATE(34), 2,
      sym_arr,
      sym_map,
    ACTIONS(209), 3,
      sym_num,
      sym_esc,
      sym_raw,
  [279] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACK2,
    ACTIONS(13), 1,
      anon_sym_LPAREN2,
    ACTIONS(215), 1,
      sym_sym,
    STATE(42), 2,
      sym_arr,
      sym_map,
    ACTIONS(217), 3,
      sym_num,
      sym_esc,
      sym_raw,
  [298] = 3,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_EQ,
  [308] = 3,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_EQ,
  [318] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [322] = 1,
    ACTIONS(219), 1,
      anon_sym_EQ,
  [326] = 1,
    ACTIONS(221), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 15,
  [SMALL_STATE(26)] = 30,
  [SMALL_STATE(27)] = 49,
  [SMALL_STATE(28)] = 64,
  [SMALL_STATE(29)] = 79,
  [SMALL_STATE(30)] = 94,
  [SMALL_STATE(31)] = 109,
  [SMALL_STATE(32)] = 124,
  [SMALL_STATE(33)] = 139,
  [SMALL_STATE(34)] = 151,
  [SMALL_STATE(35)] = 165,
  [SMALL_STATE(36)] = 177,
  [SMALL_STATE(37)] = 189,
  [SMALL_STATE(38)] = 201,
  [SMALL_STATE(39)] = 213,
  [SMALL_STATE(40)] = 225,
  [SMALL_STATE(41)] = 237,
  [SMALL_STATE(42)] = 249,
  [SMALL_STATE(43)] = 260,
  [SMALL_STATE(44)] = 279,
  [SMALL_STATE(45)] = 298,
  [SMALL_STATE(46)] = 308,
  [SMALL_STATE(47)] = 318,
  [SMALL_STATE(48)] = 322,
  [SMALL_STATE(49)] = 326,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arr_repeat1, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arr, 4, 0, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 4, 0, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4, 0, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arr, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arr, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arr, 3, 0, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 3, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_fin(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
