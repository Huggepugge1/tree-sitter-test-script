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
      $.if_statement,
    ),

    _expression: $ => prec.left(7, choice(
      $.declaration,
      $.assignment,
      $.identifier,
      $.string,
      $.number,
      $.regex,
      $.bool,
      $.unary_expression,
      $.binary_expression,
      $.function_call,
      $.built_in_function_call,

      $.block,
      $.if_statement,
    )),

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

    unary_expression: $ => choice(
      prec.left(6, seq($.not_operator, $._expression)),
      prec.left(6, seq($.subtraction, $._expression)),
    ),

    binary_expression: $ => choice(
      prec.left(5, seq($._expression, $.type_cast_operator, $.type)),
      prec.left(4, seq($._expression, $.multiplication, $._expression)),
      prec.left(4, seq($._expression, $.division, $._expression)),
      prec.left(3, seq($._expression, $.addition, $._expression)),
      prec.left(3, seq($._expression, $.subtraction, $._expression)),

      prec.left(2, seq($._expression, $.equality_operator, $._expression)),
      prec.left(2, seq($._expression, $.not_equal_operator, $._expression)),
      prec.left(2, seq($._expression, $.greater_than_operator, $._expression)),
      prec.left(2, seq($._expression, $.less_than_operator, $._expression)),
      prec.left(2, seq($._expression, $.greater_than_or_equal_operator, $._expression)),
      prec.left(2, seq($._expression, $.less_than_or_equal_operator, $._expression)),

      prec.left(1, seq($._expression, $.and_operator, $._expression)),
      prec.left(1, seq($._expression, $.or_operator, $._expression)),
      
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
      'bool',
    ),

    assignment: $ => seq(
      $.identifier,
      $.assignment_operator,
      $._expression,
    ),

    if_statement: $ => prec.left(8, seq(
      $.if_keyword,
      $._expression,
      $._expression,
      optional($.else_statement),
    )),

    else_statement: $ => prec.left(8, choice(
      seq(
        $.else_keyword,
        $.if_statement,
        optional($.else_statement),
      ),
      seq(
        $.else_keyword,
        $._expression,
      ),
    )),

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

    if_keyword: $ => 'if',
    else_keyword: $ => 'else',
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
    bool: $ => choice('true', 'false'),

    comment: $ => /\/\/.*/,

    // Operators, semicolon, blocks, etc.
    addition: $ => '+',
    subtraction: $ => '-',
    multiplication: $ => '*',
    division: $ => '/',
    colon: $ => ':',
    assignment_operator: $ => '=',

    equality_operator: $ => '==',
    not_equal_operator: $ => '!=',
    greater_than_operator: $ => '>',
    less_than_operator: $ => '<',
    greater_than_or_equal_operator: $ => '>=',
    less_than_or_equal_operator: $ => '<=',
    and_operator: $ => '&&',
    or_operator: $ => '||',

    not_operator: $ => '!',

    type_cast_operator: $ => 'as',

    semicolon: $ => ';',

    open_paren: $ => '(',
    close_paren: $ => ')',
    open_brace: $ => '{',
    close_brace: $ => '}',
  }
});
