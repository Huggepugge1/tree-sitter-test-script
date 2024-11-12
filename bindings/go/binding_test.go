package tree_sitter_test_script_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_test_script "github.com/huggepugge1/test-script-parser.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_test_script.Language())
	if language == nil {
		t.Errorf("Error loading TestScript grammar")
	}
}
