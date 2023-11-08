#include "binary_trees.h"

/**
 * _memset_ - implements the standard memset function.
 * description: fills the first n elements of an array with
 * a constant byte
 * @s: pointer to the array to fill
 * @c: the constant byte
 * @n: the amount of elements to fill
 * Return: pointer to the array
 */
int *_memset_(int *s, int c, size_t n)
{
	size_t i;

	if (!s)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}

/**
 * _get_state_ - Stores the state(full(1)|unfull(0)) of a tree
 * and its subtrees into an array
 * @tree: Pointer to the root-node of the tree
 * @offset: offset to start from
 * @array: Pointer to the array to store the states of tree
 * Return: offset
 */
int _get_state_(const binary_tree_t *tree, int offset, int *array)
{
	if (!tree)
	{
		offset--;
		return (offset);
	}

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
	{
		array[offset] = 0;
	}
	else
	{
		array[offset] = 1;
	}

	offset = _get_state_(tree->left, offset + 1, array);
	offset = _get_state_(tree->right, offset + 1, array);

	return (offset);
}

/**
 * binary_tree_is_full - Checks if a Binary Tree is full
 * @tree: pointer to the root-node of the tree to check
 * Return: 1 if tree is balanced, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int *state;
	int i;

	if (!tree)
	{
		return (0);
	}

	state = malloc(sizeof(int) * 25);
	if (!state)
	{
		return (0);
	}
	_memset_(state, -1, 25);
	_get_state_(tree, 0, state);

	for (i = 0; i < 25; i++)
	{
		if (state[i] == 0)
		{
			free(state);
			return (0);
		}
	}

	free(state);
	return (1);
}
