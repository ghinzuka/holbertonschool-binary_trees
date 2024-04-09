#include "binary_trees.h"
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
