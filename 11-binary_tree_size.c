#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: void
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t binary_size = 1;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		if (tree->left)
			binary_size += binary_tree_size(tree->left);

		if (tree->right)
			binary_size += binary_tree_size(tree->right);
	}
	return (binary_size);
}
