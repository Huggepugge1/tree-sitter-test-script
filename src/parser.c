#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  sym_identifier = 13,
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
  sym_semicolon = 24,
  sym_open_paren = 25,
  sym_close_paren = 26,
  sym_open_brace = 27,
  sym_close_brace = 28,
  sym_source_file = 29,
  sym_test = 30,
  sym__statement = 31,
  sym__expression = 32,
  sym_function_call = 33,
  sym_built_in_function_call = 34,
  sym_argument_list = 35,
  sym_built_in_function = 36,
  sym_binary_expression = 37,
  sym_declaration = 38,
  sym_assignment_keyword = 39,
  sym_type = 40,
  sym_assignment = 41,
  sym_for_loop = 42,
  sym_iterable_assignment = 43,
  sym_block = 44,
  sym_function = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_argument_list_repeat1 = 47,
  aux_sym_block_repeat1 = 48,
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
  [5] = 3,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 7,
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
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 28,
  [46] = 31,
  [47] = 29,
  [48] = 42,
  [49] = 30,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      ADVANCE_MAP(
        '"', 3,
        '(', 91,
        ')', 92,
        '*', 86,
        '+', 84,
        ',', 39,
        '-', 85,
        '/', 87,
        ':', 88,
        ';', 90,
        '=', 89,
        '`', 4,
        'c', 19,
        'f', 20,
        'i', 13,
        'l', 7,
        'o', 33,
        'p', 22,
        'r', 5,
        's', 32,
        '{', 93,
        '}', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 3,
        '(', 91,
        ')', 92,
        '*', 86,
        '+', 84,
        ',', 39,
        '-', 85,
        '/', 87,
        ';', 90,
        '=', 89,
        '`', 4,
        'c', 63,
        'f', 64,
        'i', 59,
        'l', 57,
        'o', 76,
        'p', 67,
        '{', 93,
        '}', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        ')', 92,
        '`', 4,
        'c', 63,
        'i', 59,
        'l', 57,
        'o', 76,
        'p', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '`') ADVANCE(82);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'g') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_println);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_input);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_for_keyword);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_for_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_in_operator);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_addition);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_subtraction);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_multiplication);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_division);
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_open_paren);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_close_paren);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_open_brace);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_close_brace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
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
    [sym_semicolon] = ACTIONS(1),
    [sym_open_paren] = ACTIONS(1),
    [sym_close_paren] = ACTIONS(1),
    [sym_open_brace] = ACTIONS(1),
    [sym_close_brace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(55),
    [sym_test] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
  [2] = {
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(34),
    [sym_function_call] = STATE(34),
    [sym_built_in_function_call] = STATE(34),
    [sym_built_in_function] = STATE(56),
    [sym_binary_expression] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym_assignment_keyword] = STATE(60),
    [sym_assignment] = STATE(34),
    [sym_for_loop] = STATE(4),
    [sym_block] = STATE(4),
    [sym_function] = STATE(50),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym_open_brace] = ACTIONS(19),
    [sym_close_brace] = ACTIONS(21),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__expression] = STATE(34),
    [sym_function_call] = STATE(34),
    [sym_built_in_function_call] = STATE(34),
    [sym_built_in_function] = STATE(56),
    [sym_binary_expression] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym_assignment_keyword] = STATE(60),
    [sym_assignment] = STATE(34),
    [sym_for_loop] = STATE(2),
    [sym_block] = STATE(2),
    [sym_function] = STATE(50),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
    [sym_comment] = ACTIONS(23),
    [sym_open_brace] = ACTIONS(19),
    [sym_close_brace] = ACTIONS(25),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(34),
    [sym_function_call] = STATE(34),
    [sym_built_in_function_call] = STATE(34),
    [sym_built_in_function] = STATE(56),
    [sym_binary_expression] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym_assignment_keyword] = STATE(60),
    [sym_assignment] = STATE(34),
    [sym_for_loop] = STATE(4),
    [sym_block] = STATE(4),
    [sym_function] = STATE(50),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_print] = ACTIONS(27),
    [anon_sym_println] = ACTIONS(27),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(30),
    [anon_sym_const] = ACTIONS(30),
    [sym_for_keyword] = ACTIONS(33),
    [sym_identifier] = ACTIONS(36),
    [sym_string] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [sym_regex] = ACTIONS(39),
    [sym_comment] = ACTIONS(42),
    [sym_open_brace] = ACTIONS(45),
    [sym_close_brace] = ACTIONS(48),
  },
  [5] = {
    [sym__statement] = STATE(6),
    [sym__expression] = STATE(34),
    [sym_function_call] = STATE(34),
    [sym_built_in_function_call] = STATE(34),
    [sym_built_in_function] = STATE(56),
    [sym_binary_expression] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym_assignment_keyword] = STATE(60),
    [sym_assignment] = STATE(34),
    [sym_for_loop] = STATE(6),
    [sym_block] = STATE(6),
    [sym_function] = STATE(50),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
    [sym_comment] = ACTIONS(50),
    [sym_open_brace] = ACTIONS(19),
    [sym_close_brace] = ACTIONS(52),
  },
  [6] = {
    [sym__statement] = STATE(4),
    [sym__expression] = STATE(34),
    [sym_function_call] = STATE(34),
    [sym_built_in_function_call] = STATE(34),
    [sym_built_in_function] = STATE(56),
    [sym_binary_expression] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym_assignment_keyword] = STATE(60),
    [sym_assignment] = STATE(34),
    [sym_for_loop] = STATE(4),
    [sym_block] = STATE(4),
    [sym_function] = STATE(50),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym_open_brace] = ACTIONS(19),
    [sym_close_brace] = ACTIONS(54),
  },
  [7] = {
    [sym__statement] = STATE(47),
    [sym__expression] = STATE(35),
    [sym_function_call] = STATE(35),
    [sym_built_in_function_call] = STATE(35),
    [sym_built_in_function] = STATE(56),
    [sym_binary_expression] = STATE(35),
    [sym_declaration] = STATE(35),
    [sym_assignment_keyword] = STATE(60),
    [sym_assignment] = STATE(35),
    [sym_for_loop] = STATE(47),
    [sym_block] = STATE(47),
    [sym_function] = STATE(50),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(56),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(58),
    [sym_number] = ACTIONS(58),
    [sym_regex] = ACTIONS(58),
    [sym_comment] = ACTIONS(60),
    [sym_open_brace] = ACTIONS(62),
  },
  [8] = {
    [sym__statement] = STATE(44),
    [sym__expression] = STATE(35),
    [sym_function_call] = STATE(35),
    [sym_built_in_function_call] = STATE(35),
    [sym_built_in_function] = STATE(56),
    [sym_binary_expression] = STATE(35),
    [sym_declaration] = STATE(35),
    [sym_assignment_keyword] = STATE(60),
    [sym_assignment] = STATE(35),
    [sym_for_loop] = STATE(44),
    [sym_block] = STATE(44),
    [sym_function] = STATE(50),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(56),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(58),
    [sym_number] = ACTIONS(58),
    [sym_regex] = ACTIONS(58),
    [sym_comment] = ACTIONS(64),
    [sym_open_brace] = ACTIONS(62),
  },
  [9] = {
    [sym__statement] = STATE(29),
    [sym__expression] = STATE(34),
    [sym_function_call] = STATE(34),
    [sym_built_in_function_call] = STATE(34),
    [sym_built_in_function] = STATE(56),
    [sym_binary_expression] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym_assignment_keyword] = STATE(60),
    [sym_assignment] = STATE(34),
    [sym_for_loop] = STATE(29),
    [sym_block] = STATE(29),
    [sym_function] = STATE(50),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_println] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [sym_for_keyword] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
    [sym_comment] = ACTIONS(66),
    [sym_open_brace] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(72), 1,
      sym_assignment_operator,
    ACTIONS(74), 1,
      sym_open_paren,
    ACTIONS(70), 9,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
      sym_division,
    ACTIONS(68), 11,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_semicolon,
      sym_close_paren,
      sym_open_brace,
  [31] = 10,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_close_paren,
    STATE(50), 1,
      sym_function,
    STATE(56), 1,
      sym_built_in_function,
    STATE(57), 1,
      sym_argument_list,
    STATE(60), 1,
      sym_assignment_keyword,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(76), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(32), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [73] = 10,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym_close_paren,
    STATE(50), 1,
      sym_function,
    STATE(56), 1,
      sym_built_in_function,
    STATE(60), 1,
      sym_assignment_keyword,
    STATE(63), 1,
      sym_argument_list,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(76), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(32), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [115] = 5,
    ACTIONS(88), 1,
      sym_multiplication,
    ACTIONS(90), 1,
      sym_division,
    ACTIONS(86), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(82), 8,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_semicolon,
      sym_close_paren,
      sym_open_brace,
    ACTIONS(84), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
  [146] = 4,
    ACTIONS(88), 1,
      sym_multiplication,
    ACTIONS(90), 1,
      sym_division,
    ACTIONS(94), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
    ACTIONS(92), 10,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_semicolon,
      sym_close_paren,
      sym_open_brace,
  [175] = 2,
    ACTIONS(98), 9,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
      sym_division,
    ACTIONS(96), 11,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_semicolon,
      sym_close_paren,
      sym_open_brace,
  [200] = 2,
    ACTIONS(102), 9,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
      sym_division,
    ACTIONS(100), 11,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_semicolon,
      sym_close_paren,
      sym_open_brace,
  [225] = 2,
    ACTIONS(106), 9,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
      sym_division,
    ACTIONS(104), 11,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_semicolon,
      sym_close_paren,
      sym_open_brace,
  [250] = 2,
    ACTIONS(110), 9,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
      sym_division,
    ACTIONS(108), 11,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_semicolon,
      sym_close_paren,
      sym_open_brace,
  [275] = 5,
    ACTIONS(88), 1,
      sym_multiplication,
    ACTIONS(90), 1,
      sym_division,
    ACTIONS(86), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(112), 8,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_semicolon,
      sym_close_paren,
      sym_open_brace,
    ACTIONS(114), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
  [306] = 2,
    ACTIONS(94), 9,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
      sym_division,
    ACTIONS(92), 11,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_addition,
      sym_subtraction,
      sym_multiplication,
      sym_semicolon,
      sym_close_paren,
      sym_open_brace,
  [331] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(50), 1,
      sym_function,
    STATE(56), 1,
      sym_built_in_function,
    STATE(60), 1,
      sym_assignment_keyword,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(116), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(14), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [367] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(50), 1,
      sym_function,
    STATE(56), 1,
      sym_built_in_function,
    STATE(60), 1,
      sym_assignment_keyword,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(118), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(20), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [403] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(50), 1,
      sym_function,
    STATE(56), 1,
      sym_built_in_function,
    STATE(60), 1,
      sym_assignment_keyword,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(120), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(13), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [439] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(50), 1,
      sym_function,
    STATE(56), 1,
      sym_built_in_function,
    STATE(60), 1,
      sym_assignment_keyword,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(122), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(33), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [475] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(50), 1,
      sym_function,
    STATE(56), 1,
      sym_built_in_function,
    STATE(60), 1,
      sym_assignment_keyword,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(124), 3,
      sym_string,
      sym_number,
      sym_regex,
    ACTIONS(7), 4,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
    STATE(19), 6,
      sym__expression,
      sym_function_call,
      sym_built_in_function_call,
      sym_binary_expression,
      sym_declaration,
      sym_assignment,
  [511] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(50), 1,
      sym_function,
    STATE(56), 1,
      sym_built_in_function,
    STATE(60), 1,
      sym_assignment_keyword,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(126), 3,
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
  [547] = 5,
    ACTIONS(88), 1,
      sym_multiplication,
    ACTIONS(90), 1,
      sym_division,
    ACTIONS(86), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(130), 5,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
    ACTIONS(128), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
  [575] = 2,
    ACTIONS(134), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
    ACTIONS(132), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
  [594] = 2,
    ACTIONS(138), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
    ACTIONS(136), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
  [613] = 2,
    ACTIONS(142), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
    ACTIONS(140), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
  [632] = 2,
    ACTIONS(146), 6,
      sym_string,
      sym_number,
      sym_regex,
      sym_comment,
      sym_open_brace,
      sym_close_brace,
    ACTIONS(144), 8,
      anon_sym_print,
      anon_sym_println,
      anon_sym_input,
      anon_sym_output,
      anon_sym_let,
      anon_sym_const,
      sym_for_keyword,
      sym_identifier,
  [651] = 5,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      sym_close_paren,
    STATE(41), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(86), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(88), 2,
      sym_multiplication,
      sym_division,
  [669] = 3,
    ACTIONS(86), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(88), 2,
      sym_multiplication,
      sym_division,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      sym_close_paren,
  [682] = 3,
    ACTIONS(154), 1,
      sym_semicolon,
    ACTIONS(86), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(88), 2,
      sym_multiplication,
      sym_division,
  [694] = 3,
    ACTIONS(156), 1,
      sym_semicolon,
    ACTIONS(86), 2,
      sym_addition,
      sym_subtraction,
    ACTIONS(88), 2,
      sym_multiplication,
      sym_division,
  [706] = 2,
    STATE(53), 1,
      sym_type,
    ACTIONS(158), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [715] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [726] = 3,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(38), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [737] = 2,
    STATE(51), 1,
      sym_type,
    ACTIONS(158), 3,
      anon_sym_string,
      anon_sym_int,
      anon_sym_regex,
  [746] = 3,
    ACTIONS(152), 1,
      sym_close_paren,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
  [756] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      sym_close_paren,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
  [766] = 2,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(7), 1,
      sym_iterable_assignment,
  [773] = 1,
    ACTIONS(174), 2,
      sym_in_operator,
      sym_assignment_operator,
  [778] = 1,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [783] = 1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [788] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [793] = 1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [798] = 2,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(9), 1,
      sym_iterable_assignment,
  [805] = 1,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [810] = 1,
    ACTIONS(178), 1,
      sym_open_paren,
  [814] = 1,
    ACTIONS(180), 1,
      sym_in_operator,
  [818] = 1,
    ACTIONS(182), 1,
      sym_colon,
  [822] = 1,
    ACTIONS(184), 1,
      sym_assignment_operator,
  [826] = 1,
    ACTIONS(186), 1,
      sym_string,
  [830] = 1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [834] = 1,
    ACTIONS(190), 1,
      sym_open_paren,
  [838] = 1,
    ACTIONS(192), 1,
      sym_close_paren,
  [842] = 1,
    ACTIONS(194), 1,
      sym_close_paren,
  [846] = 1,
    ACTIONS(196), 1,
      sym_open_paren,
  [850] = 1,
    ACTIONS(198), 1,
      sym_identifier,
  [854] = 1,
    ACTIONS(200), 1,
      sym_open_paren,
  [858] = 1,
    ACTIONS(202), 1,
      sym_identifier,
  [862] = 1,
    ACTIONS(204), 1,
      sym_close_paren,
  [866] = 1,
    ACTIONS(206), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 31,
  [SMALL_STATE(12)] = 73,
  [SMALL_STATE(13)] = 115,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 225,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 306,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 367,
  [SMALL_STATE(23)] = 403,
  [SMALL_STATE(24)] = 439,
  [SMALL_STATE(25)] = 475,
  [SMALL_STATE(26)] = 511,
  [SMALL_STATE(27)] = 547,
  [SMALL_STATE(28)] = 575,
  [SMALL_STATE(29)] = 594,
  [SMALL_STATE(30)] = 613,
  [SMALL_STATE(31)] = 632,
  [SMALL_STATE(32)] = 651,
  [SMALL_STATE(33)] = 669,
  [SMALL_STATE(34)] = 682,
  [SMALL_STATE(35)] = 694,
  [SMALL_STATE(36)] = 706,
  [SMALL_STATE(37)] = 715,
  [SMALL_STATE(38)] = 726,
  [SMALL_STATE(39)] = 737,
  [SMALL_STATE(40)] = 746,
  [SMALL_STATE(41)] = 756,
  [SMALL_STATE(42)] = 766,
  [SMALL_STATE(43)] = 773,
  [SMALL_STATE(44)] = 778,
  [SMALL_STATE(45)] = 783,
  [SMALL_STATE(46)] = 788,
  [SMALL_STATE(47)] = 793,
  [SMALL_STATE(48)] = 798,
  [SMALL_STATE(49)] = 805,
  [SMALL_STATE(50)] = 810,
  [SMALL_STATE(51)] = 814,
  [SMALL_STATE(52)] = 818,
  [SMALL_STATE(53)] = 822,
  [SMALL_STATE(54)] = 826,
  [SMALL_STATE(55)] = 830,
  [SMALL_STATE(56)] = 834,
  [SMALL_STATE(57)] = 838,
  [SMALL_STATE(58)] = 842,
  [SMALL_STATE(59)] = 846,
  [SMALL_STATE(60)] = 850,
  [SMALL_STATE(61)] = 854,
  [SMALL_STATE(62)] = 858,
  [SMALL_STATE(63)] = 862,
  [SMALL_STATE(64)] = 866,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_function_call, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in_function_call, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_function_call, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in_function_call, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iterable_assignment, 5, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterable_assignment, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_function, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_keyword, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
