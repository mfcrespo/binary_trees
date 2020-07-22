#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at
 * east 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: void
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left)
			nodes += binary_tree_nodes(tree->left);

		if (tree->right)
			nodes += binary_tree_nodes(tree->right);
		nodes += 1;
	}
	return (nodes);
}
