#include "binary_trees.h"


/**
 * binary_tree_insert_right - this inserts a node as right child of another node
 * @parent: this points to the node to insert the right child in it
 * @value: this is the value of the new node
 *
 * Return: the pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!(parent))
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!(new_node))
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new;
	}

	parent->right = new_node
	return (new_node);
}
