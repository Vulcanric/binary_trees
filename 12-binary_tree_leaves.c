#include "binary_trees.h"

/**
 * _is_leaf_ - Checks for a leaf node
 * @node: node to examine
 * Return: 1 if it is leaf, otherwise 0
 */
int _is_leaf_(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((!node->left && !node->right) ? 1 : 0);
}

/**
 * _count_leaf_node - Counts the number of leaf nodes in a tree
 * @tree: Pointer to the root-node of the tree
 * @node_count: Initial count of nodes
 * Return: count of leaves
 */
size_t _count_leaf_node_(const binary_tree_t *tree, size_t node_count)
{
	if (!tree)
	{
		return (node_count);
	}

	if (_is_leaf_(tree))
	{
		node_count++;
	}
	node_count = _count_leaf_node_(tree->left, node_count);
	node_count = _count_leaf_node_(tree->right, node_count);

	return (node_count);
}

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a tree
 *                      With the help of helper-function
 *                      "_count_leaf_node_()" defined above
 * @tree: Pointer to the root-node of the tree
 * Return: the number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (_count_leaf_node_(tree, 0));
}
