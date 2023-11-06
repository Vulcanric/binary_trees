#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: Pointer to the root-node of the tree
 * Return: height of the tree (On Success), otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
	{
		return (-1);
	}

	left_h = 1 + binary_tree_height(tree->left);
	right_h = 1 + binary_tree_height(tree->right);

	return (left_h > right_h ? left_h : right_h);
}
