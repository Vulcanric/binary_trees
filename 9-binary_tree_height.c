#include "binary_trees.h"

/**
 * count_node - Counts the number of nodes in a tree
 * @tree: Pointer to the root node of the tree
 * @node_count: default/initial count of nodes
 * Return: The number of nodes
 */
size_t count_node(const binary_tree_t *tree, size_t node_count)
{
	if (!tree)
	{
		return (node_count);
	}

	node_count++;
	node_count = count_node(tree->left, node_count);
	/*
	 * The reason why I received the return value into node_count
	 * is that node_count should be updated before being passed
	 * into the recursive call for tree->right
	 */
	count_node(tree->right, node_count);
}

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: Pointer to the root-node of the tree
 * Return: height of the tree (On Success), otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* Empty tree */
	size_t n; /* Count of nodes*/
	size_t h = 0; /* height a.k.a exponent */
	size_t base = 2;

	if (!tree)
	{
		return (h);
	}

	n = count_node(tree, 0);

	/* height, h = log2(n) */
	while (base <= n)
	{
		h++;
		base *= 2;
	}
	return (h);
}
