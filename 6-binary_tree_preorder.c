#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a Binary Tree using preorder technique
 *                        and performs an action on nodes using a function
 *                        while traversing the Tree.
 * @tree: Pointer to the root-node of the Tree
 * @func: Pointer to the function used to perform an action on nodes
 *        while traversing, probably a print function;
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* Perform action on each node data: maybe print it out */
	func(tree->n);

	/* Recursively visit each nodes of the tree from left to right */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
