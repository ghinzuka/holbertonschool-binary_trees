#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the first node
 * Return: size_t size of tree or 0 if failure or NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t count2 = 0;
	size_t total = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		count += binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		count2 += binary_tree_size(tree->right);
	}

	total = count + count2;

	return (total + 1);
}
