#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return NULL;

    if (node->parent->left == node)
        return node->parent->right;
    else if (node->parent->right == node)
        return node->parent->left;
    else
        return NULL; // Node is not a direct child of its parent
}

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return NULL;

    return binary_tree_sibling(node->parent);
}
