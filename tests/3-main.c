#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *root;
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	print_tree(root);
	binary_tree_delete(root);
	print_tree(root);

	return (0);
}
