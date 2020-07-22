#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth
 * of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: void
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree->parent != NULL)
	{
		if (tree->parent)
			depth = 1 + binary_tree_depth(tree->parent);
			return (depth);
	}
	return (0);
}
