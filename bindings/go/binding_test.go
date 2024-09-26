package tree_sitter_mckeeman_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_mckeeman "github.com/tree-sitter/tree-sitter-mckeeman/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mckeeman.Language())
	if language == nil {
		t.Errorf("Error loading Mckeeman grammar")
	}
}
