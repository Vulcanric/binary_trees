#include "binary_trees.h"

/**
 * _depth_ - Recursively measure the depth of a node in a tree
 * @tree: Pointer to node
 * @init_depth: Initial depth, defaults to 0
 * Return: the measured depth of node @tree
 */
size_t _depth_(const binary_tree_t *tree, size_t init_depth)
{
	if (!tree || !tree->parent)
	{
		return (init_depth);
	}

	init_depth++;
	init_depth = _depth_(tree->parent, init_depth);

	return (init_depth);
}

/**
 * binary_tree_depth - Measures the depth of a node in a Binary tree
 *                     using the helper function `_depth_()`
 * @tree: Pointer to the node where to measure
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (_depth_(tree, 0));
}
