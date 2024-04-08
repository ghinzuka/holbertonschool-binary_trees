#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree:  pointer to the node to measure the depth
 * Return:  depth of a node in a binary tree, 0 if failure or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent != NULL)
	{
		count += 1 + binary_tree_depth(tree->parent);
	}
return (count);
}
