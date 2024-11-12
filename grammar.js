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
      $.identifier,
      '(',
      $.string,
      ')',
      $._statement
    ),

    _statement: $ => choice(
      seq(
        $._expression,
        ';',
      ),
      $.block,
      $.comment,
    ),

    _expression: $ => choice(
      $.declaration,
      $.assignment,
      $.identifier,
      $.string,
      $.number,
      $.regex,
    ),

    declaration: $ => seq(
      $.assignment_keyword,
      $.identifier,
      $._colon,
      $.type,
      $._assignment_operator,
      $._expression,
    ),
    
    assignment_keyword: $ => choice('let', 'const'),

    _colon: $ => ':',
    _assignment_operator: $ => '=',

    _operator: $ => choice(
      '+',
      '-',
      '*',
      '/',
    ),

    type: $ => choice(
      'string',
      'int',
      'regex',
    ),

    assignment: $ => seq(
      $.identifier,
      $._assignment_operator,
      $._expression,
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}',
    ),

    identifier: $ => /[a-zA-Z_][\w\d_]*/,
    string: $ => /"([^"\\]|\\.)*"/,
    number: $ => /\d+/,
    regex: $ => /`[^`]*`/,

    comment: $ => /\/\/.*/,
  }
});
