
#include <stdlib.h>

/**
 * binary_tree_insert_left - Iserts a node as the left-child of another node
 * @parent: is a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = parent->left;
	if (newnode->left != NULL)
		newnode->left->parent = newnode;
	parent->left = newnode;
	return (newnode);
}