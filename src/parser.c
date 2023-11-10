#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_boolean = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  aux_sym_string_token2 = 11,
  anon_sym_DQUOTE2 = 12,
  sym_comment = 13,
  sym_source_file = 14,
  sym_map = 15,
  sym_array = 16,
  sym_block = 17,
  sym_string = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_map_repeat1 = 20,
  aux_sym_string_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_boolean] = "boolean",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DQUOTE2] = "\"",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_map] = "map",
  [sym_array] = "array",
  [sym_block] = "block",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_boolean] = sym_boolean,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_map] = sym_map,
  [sym_array] = sym_array,
  [sym_block] = sym_block,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
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
  [sym_string] = {
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
  [aux_sym_string_repeat1] = {
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
  [9] = 3,
  [10] = 5,
  [11] = 11,
  [12] = 11,
  [13] = 6,
  [14] = 7,
  [15] = 4,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 17,
  [27] = 19,
  [28] = 20,
  [29] = 21,
  [30] = 18,
  [31] = 23,
  [32] = 22,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 35,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym_map] = STATE(8),
    [sym_array] = STATE(8),
    [sym_block] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_boolean] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_map] = STATE(9),
    [sym_array] = STATE(9),
    [sym_block] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_map_repeat1] = STATE(9),
    [sym_boolean] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_map_repeat1] = STATE(13),
    [sym_boolean] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_map] = STATE(16),
    [sym_array] = STATE(16),
    [sym_block] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_boolean] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_map] = STATE(6),
    [sym_array] = STATE(6),
    [sym_block] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_map_repeat1] = STATE(6),
    [sym_boolean] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_map] = STATE(7),
    [sym_array] = STATE(7),
    [sym_block] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_map_repeat1] = STATE(7),
    [sym_boolean] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_map] = STATE(14),
    [sym_array] = STATE(14),
    [sym_block] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_map_repeat1] = STATE(14),
    [sym_boolean] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_map] = STATE(2),
    [sym_array] = STATE(2),
    [sym_block] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_boolean] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_map] = STATE(3),
    [sym_array] = STATE(3),
    [sym_block] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_map_repeat1] = STATE(3),
    [sym_boolean] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_map] = STATE(16),
    [sym_array] = STATE(16),
    [sym_block] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_boolean] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 9,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [15] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 9,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [30] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 9,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [45] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 9,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [60] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 9,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [75] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 9,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [90] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 9,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 9,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [120] = 2,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [133] = 2,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [146] = 2,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [159] = 2,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [172] = 2,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [185] = 2,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [198] = 2,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [211] = 2,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      sym_boolean,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [224] = 4,
    ACTIONS(122), 1,
      anon_sym_DQUOTE2,
    STATE(33), 1,
      aux_sym_string_repeat1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(119), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [239] = 4,
    ACTIONS(126), 1,
      anon_sym_DQUOTE2,
    STATE(35), 1,
      aux_sym_string_repeat1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(124), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [254] = 4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE2,
    STATE(33), 1,
      aux_sym_string_repeat1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(128), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [269] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE2,
    STATE(37), 1,
      aux_sym_string_repeat1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(132), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [284] = 4,
    ACTIONS(136), 1,
      anon_sym_DQUOTE2,
    STATE(33), 1,
      aux_sym_string_repeat1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(128), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [299] = 2,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      anon_sym_COMMA,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 15,
  [SMALL_STATE(19)] = 30,
  [SMALL_STATE(20)] = 45,
  [SMALL_STATE(21)] = 60,
  [SMALL_STATE(22)] = 75,
  [SMALL_STATE(23)] = 90,
  [SMALL_STATE(24)] = 105,
  [SMALL_STATE(25)] = 120,
  [SMALL_STATE(26)] = 133,
  [SMALL_STATE(27)] = 146,
  [SMALL_STATE(28)] = 159,
  [SMALL_STATE(29)] = 172,
  [SMALL_STATE(30)] = 185,
  [SMALL_STATE(31)] = 198,
  [SMALL_STATE(32)] = 211,
  [SMALL_STATE(33)] = 224,
  [SMALL_STATE(34)] = 239,
  [SMALL_STATE(35)] = 254,
  [SMALL_STATE(36)] = 269,
  [SMALL_STATE(37)] = 284,
  [SMALL_STATE(38)] = 299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(11),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(10),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(36),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
