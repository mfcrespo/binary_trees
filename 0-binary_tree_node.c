#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_node - creates a binary tree node
* @parent: is a pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
