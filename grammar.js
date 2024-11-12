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
    ),

    _expression: $ => choice(
      $.identifier,
      $.string,
      $.number,
      $.regex,
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

    comment: $ => /\/\/.*$/
  }
});
