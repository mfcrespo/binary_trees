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

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: void
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_balance - Function that measures
 * the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance.
 * Return: void
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to measure the balance.
 * Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree->left) == 0
			&& binary_tree_balance(tree->right) == 0)
	{
		if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
			return (1);

	}
	return (0);
}
