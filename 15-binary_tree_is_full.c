#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to first node of tree
 * Return: If tree is NULL, your function must return 0 or 1 if full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
	}
	else
	{
	return (0);
	}
}
