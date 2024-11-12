#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_let = 1,
  anon_sym_const = 2,
  anon_sym_string = 3,
  anon_sym_int = 4,
  anon_sym_regex = 5,
  sym_for_keyword = 6,
  sym_in_operator = 7,
  sym_identifier = 8,
  sym_string = 9,
  sym_number = 10,
  sym_regex = 11,
  sym_comment = 12,
  sym_addition = 13,
  sym_subtraction = 14,
  sym_multiplication = 15,
  sym_division = 16,
  sym_colon = 17,
  sym_assignment_operator = 18,
  sym_semicolon = 19,
  sym_open_paren = 20,
  sym_close_paren = 21,
  sym_open_brace = 22,
  sym_close_brace = 23,
  sym_source_file = 24,
  sym_test = 25,
  sym__statement = 26,
  sym__expression = 27,
  sym_binary_expression = 28,
  sym_declaration = 29,
  sym_assignment_keyword = 30,
  sym_type = 31,
  sym_assignment = 32,
  sym_for_loop = 33,
  sym_iterable_assignment = 34,
  sym_block = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_block_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_const] = "const",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_regex] = "regex",
  [sym_for_keyword] = "for_keyword",
  [sym_in_operator] = "in_operator",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_regex] = "regex",
  [sym_comment] = "comment",
  [sym_addition] = "addition",
  [sym_subtraction] = "subtraction",
  [sym_multiplication] = "multiplication",
  [sym_division] = "division",
  [sym_colon] = "colon",
  [sym_assignment_operator] = "assignment_operator",
  [sym_semicolon] = "semicolon",
  [sym_open_paren] = "open_paren",
  [sym_close_paren] = "close_paren",
  [sym_open_brace] = "open_brace",
  [sym_close_brace] = "close_brace",
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_declaration] = "declaration",
  [sym_assignment_keyword] = "assignment_keyword",
  [sym_type] = "type",
  [sym_assignment] = "assignment",
  [sym_for_loop] = "for_loop",
  [sym_iterable_assignment] = "iterable_assignment",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_regex] = anon_sym_regex,
  [sym_for_keyword] = sym_for_keyword,
  [sym_in_operator] = sym_in_operator,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_regex] = sym_regex,
  [sym_comment] = sym_comment,
  [sym_addition] = sym_addition,
  [sym_subtraction] = sym_subtraction,
  [sym_multiplication] = sym_multiplication,
  [sym_division] = sym_division,
  [sym_colon] = sym_colon,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_semicolon] = sym_semicolon,
  [sym_open_paren] = sym_open_paren,
  [sym_close_paren] = sym_close_paren,
  [sym_open_brace] = sym_open_brace,
  [sym_close_brace] = sym_close_brace,
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_declaration] = sym_declaration,
  [sym_assignment_keyword] = sym_assignment_keyword,
  [sym_type] = sym_type,
  [sym_assignment] = sym_assignment,
  [sym_for_loop] = sym_for_loop,
  [sym_iterable_assignment] = sym_iterable_assignment,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [sym_for_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_in_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_addition] = {
    .visible = true,
    .named = true,
  },
  [sym_subtraction] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplication] = {
    .visible = true,
    .named = true,
  },
  [sym_division] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_open_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_close_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_open_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_close_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_for_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_iterable_assignment] = {
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
  [aux_sym_block_repeat1] = {
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
  [5] = 2,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 8,
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
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 24,
  [32] = 32,
  [33] = 33,
  [34] = 21,
  [35] = 23,
  [36] = 36,
  [37] = 33,
  [38] = 22,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '"', 3,
        '(', 59,
        ')', 60,
        '*', 54,
        '+', 52,
        '-', 53,
        '/', 55,
        ':', 56,
        ';', 58,
        '=', 57,
        '`', 4,
        'c', 17,
        'f', 16,
        'i', 12,
        'l', 7,
        'r', 5,
        's', 24,
        '{', 61,
        '}', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 3,
        '*', 54,
        '+', 52,
        '-', 53,
        '/', 55,
        ';', 58,
        '=', 57,
        '`', 4,
        'c', 41,
        'f', 42,
        'l', 39,
        '{', 61,
        '}', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '`') ADVANCE(50);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'g') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_for_keyword);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_for_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_in_operator);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_addition);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_subtraction);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_multiplication);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_division);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_open_paren);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_close_paren);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_open_brace);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_close_brace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [sym_for_keyword] = ACTIONS(1),
    [sym_in_operator] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_addition] = ACTIONS(1),
    [sym_subtraction] = ACTIONS(1),
    [sym_multiplication] = ACTIONS(1),
    [sym_division] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_assignment_operator] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_open_paren] = ACTIONS(1),
    [sym_close_paren] = ACTIONS(1),
    [sym_open_brace] = ACTIONS(1),
    [sym_close_brace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_test] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      sym_for_keyword,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_open_brace,
    ACTIONS(19), 1,
      sym_close_brace,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(13), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(3), 4,
      sym__statement,
      sym_for_loop,
      sym_block,
      aux_sym_block_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [40] = 10,
    ACTIONS(9), 1,
      sym_for_keyword,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_open_brace,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_close_brace,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(13), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(4), 4,
      sym__statement,
      sym_for_loop,
      sym_block,
      aux_sym_block_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [80] = 10,
    ACTIONS(28), 1,
      sym_for_keyword,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_open_brace,
    ACTIONS(43), 1,
      sym_close_brace,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(25), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(34), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(4), 4,
      sym__statement,
      sym_for_loop,
      sym_block,
      aux_sym_block_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [120] = 10,
    ACTIONS(9), 1,
      sym_for_keyword,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_open_brace,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_close_brace,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(13), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(6), 4,
      sym__statement,
      sym_for_loop,
      sym_block,
      aux_sym_block_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [160] = 10,
    ACTIONS(9), 1,
      sym_for_keyword,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_open_brace,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_close_brace,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(13), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(4), 4,
      sym__statement,
      sym_for_loop,
      sym_block,
      aux_sym_block_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [200] = 9,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_for_keyword,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_open_brace,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(53), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(32), 3,
      sym__statement,
      sym_for_loop,
      sym_block,
    STATE(26), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [236] = 9,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_for_keyword,
    ACTIONS(57), 1,
      sym_open_brace,
    ACTIONS(59), 1,
      sym_comment,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(53), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(31), 3,
      sym__statement,
      sym_for_loop,
      sym_block,
    STATE(26), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [272] = 9,
    ACTIONS(9), 1,
      sym_for_keyword,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_open_brace,
    ACTIONS(61), 1,
      sym_comment,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(13), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(24), 3,
      sym__statement,
      sym_for_loop,
      sym_block,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [308] = 3,
    ACTIONS(67), 1,
      sym_assignment_operator,
    ACTIONS(63), 5,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
      sym_division,
    ACTIONS(65), 9,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_semicolon,
      sym_open_brace,
  [330] = 5,
    ACTIONS(75), 1,
      sym_multiplication,
    ACTIONS(77), 1,
      sym_division,
    ACTIONS(73), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(69), 4,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
    ACTIONS(71), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_semicolon,
      sym_open_brace,
  [355] = 5,
    ACTIONS(75), 1,
      sym_multiplication,
    ACTIONS(77), 1,
      sym_division,
    ACTIONS(73), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(79), 4,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
    ACTIONS(81), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_semicolon,
      sym_open_brace,
  [380] = 2,
    ACTIONS(83), 5,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
      sym_division,
    ACTIONS(85), 9,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_semicolon,
      sym_open_brace,
  [399] = 4,
    ACTIONS(75), 1,
      sym_multiplication,
    ACTIONS(77), 1,
      sym_division,
    ACTIONS(83), 4,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
    ACTIONS(85), 8,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_semicolon,
      sym_open_brace,
  [422] = 5,
    ACTIONS(75), 1,
      sym_multiplication,
    ACTIONS(77), 1,
      sym_division,
    ACTIONS(73), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(87), 4,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
    ACTIONS(89), 5,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
  [446] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(91), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(11), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [468] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(93), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(14), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [490] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(95), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(13), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [512] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(97), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(15), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [534] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(45), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(99), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(12), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [556] = 2,
    ACTIONS(101), 4,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
    ACTIONS(103), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
  [571] = 2,
    ACTIONS(105), 4,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
    ACTIONS(107), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
  [586] = 2,
    ACTIONS(109), 4,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
    ACTIONS(111), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
  [601] = 2,
    ACTIONS(113), 4,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
    ACTIONS(115), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
  [616] = 3,
    ACTIONS(117), 1,
      sym_semicolon,
    ACTIONS(73), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(75), 2,
      sym_multiplication,
      sym_division,
  [628] = 3,
    ACTIONS(119), 1,
      sym_semicolon,
    ACTIONS(73), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(75), 2,
      sym_multiplication,
      sym_division,
  [640] = 2,
    STATE(47), 1,
      sym_type,
    ACTIONS(121), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [649] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [660] = 2,
    STATE(42), 1,
      sym_type,
    ACTIONS(121), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [669] = 3,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      sym_identifier,
    STATE(30), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [680] = 1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [685] = 1,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [690] = 2,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(8), 1,
      sym_iterable_assignment,
  [697] = 1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [702] = 1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [707] = 1,
    ACTIONS(134), 2,
      sym_in_operator,
      sym_assignment_operator,
  [712] = 2,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(9), 1,
      sym_iterable_assignment,
  [719] = 1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [724] = 1,
    ACTIONS(136), 1,
      sym_identifier,
  [728] = 1,
    ACTIONS(138), 1,
      sym_colon,
  [732] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [736] = 1,
    ACTIONS(142), 1,
      sym_in_operator,
  [740] = 1,
    ACTIONS(144), 1,
      sym_colon,
  [744] = 1,
    ACTIONS(146), 1,
      sym_string,
  [748] = 1,
    ACTIONS(148), 1,
      sym_identifier,
  [752] = 1,
    ACTIONS(150), 1,
      sym_close_paren,
  [756] = 1,
    ACTIONS(152), 1,
      sym_assignment_operator,
  [760] = 1,
    ACTIONS(154), 1,
      sym_open_paren,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 200,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 330,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 399,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 446,
  [SMALL_STATE(17)] = 468,
  [SMALL_STATE(18)] = 490,
  [SMALL_STATE(19)] = 512,
  [SMALL_STATE(20)] = 534,
  [SMALL_STATE(21)] = 556,
  [SMALL_STATE(22)] = 571,
  [SMALL_STATE(23)] = 586,
  [SMALL_STATE(24)] = 601,
  [SMALL_STATE(25)] = 616,
  [SMALL_STATE(26)] = 628,
  [SMALL_STATE(27)] = 640,
  [SMALL_STATE(28)] = 649,
  [SMALL_STATE(29)] = 660,
  [SMALL_STATE(30)] = 669,
  [SMALL_STATE(31)] = 680,
  [SMALL_STATE(32)] = 685,
  [SMALL_STATE(33)] = 690,
  [SMALL_STATE(34)] = 697,
  [SMALL_STATE(35)] = 702,
  [SMALL_STATE(36)] = 707,
  [SMALL_STATE(37)] = 712,
  [SMALL_STATE(38)] = 719,
  [SMALL_STATE(39)] = 724,
  [SMALL_STATE(40)] = 728,
  [SMALL_STATE(41)] = 732,
  [SMALL_STATE(42)] = 736,
  [SMALL_STATE(43)] = 740,
  [SMALL_STATE(44)] = 744,
  [SMALL_STATE(45)] = 748,
  [SMALL_STATE(46)] = 752,
  [SMALL_STATE(47)] = 756,
  [SMALL_STATE(48)] = 760,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iterable_assignment, 5, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterable_assignment, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_keyword, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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

TS_PUBLIC const TSLanguage *tree_sitter_test_script(void) {
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
