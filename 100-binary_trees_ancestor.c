#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: on success the lowest common ancestor, otherwise null
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, \
		const binary_tree_t *second)
{
	binary_tree_t *a1, *a2;

	for (a1 = (binary_tree_t *)first; a1 != NULL; a1 = a1->parent)
	{
		for (a2 = (binary_tree_t *)second; a2 != NULL; a2 = a2->parent)
		{
			if (a1->n == a2->n)
			{
				/* Change const qualifier and return */
				return (a1);
			}
		}
	}

	return (NULL);
}
