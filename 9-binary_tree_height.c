#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to a function to measure the height
 * Return: height of a binary tree or 0 if is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;
	
	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left += binary_tree_height(tree->left);
		left++;
	}

	if (tree->right != NULL)
	{
		right += binary_tree_height(tree->right);
		right++;
	}
	if (left > right)
		return (left);
	return (right);
}