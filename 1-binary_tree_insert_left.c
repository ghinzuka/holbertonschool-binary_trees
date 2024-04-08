#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value:  the value to put in the new node
 * Return: pointer to the new created node, or NULL if failed
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = binary_tree_node(parent, value);

	if (parent->left == NULL)
		parent->left = newnode;
	else
	{
		newnode->left = parent->left;
		parent->left = newnode;
		newnode->left->parent = newnode;
	}

	return (newnode);
}
