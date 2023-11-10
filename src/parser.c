#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_boolean = 1,
  sym_symbol = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_string = 10,
  sym_comment = 11,
  sym_source_file = 12,
  sym_map = 13,
  sym_array = 14,
  sym_block = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_map_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_boolean] = "boolean",
  [sym_symbol] = "symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_map] = "map",
  [sym_array] = "array",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_boolean] = sym_boolean,
  [sym_symbol] = sym_symbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_map] = sym_map,
  [sym_array] = sym_array,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
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
  [10] = 9,
  [11] = 8,
  [12] = 3,
  [13] = 13,
  [14] = 5,
  [15] = 6,
  [16] = 4,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 17,
  [24] = 22,
  [25] = 21,
  [26] = 20,
  [27] = 19,
  [28] = 18,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'U') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_boolean);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_map] = STATE(7),
    [sym_array] = STATE(7),
    [sym_block] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_boolean] = ACTIONS(7),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(17),
    [sym_symbol] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_RBRACK] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(26),
    [sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [sym_symbol] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(44),
    [sym_string] = ACTIONS(38),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_map] = STATE(10),
    [sym_array] = STATE(10),
    [sym_block] = STATE(10),
    [aux_sym_map_repeat1] = STATE(10),
    [sym_boolean] = ACTIONS(46),
    [sym_symbol] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_string] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_map] = STATE(12),
    [sym_array] = STATE(12),
    [sym_block] = STATE(12),
    [aux_sym_map_repeat1] = STATE(12),
    [sym_boolean] = ACTIONS(52),
    [sym_symbol] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(56),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_map] = STATE(11),
    [sym_array] = STATE(11),
    [sym_block] = STATE(11),
    [aux_sym_map_repeat1] = STATE(11),
    [sym_boolean] = ACTIONS(58),
    [sym_symbol] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_string] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_boolean] = ACTIONS(66),
    [sym_symbol] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_string] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [sym_symbol] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_string] = ACTIONS(38),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [sym_symbol] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_string] = ACTIONS(38),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [sym_symbol] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_string] = ACTIONS(38),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [sym_symbol] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_string] = ACTIONS(38),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [sym_symbol] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(78),
    [sym_string] = ACTIONS(38),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_boolean] = ACTIONS(82),
    [sym_symbol] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_string] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_map] = STATE(3),
    [sym_array] = STATE(3),
    [sym_block] = STATE(3),
    [aux_sym_map_repeat1] = STATE(3),
    [sym_boolean] = ACTIONS(97),
    [sym_symbol] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(101),
    [sym_string] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_map] = STATE(8),
    [sym_array] = STATE(8),
    [sym_block] = STATE(8),
    [aux_sym_map_repeat1] = STATE(8),
    [sym_boolean] = ACTIONS(103),
    [sym_symbol] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_string] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_map] = STATE(9),
    [sym_array] = STATE(9),
    [sym_block] = STATE(9),
    [aux_sym_map_repeat1] = STATE(9),
    [sym_boolean] = ACTIONS(109),
    [sym_symbol] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(42),
    [sym_string] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_boolean] = ACTIONS(115),
    [sym_symbol] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_boolean] = ACTIONS(119),
    [sym_symbol] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_boolean] = ACTIONS(123),
    [sym_symbol] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [sym_string] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_boolean] = ACTIONS(127),
    [sym_symbol] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym_string] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_boolean] = ACTIONS(131),
    [sym_symbol] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym_string] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_boolean] = ACTIONS(135),
    [sym_symbol] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym_string] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(115), 2,
      sym_boolean,
      sym_symbol,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_string,
  [16] = 3,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(135), 2,
      sym_boolean,
      sym_symbol,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_string,
  [32] = 3,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(131), 2,
      sym_boolean,
      sym_symbol,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_string,
  [48] = 3,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(127), 2,
      sym_boolean,
      sym_symbol,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_string,
  [64] = 3,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(123), 2,
      sym_boolean,
      sym_symbol,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_string,
  [80] = 3,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(119), 2,
      sym_boolean,
      sym_symbol,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_string,
  [96] = 2,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 16,
  [SMALL_STATE(25)] = 32,
  [SMALL_STATE(26)] = 48,
  [SMALL_STATE(27)] = 64,
  [SMALL_STATE(28)] = 80,
  [SMALL_STATE(29)] = 96,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(6),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(16),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(14),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fin(void) {
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
