#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root of tree
 * Return: If tree is NULL, return 1 if perfect
 *
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_full - A function that checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree.
 * Return: 1 if tree is full or 0 in otherwise.
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

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:tree is a pointer to the root node of the tree to measure the height
 * Return: height, 0 if NULL
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t count2 = 0;

	if (tree == NULL)
	{
		return (0);
	}

	count += 1 + binary_tree_height(tree->left);
	count2 += 1 + binary_tree_height(tree->right);

	if (count > count2)
	{
		return (count);
	}
	else
	{
		return (count2);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: tree is NULL, return 0 or an int of size
*/
int binary_tree_balance(const binary_tree_t *tree)
{

size_t countleft = 0;
size_t countright = 0;

if (tree == NULL)
{
	return (0);
}

countleft = binary_tree_height(tree->left);
countright = binary_tree_height(tree->right);

return (countleft - countright);

}
