#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child an other node
 *
 * @parent: pointer to the parent.
 * @value: value
 *
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *new = binary_tree_node(parent, value);

	if (new == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
