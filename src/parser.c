#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_print = 2,
  anon_sym_println = 3,
  anon_sym_input = 4,
  anon_sym_output = 5,
  anon_sym_let = 6,
  anon_sym_const = 7,
  anon_sym_string = 8,
  anon_sym_int = 9,
  anon_sym_regex = 10,
  sym_for_keyword = 11,
  sym_in_operator = 12,
  aux_sym_identifier_token1 = 13,
  sym_string = 14,
  sym_number = 15,
  sym_regex = 16,
  sym_comment = 17,
  sym_addition = 18,
  sym_subtraction = 19,
  sym_multiplication = 20,
  sym_division = 21,
  sym_colon = 22,
  sym_assignment_operator = 23,
  sym_type_cast_operator = 24,
  sym_semicolon = 25,
  sym_open_paren = 26,
  sym_close_paren = 27,
  sym_open_brace = 28,
  sym_close_brace = 29,
  sym_source_file = 30,
  sym_test = 31,
  sym__statement = 32,
  sym__expression = 33,
  sym_function_call = 34,
  sym_built_in_function_call = 35,
  sym_argument_list = 36,
  sym_built_in_function = 37,
  sym_binary_expression = 38,
  sym_declaration = 39,
  sym_assignment_keyword = 40,
  sym_type = 41,
  sym_assignment = 42,
  sym_for_loop = 43,
  sym_iterable_assignment = 44,
  sym_block = 45,
  sym_identifier = 46,
  sym_test_identifier = 47,
  sym_function = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_argument_list_repeat1 = 50,
  aux_sym_block_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_print] = "print",
  [anon_sym_println] = "println",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_let] = "let",
  [anon_sym_const] = "const",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_regex] = "regex",
  [sym_for_keyword] = "for_keyword",
  [sym_in_operator] = "in_operator",
  [aux_sym_identifier_token1] = "identifier_token1",
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
  [sym_type_cast_operator] = "type_cast_operator",
  [sym_semicolon] = "semicolon",
  [sym_open_paren] = "open_paren",
  [sym_close_paren] = "close_paren",
  [sym_open_brace] = "open_brace",
  [sym_close_brace] = "close_brace",
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_function_call] = "function_call",
  [sym_built_in_function_call] = "built_in_function_call",
  [sym_argument_list] = "argument_list",
  [sym_built_in_function] = "built_in_function",
  [sym_binary_expression] = "binary_expression",
  [sym_declaration] = "declaration",
  [sym_assignment_keyword] = "assignment_keyword",
  [sym_type] = "type",
  [sym_assignment] = "assignment",
  [sym_for_loop] = "for_loop",
  [sym_iterable_assignment] = "iterable_assignment",
  [sym_block] = "block",
  [sym_identifier] = "identifier",
  [sym_test_identifier] = "test_identifier",
  [sym_function] = "function",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_println] = anon_sym_println,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_regex] = anon_sym_regex,
  [sym_for_keyword] = sym_for_keyword,
  [sym_in_operator] = sym_in_operator,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
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
  [sym_type_cast_operator] = sym_type_cast_operator,
  [sym_semicolon] = sym_semicolon,
  [sym_open_paren] = sym_open_paren,
  [sym_close_paren] = sym_close_paren,
  [sym_open_brace] = sym_open_brace,
  [sym_close_brace] = sym_close_brace,
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_function_call] = sym_function_call,
  [sym_built_in_function_call] = sym_built_in_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_built_in_function] = sym_built_in_function,
  [sym_binary_expression] = sym_binary_expression,
  [sym_declaration] = sym_declaration,
  [sym_assignment_keyword] = sym_assignment_keyword,
  [sym_type] = sym_type,
  [sym_assignment] = sym_assignment,
  [sym_for_loop] = sym_for_loop,
  [sym_iterable_assignment] = sym_iterable_assignment,
  [sym_block] = sym_block,
  [sym_identifier] = sym_identifier,
  [sym_test_identifier] = sym_test_identifier,
  [sym_function] = sym_function,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_println] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
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
  [sym_type_cast_operator] = {
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
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_built_in_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_built_in_function] = {
    .visible = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_test_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
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
  [12] = 10,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 20,
  [21] = 15,
  [22] = 22,
  [23] = 18,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 27,
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 28,
  [42] = 20,
  [43] = 25,
  [44] = 30,
  [45] = 33,
  [46] = 32,
  [47] = 36,
  [48] = 34,
  [49] = 49,
  [50] = 35,
  [51] = 31,
  [52] = 27,
  [53] = 29,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 59,
  [63] = 61,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 64,
  [68] = 37,
  [69] = 40,
  [70] = 70,
  [71] = 38,
  [72] = 39,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 75,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 79,
  [91] = 91,
  [92] = 87,
  [93] = 77,
  [94] = 94,
  [95] = 88,
  [96] = 89,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '"', 4,
        '(', 97,
        ')', 98,
        '*', 90,
        '+', 88,
        ',', 42,
        '-', 89,
        '/', 91,
        ':', 92,
        ';', 96,
        '=', 93,
        '`', 6,
        'a', 27,
        'c', 21,
        'f', 22,
        'i', 15,
        'l', 9,
        'o', 36,
        'p', 24,
        'r', 7,
        's', 35,
        '{', 99,
        '}', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 4,
        '(', 97,
        '*', 90,
        '+', 88,
        '-', 89,
        '/', 91,
        '=', 93,
        '`', 6,
        'a', 72,
        'c', 66,
        'f', 67,
        'i', 62,
        'l', 60,
        'o', 80,
        'p', 70,
        '{', 99,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 4,
        ')', 98,
        '`', 6,
        'c', 66,
        'i', 62,
        'l', 60,
        'o', 80,
        'p', 70,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 4,
        '/', 5,
        '`', 6,
        'c', 66,
        'f', 67,
        'i', 62,
        'l', 60,
        'o', 80,
        'p', 70,
        '{', 99,
        '}', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(86);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_println);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_input);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_for_keyword);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_for_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_in_operator);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_addition);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_subtraction);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_multiplication);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_division);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_type_cast_operator);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_type_cast_operator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_open_paren);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_close_paren);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_open_brace);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_close_brace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 40},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 40},
  [74] = {.lex_state = 40},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_println] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
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
    [sym_type_cast_operator] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_open_paren] = ACTIONS(1),
    [sym_close_paren] = ACTIONS(1),
    [sym_open_brace] = ACTIONS(1),
    [sym_close_brace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_test] = STATE(58),
    [sym_test_identifier] = STATE(82),
    [aux_sym_source_file_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(5),
  },
  [2] = {
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(55),
    [sym_function_call] = STATE(55),
    [sym_built_in_function_call] = STATE(55),
    [sym_built_in_function] = STATE(87),
    [sym_binary_expression] = STATE(55),
    [sym_declaration] = STATE(55),
    [sym_assignment_keyword] = STATE(73),
    [sym_assignment] = STATE(55),
    [sym_for_loop] = STATE(4),
    [sym_block] = STATE(4),
    [sym_identifier] = STATE(43),
    [sym_function] = STATE(77),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(11),
    [aux_sym_identifier_token1] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym_open_brace] = ACTIONS(19),
    [sym_close_brace] = ACTIONS(21),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__expression] = STATE(55),
    [sym_function_call] = STATE(55),
    [sym_built_in_function_call] = STATE(55),
    [sym_built_in_function] = STATE(87),
    [sym_binary_expression] = STATE(55),
    [sym_declaration] = STATE(55),
    [sym_assignment_keyword] = STATE(73),
    [sym_assignment] = STATE(55),
    [sym_for_loop] = STATE(2),
    [sym_block] = STATE(2),
    [sym_identifier] = STATE(43),
    [sym_function] = STATE(77),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(11),
    [aux_sym_identifier_token1] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
    [sym_comment] = ACTIONS(23),
    [sym_open_brace] = ACTIONS(19),
    [sym_close_brace] = ACTIONS(25),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(55),
    [sym_function_call] = STATE(55),
    [sym_built_in_function_call] = STATE(55),
    [sym_built_in_function] = STATE(87),
    [sym_binary_expression] = STATE(55),
    [sym_declaration] = STATE(55),
    [sym_assignment_keyword] = STATE(73),
    [sym_assignment] = STATE(55),
    [sym_for_loop] = STATE(4),
    [sym_block] = STATE(4),
    [sym_identifier] = STATE(43),
    [sym_function] = STATE(77),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_print] = ACTIONS(27),
    [anon_sym_println] = ACTIONS(27),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(30),
    [anon_sym_const] = ACTIONS(30),
    [sym_for_keyword] = ACTIONS(33),
    [aux_sym_identifier_token1] = ACTIONS(36),
    [sym_string] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [sym_regex] = ACTIONS(39),
    [sym_comment] = ACTIONS(42),
    [sym_open_brace] = ACTIONS(45),
    [sym_close_brace] = ACTIONS(48),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(55),
    [sym_function_call] = STATE(55),
    [sym_built_in_function_call] = STATE(55),
    [sym_built_in_function] = STATE(87),
    [sym_binary_expression] = STATE(55),
    [sym_declaration] = STATE(55),
    [sym_assignment_keyword] = STATE(73),
    [sym_assignment] = STATE(55),
    [sym_for_loop] = STATE(4),
    [sym_block] = STATE(4),
    [sym_identifier] = STATE(43),
    [sym_function] = STATE(77),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(11),
    [aux_sym_identifier_token1] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym_open_brace] = ACTIONS(19),
    [sym_close_brace] = ACTIONS(50),
  },
  [6] = {
    [sym__statement] = STATE(5),
    [sym__expression] = STATE(55),
    [sym_function_call] = STATE(55),
    [sym_built_in_function_call] = STATE(55),
    [sym_built_in_function] = STATE(87),
    [sym_binary_expression] = STATE(55),
    [sym_declaration] = STATE(55),
    [sym_assignment_keyword] = STATE(73),
    [sym_assignment] = STATE(55),
    [sym_for_loop] = STATE(5),
    [sym_block] = STATE(5),
    [sym_identifier] = STATE(43),
    [sym_function] = STATE(77),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(11),
    [aux_sym_identifier_token1] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
    [sym_comment] = ACTIONS(52),
    [sym_open_brace] = ACTIONS(19),
    [sym_close_brace] = ACTIONS(54),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym_for_keyword,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_open_brace,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(58), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(70), 3,
      sym__statement,
      sym_for_loop,
      sym_block,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(56), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [53] = 13,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym_for_keyword,
    ACTIONS(62), 1,
      sym_open_brace,
    ACTIONS(64), 1,
      sym_comment,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(58), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(71), 3,
      sym__statement,
      sym_for_loop,
      sym_block,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(56), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [106] = 13,
    ACTIONS(11), 1,
      sym_for_keyword,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      sym_open_brace,
    ACTIONS(66), 1,
      sym_comment,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(15), 3,
      sym_string,
      sym_number,
      sym_regex,
    STATE(38), 3,
      sym__statement,
      sym_for_loop,
      sym_block,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(55), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [159] = 11,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    ACTIONS(70), 1,
      sym_close_paren,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    STATE(96), 1,
      sym_argument_list,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(68), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(49), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [204] = 11,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    ACTIONS(72), 1,
      sym_close_paren,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(79), 1,
      sym_argument_list,
    STATE(87), 1,
      sym_built_in_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(68), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(49), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [249] = 11,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    ACTIONS(74), 1,
      sym_close_paren,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    STATE(89), 1,
      sym_argument_list,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(68), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(49), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [294] = 11,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    ACTIONS(76), 1,
      sym_close_paren,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    STATE(90), 1,
      sym_argument_list,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(68), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(49), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [339] = 9,
    ACTIONS(78), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
    STATE(74), 1,
      sym_assignment_keyword,
    STATE(92), 1,
      sym_built_in_function,
    STATE(93), 1,
      sym_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(80), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(26), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [378] = 9,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(82), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(52), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [417] = 9,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(84), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(54), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [456] = 9,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(86), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(53), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [495] = 9,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(88), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(47), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [534] = 9,
    ACTIONS(78), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
    STATE(74), 1,
      sym_assignment_keyword,
    STATE(92), 1,
      sym_built_in_function,
    STATE(93), 1,
      sym_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(90), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(29), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [573] = 3,
    ACTIONS(96), 1,
      sym_open_paren,
    ACTIONS(94), 9,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_assignment_operator,
      sym_open_brace,
    ACTIONS(92), 10,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
      sym_division,
      sym_type_cast_operator,
  [600] = 9,
    ACTIONS(78), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
    STATE(74), 1,
      sym_assignment_keyword,
    STATE(92), 1,
      sym_built_in_function,
    STATE(93), 1,
      sym_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(98), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(27), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [639] = 9,
    ACTIONS(78), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
    STATE(74), 1,
      sym_assignment_keyword,
    STATE(92), 1,
      sym_built_in_function,
    STATE(93), 1,
      sym_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(100), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(35), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [678] = 9,
    ACTIONS(78), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
    STATE(74), 1,
      sym_assignment_keyword,
    STATE(92), 1,
      sym_built_in_function,
    STATE(93), 1,
      sym_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(102), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(36), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [717] = 9,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      sym_identifier,
    STATE(73), 1,
      sym_assignment_keyword,
    STATE(77), 1,
      sym_function,
    STATE(87), 1,
      sym_built_in_function,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(104), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(50), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [756] = 3,
    ACTIONS(110), 1,
      sym_assignment_operator,
    ACTIONS(108), 8,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_open_brace,
    ACTIONS(106), 10,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
      sym_division,
      sym_type_cast_operator,
  [782] = 6,
    ACTIONS(118), 1,
      sym_multiplication,
    ACTIONS(120), 1,
      sym_division,
    ACTIONS(122), 1,
      sym_type_cast_operator,
    ACTIONS(116), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(114), 5,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
    ACTIONS(112), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
  [813] = 5,
    ACTIONS(118), 1,
      sym_multiplication,
    ACTIONS(120), 1,
      sym_division,
    ACTIONS(122), 1,
      sym_type_cast_operator,
    ACTIONS(126), 7,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_open_brace,
    ACTIONS(124), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
  [842] = 2,
    ACTIONS(130), 8,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_open_brace,
    ACTIONS(128), 10,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
      sym_division,
      sym_type_cast_operator,
  [865] = 3,
    ACTIONS(122), 1,
      sym_type_cast_operator,
    ACTIONS(126), 8,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_open_brace,
    ACTIONS(124), 9,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
      sym_division,
  [890] = 2,
    ACTIONS(134), 8,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_open_brace,
    ACTIONS(132), 10,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
      sym_division,
      sym_type_cast_operator,
  [913] = 2,
    ACTIONS(126), 8,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_open_brace,
    ACTIONS(124), 10,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
      sym_division,
      sym_type_cast_operator,
  [936] = 2,
    ACTIONS(138), 8,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_open_brace,
    ACTIONS(136), 10,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
      sym_division,
      sym_type_cast_operator,
  [959] = 2,
    ACTIONS(142), 8,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_open_brace,
    ACTIONS(140), 10,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
      sym_division,
      sym_type_cast_operator,
  [982] = 2,
    ACTIONS(146), 8,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_open_brace,
    ACTIONS(144), 10,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
      sym_division,
      sym_type_cast_operator,
  [1005] = 6,
    ACTIONS(118), 1,
      sym_multiplication,
    ACTIONS(120), 1,
      sym_division,
    ACTIONS(122), 1,
      sym_type_cast_operator,
    ACTIONS(116), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(150), 5,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
    ACTIONS(148), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
  [1036] = 6,
    ACTIONS(118), 1,
      sym_multiplication,
    ACTIONS(120), 1,
      sym_division,
    ACTIONS(122), 1,
      sym_type_cast_operator,
    ACTIONS(116), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(154), 5,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
    ACTIONS(152), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
  [1067] = 2,
    ACTIONS(158), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
    ACTIONS(156), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
  [1086] = 2,
    ACTIONS(162), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
    ACTIONS(160), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
  [1105] = 2,
    ACTIONS(166), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
    ACTIONS(164), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
  [1124] = 2,
    ACTIONS(170), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
    ACTIONS(168), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      aux_sym_identifier_token1,
  [1143] = 1,
    ACTIONS(130), 10,
      anon_sym_COMMA,
      sym_in_operator,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_assignment_operator,
      sym_type_cast_operator,
      sym_semicolon,
      sym_close_paren,
  [1156] = 2,
    ACTIONS(96), 1,
      sym_open_paren,
    ACTIONS(94), 9,
      anon_sym_COMMA,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_assignment_operator,
      sym_type_cast_operator,
      sym_semicolon,
      sym_close_paren,
  [1171] = 2,
    ACTIONS(172), 1,
      sym_assignment_operator,
    ACTIONS(108), 8,
      anon_sym_COMMA,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_type_cast_operator,
      sym_semicolon,
      sym_close_paren,
  [1185] = 1,
    ACTIONS(134), 8,
      anon_sym_COMMA,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_type_cast_operator,
      sym_semicolon,
      sym_close_paren,
  [1196] = 1,
    ACTIONS(142), 8,
      anon_sym_COMMA,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_type_cast_operator,
      sym_semicolon,
      sym_close_paren,
  [1207] = 1,
    ACTIONS(138), 8,
      anon_sym_COMMA,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_type_cast_operator,
      sym_semicolon,
      sym_close_paren,
  [1218] = 4,
    ACTIONS(178), 1,
      sym_type_cast_operator,
    ACTIONS(174), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(176), 2,
      sym_multiplication,
      sym_division,
    ACTIONS(154), 3,
      anon_sym_COMMA,
      sym_semicolon,
      sym_close_paren,
  [1235] = 1,
    ACTIONS(146), 8,
      anon_sym_COMMA,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_type_cast_operator,
      sym_semicolon,
      sym_close_paren,
  [1246] = 6,
    ACTIONS(178), 1,
      sym_type_cast_operator,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      sym_close_paren,
    STATE(66), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(174), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(176), 2,
      sym_multiplication,
      sym_division,
  [1267] = 4,
    ACTIONS(178), 1,
      sym_type_cast_operator,
    ACTIONS(174), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(176), 2,
      sym_multiplication,
      sym_division,
    ACTIONS(150), 3,
      anon_sym_COMMA,
      sym_semicolon,
      sym_close_paren,
  [1284] = 1,
    ACTIONS(126), 8,
      anon_sym_COMMA,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_type_cast_operator,
      sym_semicolon,
      sym_close_paren,
  [1295] = 3,
    ACTIONS(178), 1,
      sym_type_cast_operator,
    ACTIONS(176), 2,
      sym_multiplication,
      sym_division,
    ACTIONS(126), 5,
      anon_sym_COMMA,
      sym_addition,
      sym_subtraction,
      sym_semicolon,
      sym_close_paren,
  [1310] = 2,
    ACTIONS(178), 1,
      sym_type_cast_operator,
    ACTIONS(126), 7,
      anon_sym_COMMA,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_division,
      sym_semicolon,
      sym_close_paren,
  [1323] = 4,
    ACTIONS(178), 1,
      sym_type_cast_operator,
    ACTIONS(174), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(176), 2,
      sym_multiplication,
      sym_division,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      sym_close_paren,
  [1339] = 4,
    ACTIONS(178), 1,
      sym_type_cast_operator,
    ACTIONS(186), 1,
      sym_semicolon,
    ACTIONS(174), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(176), 2,
      sym_multiplication,
      sym_division,
  [1354] = 4,
    ACTIONS(178), 1,
      sym_type_cast_operator,
    ACTIONS(188), 1,
      sym_semicolon,
    ACTIONS(174), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(176), 2,
      sym_multiplication,
      sym_division,
  [1369] = 4,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      aux_sym_identifier_token1,
    STATE(82), 1,
      sym_test_identifier,
    STATE(57), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [1383] = 4,
    ACTIONS(5), 1,
      aux_sym_identifier_token1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_test_identifier,
    STATE(57), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [1397] = 2,
    STATE(51), 1,
      sym_type,
    ACTIONS(197), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [1406] = 2,
    STATE(80), 1,
      sym_type,
    ACTIONS(197), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [1415] = 2,
    STATE(85), 1,
      sym_type,
    ACTIONS(197), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [1424] = 2,
    STATE(31), 1,
      sym_type,
    ACTIONS(199), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [1433] = 2,
    STATE(75), 1,
      sym_type,
    ACTIONS(197), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [1442] = 3,
    ACTIONS(201), 1,
      aux_sym_identifier_token1,
    STATE(8), 1,
      sym_iterable_assignment,
    STATE(84), 1,
      sym_identifier,
  [1452] = 3,
    ACTIONS(184), 1,
      sym_close_paren,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_argument_list_repeat1,
  [1462] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      sym_close_paren,
    STATE(65), 1,
      aux_sym_argument_list_repeat1,
  [1472] = 3,
    ACTIONS(201), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym_iterable_assignment,
    STATE(84), 1,
      sym_identifier,
  [1482] = 1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [1487] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [1492] = 1,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [1497] = 1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [1502] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [1507] = 2,
    ACTIONS(201), 1,
      aux_sym_identifier_token1,
    STATE(88), 1,
      sym_identifier,
  [1514] = 2,
    ACTIONS(201), 1,
      aux_sym_identifier_token1,
    STATE(95), 1,
      sym_identifier,
  [1521] = 1,
    ACTIONS(210), 1,
      sym_assignment_operator,
  [1525] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [1529] = 1,
    ACTIONS(214), 1,
      sym_open_paren,
  [1533] = 1,
    ACTIONS(94), 1,
      sym_colon,
  [1537] = 1,
    ACTIONS(216), 1,
      sym_close_paren,
  [1541] = 1,
    ACTIONS(218), 1,
      sym_in_operator,
  [1545] = 1,
    ACTIONS(220), 1,
      sym_string,
  [1549] = 1,
    ACTIONS(222), 1,
      sym_open_paren,
  [1553] = 1,
    ACTIONS(224), 1,
      sym_open_paren,
  [1557] = 1,
    ACTIONS(226), 1,
      sym_colon,
  [1561] = 1,
    ACTIONS(228), 1,
      sym_assignment_operator,
  [1565] = 1,
    ACTIONS(230), 1,
      sym_open_paren,
  [1569] = 1,
    ACTIONS(232), 1,
      sym_open_paren,
  [1573] = 1,
    ACTIONS(234), 1,
      sym_colon,
  [1577] = 1,
    ACTIONS(236), 1,
      sym_close_paren,
  [1581] = 1,
    ACTIONS(238), 1,
      sym_close_paren,
  [1585] = 1,
    ACTIONS(240), 1,
      sym_close_paren,
  [1589] = 1,
    ACTIONS(242), 1,
      sym_open_paren,
  [1593] = 1,
    ACTIONS(244), 1,
      sym_open_paren,
  [1597] = 1,
    ACTIONS(246), 1,
      aux_sym_identifier_token1,
  [1601] = 1,
    ACTIONS(248), 1,
      sym_colon,
  [1605] = 1,
    ACTIONS(250), 1,
      sym_close_paren,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 53,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 339,
  [SMALL_STATE(15)] = 378,
  [SMALL_STATE(16)] = 417,
  [SMALL_STATE(17)] = 456,
  [SMALL_STATE(18)] = 495,
  [SMALL_STATE(19)] = 534,
  [SMALL_STATE(20)] = 573,
  [SMALL_STATE(21)] = 600,
  [SMALL_STATE(22)] = 639,
  [SMALL_STATE(23)] = 678,
  [SMALL_STATE(24)] = 717,
  [SMALL_STATE(25)] = 756,
  [SMALL_STATE(26)] = 782,
  [SMALL_STATE(27)] = 813,
  [SMALL_STATE(28)] = 842,
  [SMALL_STATE(29)] = 865,
  [SMALL_STATE(30)] = 890,
  [SMALL_STATE(31)] = 913,
  [SMALL_STATE(32)] = 936,
  [SMALL_STATE(33)] = 959,
  [SMALL_STATE(34)] = 982,
  [SMALL_STATE(35)] = 1005,
  [SMALL_STATE(36)] = 1036,
  [SMALL_STATE(37)] = 1067,
  [SMALL_STATE(38)] = 1086,
  [SMALL_STATE(39)] = 1105,
  [SMALL_STATE(40)] = 1124,
  [SMALL_STATE(41)] = 1143,
  [SMALL_STATE(42)] = 1156,
  [SMALL_STATE(43)] = 1171,
  [SMALL_STATE(44)] = 1185,
  [SMALL_STATE(45)] = 1196,
  [SMALL_STATE(46)] = 1207,
  [SMALL_STATE(47)] = 1218,
  [SMALL_STATE(48)] = 1235,
  [SMALL_STATE(49)] = 1246,
  [SMALL_STATE(50)] = 1267,
  [SMALL_STATE(51)] = 1284,
  [SMALL_STATE(52)] = 1295,
  [SMALL_STATE(53)] = 1310,
  [SMALL_STATE(54)] = 1323,
  [SMALL_STATE(55)] = 1339,
  [SMALL_STATE(56)] = 1354,
  [SMALL_STATE(57)] = 1369,
  [SMALL_STATE(58)] = 1383,
  [SMALL_STATE(59)] = 1397,
  [SMALL_STATE(60)] = 1406,
  [SMALL_STATE(61)] = 1415,
  [SMALL_STATE(62)] = 1424,
  [SMALL_STATE(63)] = 1433,
  [SMALL_STATE(64)] = 1442,
  [SMALL_STATE(65)] = 1452,
  [SMALL_STATE(66)] = 1462,
  [SMALL_STATE(67)] = 1472,
  [SMALL_STATE(68)] = 1482,
  [SMALL_STATE(69)] = 1487,
  [SMALL_STATE(70)] = 1492,
  [SMALL_STATE(71)] = 1497,
  [SMALL_STATE(72)] = 1502,
  [SMALL_STATE(73)] = 1507,
  [SMALL_STATE(74)] = 1514,
  [SMALL_STATE(75)] = 1521,
  [SMALL_STATE(76)] = 1525,
  [SMALL_STATE(77)] = 1529,
  [SMALL_STATE(78)] = 1533,
  [SMALL_STATE(79)] = 1537,
  [SMALL_STATE(80)] = 1541,
  [SMALL_STATE(81)] = 1545,
  [SMALL_STATE(82)] = 1549,
  [SMALL_STATE(83)] = 1553,
  [SMALL_STATE(84)] = 1557,
  [SMALL_STATE(85)] = 1561,
  [SMALL_STATE(86)] = 1565,
  [SMALL_STATE(87)] = 1569,
  [SMALL_STATE(88)] = 1573,
  [SMALL_STATE(89)] = 1577,
  [SMALL_STATE(90)] = 1581,
  [SMALL_STATE(91)] = 1585,
  [SMALL_STATE(92)] = 1589,
  [SMALL_STATE(93)] = 1593,
  [SMALL_STATE(94)] = 1597,
  [SMALL_STATE(95)] = 1601,
  [SMALL_STATE(96)] = 1605,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iterable_assignment, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterable_assignment, 5, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in_function_call, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_function_call, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in_function_call, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_function_call, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_identifier, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_function, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_keyword, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
