#include "binary_trees.h"

/**
 * binary_tree_is_leaf - this checks if a node is a leaf
 * @node: the pointer to the node
 *
 * Return: return 1 if node is a leaf or (0) if otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
