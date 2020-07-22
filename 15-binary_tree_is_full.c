#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return:  is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_side;
	int right_side;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	left_side = binary_tree_is_full(tree->left);
	right_side = binary_tree_is_full(tree->right);

	if (left_side == 0 || right_side == 0)
		return (0);
	else
		return (1);
}
