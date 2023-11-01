#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_right - Inserts a new node
 *                            as the right-child of another node
 * @parent: Pointer to the node where to insert new node as right-child
 * @value: Integer value to be stored into the new node
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	int former_child;

	if (!parent)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	/*
	 * If the parent right-child already exist,
	 * let it be the right-child of the new node
	 * and let the new node replace it in its position
	 */
	if (parent->right)
	{
		former_child = parent->right->n;
		new_node->right = binary_tree_node(new_node, former_child);
		free(parent->right);
	}
	parent->right = new_node;

	return (new_node);
}
