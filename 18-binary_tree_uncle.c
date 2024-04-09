#include "binary_trees.h"
/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: nods to check uncle
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}
	else
	{
		return (node->parent->parent->right);
	}
}
