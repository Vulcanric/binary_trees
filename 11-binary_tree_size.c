#include "binary_trees.h"

/**
 * tree_size - Measures the size of a Binary tree recursively.
 * @tree: Pointer to the root-node of the tree.
 * @init_size: default/initial size of tree.
 * Return: The size of the tree.
 */
size_t tree_size(const binary_tree_t *tree, size_t init_size)
{
	size_t size = init_size;

	if (!tree)
	{
		return (init_size);
	}

	size++;
	size = tree_size(tree->left, size);
	size = tree_size(tree->right, size);

	return (size);
}

/**
 * binary_tree_size - Measures the size of a binary tree
 *                    with the help of the helper function
 *                    `tree_size()` above.
 * @tree: Pointer to the root-node of the tree
 * Return: The size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree_size(tree, 0));
}
