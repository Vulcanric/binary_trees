#include "binary_trees.h"

/**
 * _at_least_one_child_ - Checks if a node has at least one child
 * @node: pointer to the node to examine
 *
 * Return: 1 if @node has at least one child, otherwise 0
 */
int _at_least_one_child_(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* If node has one child (left Or right) */
	if ((!node->left && node->right) || (node->left && !node->right))
	{
		return (1);
	}

	/* ELSE IF node has both children nodes */
	else if (node->right && node->left)
	{
		return (1);
	}

	/* Otherwise... */
	else
		return (0);
}

/**
 * _count_non_leaf_ - Counts the number of 
 *                    non-leaf(at least one child) node
 *                    in a Binary Tree
 * @tree: Binary tree to check for these nodes
 * @node_count: Initial count of nodes
 * Return: The no. of non-leaves on success, else 0
 */
size_t _count_non_leaf_(const binary_tree_t *tree, size_t node_count)
{
	if (!tree)
		return (node_count);

	if (_at_least_one_child_(tree) == 1)
	{
		node_count++;
	}
	node_count = _count_non_leaf_(tree->left, node_count);
	node_count = _count_non_leaf_(tree->right, node_count);

	return (node_count);
}

/**
 * binary_tree_nodes - Counts the nodes in the Binary Tree with at least
 *                     one child with the help of the helper-function:
 *                     "_count_non_leaf_()" above
 * @tree: Tree to check for these nodes
 * Return: The no. of non-leaves on success, else 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (_count_non_leaf_(tree, 0));
}
