#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire Binary Tree
 * @tree: Pointer to the root-node of the Binary Tree
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (!tree)
	{
		return;
	}

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
