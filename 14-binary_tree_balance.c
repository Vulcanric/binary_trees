#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree or subtree
 * @tree: Pointer to the root-node of the tree
 * Return: On success - height of the tree, on failure - 0
 */
size_t tree_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (-1);

	left_h = 1 + tree_height(tree->left);
	right_h = 1 + tree_height(tree->right);

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - Measures the balance factor of a tree
 * @tree: Pointer to the root-node of the tree
 * Return: the balance factor, k on success and 0 on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;
	int diff = 0;

	if (!tree)
		return (0);

	/* Below I added + 1, to add the parent edge */
	left_height = tree_height(tree->left) + 1;
	right_height = tree_height(tree->right) + 1;

	diff = left_height - right_height;

	return (diff);
}
