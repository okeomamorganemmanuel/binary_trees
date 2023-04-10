#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses through a binary tree using pre-order traversal.
 * @tree: this points to the root node of the tree to be traversed.
 * @func: this points to a function to be called for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left func);
		binary_tree_preorder(tree->right, func)
	}
}
