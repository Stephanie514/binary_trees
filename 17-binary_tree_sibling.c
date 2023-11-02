#include "binary_trees.h"

/**
 * binary_tree_sibling - Retrieves the sibling of a node in a binary tree.
 * @node: A pointer to the node for which to find the sibling.
 *
 * Return: A pointer to the sibling node if found, NULL otherwise.
 *         NULL if node is NULL or if it has no parent.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	binary_tree_t *parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	{
		return (parent->left);
	}
}
