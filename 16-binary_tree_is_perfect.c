#include "binary_trees.h"

/**
 * _height_ - Measures the height of a binary Tree
 * @tree: Pointer to the root-node of the tree
 * Return: height of the tree
 */
size_t _height_(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (!tree)
	{
		return (-1);
	}

	height_l = _height_(tree->left) + 1;
	height_r = _height_(tree->right) + 1;

	return (height_l > height_r ? height_l : height_r);
}

/**
 * _nodes_ - Counts the number of nodes in a Binary Tree
 * @tree: Pointer to the root-node of the tree
 * @node_count: Initial count of nodes
 * Return: number of nodes
 */
size_t _nodes_(const binary_tree_t *tree, size_t node_count)
{
	if (!tree)
		return (node_count);

	node_count++;
	node_count = _nodes_(tree->left, node_count);
	node_count = _nodes_(tree->right, node_count);

	return (node_count);
}

/**
 * _exp_ - Calculate the exponent result of a number,n raised to the power, x
 * @n: the base
 * @x: the power to raise @base to
 * Return: y, the exponent result
 */
int _exp_(int n, int x)
{
	int i, y = n;

	if (x == 0)
		return (1);

	for (i = 0; i < x - 1; i++)
	{
		y *= n;
	}

	return (y);
}

/**
 * binary_tree_is_perfect - Checks if a tree is perfect
 * @tree: Pointer to the root-node of the tree to check
 * Return: 1 if tree is perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t perfect_n = 1, n;
	size_t h; /* height */

	/*
	 * A perfect tree always have number of nodes
	 * as "n = 2^(h + 1) - 1[minus 1 from root level]".
	 * Let's see if the tree's n is
	 * equivalent to "2^(h + 1) - 1"(The perfect n)
	 */
	if (!tree)
		return (0);

	n = _nodes_(tree, 0); /* Count the nodes in the tree */
	h = _height_(tree); /* Get the height of the tree */

	/* "perfect n = 2^(h + 1) - 1[minus 1 from root level]" */
	perfect_n = _exp_(2, h + 1);
	perfect_n -= 1; /*"[minus 1 from root level]"*/

	if (n == perfect_n)
		return (1); /* True */

	return (0); /* False */
}
