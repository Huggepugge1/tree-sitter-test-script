/**
 * @file TestScript grammar for tree-sitter
 * @author Hugo Lindström <Huggepugge1@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "test_script",

  rules: {
    source_file: $ => repeat($.test),

    test: $ => seq(
      $.test_identifier,
      $.open_paren,
      $.string,
      $.close_paren,
      $._statement
    ),

    _statement: $ => choice(
      seq(
        $._expression,
        $.semicolon,
      ),
      $.block,
      $.comment,
      $.for_loop,
    ),

    _expression: $ => choice(
      $.declaration,
      $.assignment,
      $.identifier,
      $.string,
      $.number,
      $.regex,
      $.binary_expression,
      $.function_call,
      $.built_in_function_call,
      $.type_cast,
    ),

    function_call: $ => seq(
      $.function,
      $.open_paren,
      optional($.argument_list),
      $.close_paren,
    ),

    built_in_function_call: $ => seq(
      $.built_in_function,
      $.open_paren,
      optional($.argument_list),
      $.close_paren,
    ),

    argument_list: $ => seq(
      $._expression,
      repeat(seq(',', $._expression)),
    ),

    built_in_function: $ => choice(
      'print',
      'println',
      'input',
      'output',
    ),

    binary_expression: $ => choice(
      prec.left(2, seq($._expression, $.multiplication, $._expression)),
      prec.left(2, seq($._expression, $.division, $._expression)),
      prec.left(1, seq($._expression, $.addition, $._expression)),
      prec.left(1, seq($._expression, $.subtraction, $._expression)),
    ),

    type_cast: $ => seq(
      $._expression,
      $.type_cast_operator,
      $.type,
    ),

    declaration: $ => seq(
      $.assignment_keyword,
      $.identifier,
      $.colon,
      $.type,
      $.assignment_operator,
      $._expression,
    ),
    
    assignment_keyword: $ => choice('let', 'const'),

    type: $ => choice(
      'string',
      'int',
      'regex',
    ),

    assignment: $ => seq(
      $.identifier,
      $.assignment_operator,
      $._expression,
    ),

    for_loop: $ => seq(
      $.for_keyword,
      $.iterable_assignment,
      $._statement,
    ),

    iterable_assignment: $ => seq(
      $.identifier,
      $.colon,
      $.type,
      $.in_operator,
      $._expression,
    ),

    for_keyword: $ => 'for',
    in_operator: $ => 'in',

    block: $ => seq(
      $.open_brace,
      repeat($._statement),
      $.close_brace,
    ),

    identifier: $ => /[a-zA-Z_][\w\d_]*/,
    test_identifier: $ => /[a-zA-Z_][\w\d_]*/,
    function: $ => /[a-zA-Z_][\w\d_]*/,

    string: $ => /"([^"\\]|\\.)*"/,
    number: $ => /\d+/,
    regex: $ => /`[^`]*`/,

    comment: $ => /\/\/.*/,

    // Operators, semicolon, blocks, etc.
    addition: $ => '+',
    subtraction: $ => '-',
    multiplication: $ => '*',
    division: $ => '/',
    colon: $ => ':',
    assignment_operator: $ => '=',

    type_cast_operator: $ => 'as',

    semicolon: $ => ';',

    open_paren: $ => '(',
    close_paren: $ => ')',
    open_brace: $ => '{',
    close_brace: $ => '}',
  }
});
