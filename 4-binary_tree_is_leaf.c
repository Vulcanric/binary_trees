#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node in the Binary Tree is a leaf node
 * @node: Pointer to the node to check
 * Return: 1 if @node is a leaf node, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	/* If both child nodes doesn't exist */
	/* then it is a leaf node */
	if (!node->left && !node->right)
		return (1);

	return (0);
}
