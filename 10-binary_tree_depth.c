#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 * @tree: pointer to a function to measure the depth
 * Return: depth of a binary tree or 0 if is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t lepth;
	size_t repth;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left->parent != NULL)
	{
		lepth = binary_tree_depth(tree->left->parent);
		lepth++;
	}

	if (tree->right->parent != NULL)
	{
		repth = binary_tree_depth(tree->right->parent);
		repth++;
	}
	if (lepth > repth)
	{
		return (lepth);
	}
	return (repth);
}
