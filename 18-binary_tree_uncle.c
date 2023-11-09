#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle node of a node in the tree
 * @node: pointer to the node whose uncle node is to be found
 * Return: uncle node on success, on failure null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/*
	 * An uncle is your grand-father's son.
	 * If node is null, return null
	 *
	 * If node's grand-father's left|right child is not null and
	 *    it's value is not node's parent value,
	 *    then it is the node's uncle.
	 */
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->parent && node->parent->parent->left)
	{
		if (node->parent->parent->left->n != node->parent->n)
			return (node->parent->parent->left);
	}
	if (node->parent->parent && node->parent->parent->right)
	{
		if (node->parent->parent->right->n != node->parent->n)
			return (node->parent->parent->right);
	}

	return (NULL);
}
