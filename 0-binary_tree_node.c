#include "binary_trees.h"

/**
 * binary_tree_node - Creates a Binary Tree Node
 * @parent: Pointer to the parent node of the new node to be created
 * @value: Integer value of the new node
 * Return: Pointer to the new node created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return NULL;
	}

	/* childless by default */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
