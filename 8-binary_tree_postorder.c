#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a Binary Tree using postorder technique
 *                         and performs an action on nodes using a function
 *                         while traversing the Tree.
 * @tree: Pointer to the root-node of the Tree
 * @func: Pointer to the function used to perform an action on nodes
 *        while traversing, probably a print function;
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
