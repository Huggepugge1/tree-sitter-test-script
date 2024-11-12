#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_SEMI = 3,
  anon_sym_let = 4,
  anon_sym_const = 5,
  sym_colon = 6,
  sym_assignment_operator = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  anon_sym_string = 12,
  anon_sym_int = 13,
  anon_sym_regex = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  sym_identifier = 17,
  sym_string = 18,
  sym_number = 19,
  sym_regex = 20,
  sym_comment = 21,
  sym_source_file = 22,
  sym_test = 23,
  sym__statement = 24,
  sym__expression = 25,
  sym_binary_expression = 26,
  sym_declaration = 27,
  sym_assignment_keyword = 28,
  sym_binary_operator = 29,
  sym_type = 30,
  sym_assignment = 31,
  sym_block = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_block_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_const] = "const",
  [sym_colon] = "colon",
  [sym_assignment_operator] = "assignment_operator",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
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
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_declaration] = "declaration",
  [sym_assignment_keyword] = "assignment_keyword",
  [sym_binary_operator] = "binary_operator",
  [sym_type] = "type",
  [sym_assignment] = "assignment",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_const] = anon_sym_const,
  [sym_colon] = sym_colon,
  [sym_assignment_operator] = sym_assignment_operator,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_declaration] = sym_declaration,
  [sym_assignment_keyword] = sym_assignment_keyword,
  [sym_binary_operator] = sym_binary_operator,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [sym_binary_operator] = {
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

enum ts_field_identifiers {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
  [6] = 5,
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
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 13,
  [25] = 12,
  [26] = 26,
  [27] = 11,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '"', 2,
        '(', 20,
        ')', 21,
        '*', 29,
        '+', 27,
        '-', 28,
        '/', 31,
        ':', 25,
        ';', 22,
        '=', 26,
        '`', 4,
        'c', 49,
        'i', 47,
        'l', 42,
        'r', 40,
        's', 52,
        '{', 38,
        '}', 39,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '`') ADVANCE(60);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(32);
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
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
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
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 18},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_assignment_operator] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_test] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
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
    STATE(36), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(15), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(4), 3,
      sym__statement,
      sym_block,
      aux_sym_block_repeat1,
    STATE(20), 4,
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
    STATE(36), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(15), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(4), 3,
      sym__statement,
      sym_block,
      aux_sym_block_repeat1,
    STATE(20), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [72] = 9,
    ACTIONS(24), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_comment,
    STATE(36), 1,
      sym_assignment_keyword,
    ACTIONS(21), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(32), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(4), 3,
      sym__statement,
      sym_block,
      aux_sym_block_repeat1,
    STATE(20), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [108] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      sym_comment,
    STATE(36), 1,
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
    STATE(20), 4,
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
    STATE(36), 1,
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
    STATE(20), 4,
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
    STATE(36), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    STATE(26), 2,
      sym__statement,
      sym_block,
    ACTIONS(48), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(18), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [212] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(36), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(52), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(15), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [234] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(36), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(54), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(16), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [256] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(36), 1,
      sym_assignment_keyword,
    ACTIONS(7), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(56), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(19), 4,
      sym__expression,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [278] = 2,
    ACTIONS(58), 3,
      anon_sym_let,
      anon_sym_const,
      sym_identifier,
    ACTIONS(60), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
  [292] = 2,
    ACTIONS(62), 3,
      anon_sym_let,
      anon_sym_const,
      sym_identifier,
    ACTIONS(64), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
  [306] = 2,
    ACTIONS(66), 3,
      anon_sym_let,
      anon_sym_const,
      sym_identifier,
    ACTIONS(68), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
  [320] = 2,
    ACTIONS(70), 3,
      anon_sym_let,
      anon_sym_const,
      sym_identifier,
    ACTIONS(72), 3,
      sym_string,
      sym_number,
      sym_regex,
  [331] = 3,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(76), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [344] = 2,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(78), 5,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [355] = 2,
    ACTIONS(82), 1,
      sym_assignment_operator,
    ACTIONS(80), 5,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [366] = 3,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(76), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [379] = 3,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(76), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [392] = 3,
    ACTIONS(88), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(76), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [405] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [416] = 3,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(22), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [427] = 2,
    STATE(34), 1,
      sym_type,
    ACTIONS(97), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [436] = 1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [441] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [446] = 1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [451] = 1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [456] = 1,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [460] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [464] = 1,
    ACTIONS(105), 1,
      sym_string,
  [468] = 1,
    ACTIONS(107), 1,
      sym_colon,
  [472] = 1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
  [476] = 1,
    ACTIONS(111), 1,
      sym_identifier,
  [480] = 1,
    ACTIONS(113), 1,
      sym_assignment_operator,
  [484] = 1,
    ACTIONS(115), 1,
      sym_assignment_operator,
  [488] = 1,
    ACTIONS(117), 1,
      sym_identifier,
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
  [SMALL_STATE(12)] = 292,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 331,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 355,
  [SMALL_STATE(18)] = 366,
  [SMALL_STATE(19)] = 379,
  [SMALL_STATE(20)] = 392,
  [SMALL_STATE(21)] = 405,
  [SMALL_STATE(22)] = 416,
  [SMALL_STATE(23)] = 427,
  [SMALL_STATE(24)] = 436,
  [SMALL_STATE(25)] = 441,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 456,
  [SMALL_STATE(29)] = 460,
  [SMALL_STATE(30)] = 464,
  [SMALL_STATE(31)] = 468,
  [SMALL_STATE(32)] = 472,
  [SMALL_STATE(33)] = 476,
  [SMALL_STATE(34)] = 480,
  [SMALL_STATE(35)] = 484,
  [SMALL_STATE(36)] = 488,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_keyword, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
