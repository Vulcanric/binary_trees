#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - Inserts a new node
 *                           as the left-child of another node
 * @parent: Pointer to the node where to insert new node as left-child
 * @value: Integer value to be inputed into the new node
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	int former_child;

	if (!parent)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	/*
	 * If the parent left-child already exist,
	 * let it be the left-child of the new node
	 * and let the new node replace it in its position
	 */
	if (parent->left)
	{
		former_child = parent->left->n;
		new_node->left = binary_tree_node(new_node, former_child);
		free(parent->left);
	}
	parent->left = new_node;

	return (new_node);
}
