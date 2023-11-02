#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node of a Binary Tree is a root
 * @node: the node to examine
 * Return: 1 if @node is a root-node, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	return (!node->parent ? 1 : 0);
}
