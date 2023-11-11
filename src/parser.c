#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 32
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_COMMA = 2,
  aux_sym_sep_token1 = 3,
  sym_boolean = 4,
  sym_symbol = 5,
  sym_string = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  sym_source_file = 13,
  sym_map = 14,
  sym_array = 15,
  sym_block = 16,
  sym_call = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_entry_repeat1 = 19,
  aux_sym_map_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COMMA] = ",",
  [aux_sym_sep_token1] = "sep_token1",
  [sym_boolean] = "boolean",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym_map] = "map",
  [sym_array] = "array",
  [sym_block] = "block",
  [sym_call] = "call",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_sep_token1] = aux_sym_sep_token1,
  [sym_boolean] = sym_boolean,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym_map] = sym_map,
  [sym_array] = sym_array,
  [sym_block] = sym_block,
  [sym_call] = sym_call,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_entry_repeat1] = aux_sym_entry_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sep_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
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
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat1] = {
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(25);
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
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_sep_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_boolean);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_sep_token1] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym_map] = STATE(9),
    [sym_array] = STATE(9),
    [sym_block] = STATE(9),
    [sym_call] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(5),
    [aux_sym_sep_token1] = ACTIONS(5),
    [sym_boolean] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [2] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_entry_repeat1] = STATE(22),
    [aux_sym_map_repeat1] = STATE(29),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_sep_token1] = ACTIONS(17),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(25),
  },
  [3] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_entry_repeat1] = STATE(6),
    [aux_sym_map_repeat1] = STATE(26),
    [sym_comment] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [aux_sym_sep_token1] = ACTIONS(27),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [4] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_entry_repeat1] = STATE(2),
    [aux_sym_map_repeat1] = STATE(28),
    [sym_comment] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [aux_sym_sep_token1] = ACTIONS(31),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(33),
  },
  [5] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_entry_repeat1] = STATE(22),
    [aux_sym_map_repeat1] = STATE(30),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_sep_token1] = ACTIONS(17),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [6] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_entry_repeat1] = STATE(22),
    [aux_sym_map_repeat1] = STATE(27),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_sep_token1] = ACTIONS(17),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [7] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_entry_repeat1] = STATE(5),
    [aux_sym_map_repeat1] = STATE(31),
    [sym_comment] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [aux_sym_sep_token1] = ACTIONS(39),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [8] = {
    [sym_map] = STATE(23),
    [sym_array] = STATE(23),
    [sym_block] = STATE(23),
    [aux_sym_entry_repeat1] = STATE(20),
    [sym_comment] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [aux_sym_sep_token1] = ACTIONS(43),
    [sym_boolean] = ACTIONS(45),
    [sym_symbol] = ACTIONS(45),
    [sym_string] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(47),
  },
  [9] = {
    [sym_map] = STATE(10),
    [sym_array] = STATE(10),
    [sym_block] = STATE(10),
    [sym_call] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_comment] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [aux_sym_sep_token1] = ACTIONS(51),
    [sym_boolean] = ACTIONS(53),
    [sym_symbol] = ACTIONS(9),
    [sym_string] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [10] = {
    [sym_map] = STATE(10),
    [sym_array] = STATE(10),
    [sym_block] = STATE(10),
    [sym_call] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [aux_sym_sep_token1] = ACTIONS(57),
    [sym_boolean] = ACTIONS(60),
    [sym_symbol] = ACTIONS(63),
    [sym_string] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(72),
  },
  [11] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_map_repeat1] = STATE(11),
    [sym_boolean] = ACTIONS(75),
    [sym_symbol] = ACTIONS(78),
    [sym_string] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(87),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [aux_sym_sep_token1] = ACTIONS(95),
    [sym_boolean] = ACTIONS(97),
    [sym_symbol] = ACTIONS(97),
    [sym_string] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
  },
  [13] = {
    [aux_sym_entry_repeat1] = STATE(20),
    [sym_comment] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [aux_sym_sep_token1] = ACTIONS(43),
    [sym_boolean] = ACTIONS(45),
    [sym_symbol] = ACTIONS(45),
    [sym_string] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [aux_sym_sep_token1] = ACTIONS(99),
    [sym_boolean] = ACTIONS(101),
    [sym_symbol] = ACTIONS(101),
    [sym_string] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comment] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [aux_sym_sep_token1] = ACTIONS(103),
    [sym_boolean] = ACTIONS(105),
    [sym_symbol] = ACTIONS(105),
    [sym_string] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
  },
  [16] = {
    [sym_map] = STATE(23),
    [sym_array] = STATE(23),
    [sym_block] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_comment] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [aux_sym_sep_token1] = ACTIONS(107),
    [sym_boolean] = ACTIONS(109),
    [sym_symbol] = ACTIONS(109),
    [sym_string] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [aux_sym_sep_token1] = ACTIONS(111),
    [sym_boolean] = ACTIONS(113),
    [sym_symbol] = ACTIONS(113),
    [sym_string] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_comment] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [aux_sym_sep_token1] = ACTIONS(115),
    [sym_boolean] = ACTIONS(117),
    [sym_symbol] = ACTIONS(117),
    [sym_string] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [aux_sym_sep_token1] = ACTIONS(119),
    [sym_boolean] = ACTIONS(121),
    [sym_symbol] = ACTIONS(121),
    [sym_string] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
  },
  [20] = {
    [aux_sym_entry_repeat1] = STATE(22),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_sep_token1] = ACTIONS(17),
    [sym_boolean] = ACTIONS(123),
    [sym_symbol] = ACTIONS(123),
    [sym_string] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_comment] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [aux_sym_sep_token1] = ACTIONS(125),
    [sym_boolean] = ACTIONS(127),
    [sym_symbol] = ACTIONS(127),
    [sym_string] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
  },
  [22] = {
    [aux_sym_entry_repeat1] = STATE(22),
    [sym_comment] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [aux_sym_sep_token1] = ACTIONS(129),
    [sym_boolean] = ACTIONS(132),
    [sym_symbol] = ACTIONS(132),
    [sym_string] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_comment] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [aux_sym_sep_token1] = ACTIONS(136),
    [sym_boolean] = ACTIONS(138),
    [sym_symbol] = ACTIONS(138),
    [sym_string] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_comment] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(140),
    [aux_sym_sep_token1] = ACTIONS(140),
    [sym_boolean] = ACTIONS(142),
    [sym_symbol] = ACTIONS(142),
    [sym_string] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [aux_sym_sep_token1] = ACTIONS(144),
    [sym_boolean] = ACTIONS(146),
    [sym_symbol] = ACTIONS(146),
    [sym_string] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
  },
  [26] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_map_repeat1] = STATE(11),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [27] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_map_repeat1] = STATE(11),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [28] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_map_repeat1] = STATE(11),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(25),
  },
  [29] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_map_repeat1] = STATE(11),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(150),
  },
  [30] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_map_repeat1] = STATE(11),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [31] = {
    [sym_map] = STATE(13),
    [sym_array] = STATE(13),
    [sym_block] = STATE(13),
    [sym_call] = STATE(13),
    [aux_sym_map_repeat1] = STATE(11),
    [sym_boolean] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(32)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(13),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(8),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(3),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(22),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
