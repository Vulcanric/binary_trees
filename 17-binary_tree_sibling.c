#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node whose sibling is to be found
 * Return: the sibling node on success, otherwise null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left && node->parent->left->n != node->n)
	{
		return (node->parent->left);
	}
	if (node->parent->right && node->parent->right->n != node->n)
	{
		return (node->parent->right);
	}

	return (NULL);
}
