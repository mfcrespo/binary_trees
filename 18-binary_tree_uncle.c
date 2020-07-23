#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 * Return: void
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);

		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: node is NULL, return NULL, node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);
	if (uncle == NULL)
		return (NULL);
	return (uncle);
}
