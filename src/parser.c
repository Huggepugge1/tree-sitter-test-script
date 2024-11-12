#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
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
  sym_source_file = 22,
  sym_test = 23,
  sym__statement = 24,
  sym__expression = 25,
  sym_binary_expression = 26,
  sym_declaration = 27,
  sym_assignment_keyword = 28,
  sym_type = 29,
  sym_assignment = 30,
  sym_block = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_block_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_const] = "const",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_regex] = "regex",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_declaration] = "declaration",
  [sym_assignment_keyword] = "assignment_keyword",
  [sym_type] = "type",
  [sym_assignment] = "assignment",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_declaration] = sym_declaration,
  [sym_assignment_keyword] = sym_assignment_keyword,
  [sym_type] = sym_type,
  [sym_assignment] = sym_assignment,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
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
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 12,
  [26] = 13,
  [27] = 14,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '"', 2,
        '(', 60,
        ')', 61,
        '*', 54,
        '+', 52,
        '-', 53,
        '/', 56,
        ':', 57,
        ';', 59,
        '=', 58,
        '`', 4,
        'c', 39,
        'i', 37,
        'l', 32,
        'r', 30,
        's', 42,
        '{', 28,
        '}', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '`') ADVANCE(50);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '=') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(27);
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
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_division);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_open_paren);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_close_paren);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
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
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym_test] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_comment,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(15), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(5), 3,
      sym__statement,
      sym_block,
      aux_sym_block_repeat1,
    STATE(21), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [36] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(15), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(5), 3,
      sym__statement,
      sym_block,
      aux_sym_block_repeat1,
    STATE(21), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [72] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym_comment,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(15), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(2), 3,
      sym__statement,
      sym_block,
      aux_sym_block_repeat1,
    STATE(21), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [108] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_comment,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(25), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(36), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(5), 3,
      sym__statement,
      sym_block,
      aux_sym_block_repeat1,
    STATE(21), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [144] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      sym_comment,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(15), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(3), 3,
      sym__statement,
      sym_block,
      aux_sym_block_repeat1,
    STATE(21), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [180] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      sym_comment,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    STATE(28), 2,
      sym__statement,
      sym_block,
    ACTIONS(48), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(20), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [212] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(52), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(18), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [234] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(54), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(19), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [256] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(56), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(17), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [278] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(34), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(58), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(16), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [300] = 2,
    ACTIONS(60), 3,
      anon_sym_let,
      anon_sym_const,
      sym_identifier,
    ACTIONS(62), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
  [314] = 2,
    ACTIONS(64), 3,
      anon_sym_let,
      anon_sym_const,
      sym_identifier,
    ACTIONS(66), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
  [328] = 2,
    ACTIONS(68), 3,
      anon_sym_let,
      anon_sym_const,
      sym_identifier,
    ACTIONS(70), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
  [342] = 2,
    ACTIONS(74), 1,
      sym_assignment_operator,
    ACTIONS(72), 5,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_semicolon,
  [353] = 3,
    ACTIONS(80), 1,
      sym_semicolon,
    ACTIONS(76), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(78), 2,
      sym_multiplication,
      sym_division,
  [365] = 2,
    ACTIONS(78), 2,
      sym_multiplication,
      sym_division,
    ACTIONS(82), 3,
      sym_addition,
      sym_subtraction,
      sym_semicolon,
  [375] = 3,
    ACTIONS(84), 1,
      sym_semicolon,
    ACTIONS(76), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(78), 2,
      sym_multiplication,
      sym_division,
  [387] = 1,
    ACTIONS(82), 5,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_semicolon,
  [395] = 3,
    ACTIONS(86), 1,
      sym_semicolon,
    ACTIONS(76), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(78), 2,
      sym_multiplication,
      sym_division,
  [407] = 3,
    ACTIONS(88), 1,
      sym_semicolon,
    ACTIONS(76), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(78), 2,
      sym_multiplication,
      sym_division,
  [419] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [430] = 3,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(23), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [441] = 2,
    STATE(33), 1,
      sym_type,
    ACTIONS(97), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [450] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [455] = 1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [460] = 1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [465] = 1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [470] = 1,
    ACTIONS(101), 1,
      sym_close_paren,
  [474] = 1,
    ACTIONS(103), 1,
      sym_identifier,
  [478] = 1,
    ACTIONS(105), 1,
      sym_colon,
  [482] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [486] = 1,
    ACTIONS(109), 1,
      sym_assignment_operator,
  [490] = 1,
    ACTIONS(111), 1,
      sym_identifier,
  [494] = 1,
    ACTIONS(113), 1,
      sym_assignment_operator,
  [498] = 1,
    ACTIONS(115), 1,
      sym_open_paren,
  [502] = 1,
    ACTIONS(117), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 212,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 278,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 314,
  [SMALL_STATE(14)] = 328,
  [SMALL_STATE(15)] = 342,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 375,
  [SMALL_STATE(19)] = 387,
  [SMALL_STATE(20)] = 395,
  [SMALL_STATE(21)] = 407,
  [SMALL_STATE(22)] = 419,
  [SMALL_STATE(23)] = 430,
  [SMALL_STATE(24)] = 441,
  [SMALL_STATE(25)] = 450,
  [SMALL_STATE(26)] = 455,
  [SMALL_STATE(27)] = 460,
  [SMALL_STATE(28)] = 465,
  [SMALL_STATE(29)] = 470,
  [SMALL_STATE(30)] = 474,
  [SMALL_STATE(31)] = 478,
  [SMALL_STATE(32)] = 482,
  [SMALL_STATE(33)] = 486,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 494,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 502,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_keyword, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [107] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
