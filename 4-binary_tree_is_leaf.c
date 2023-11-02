#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Fx checks if a node is a leaf
 * @node: node to check if childless
 *
 * Return: 1 if node is leaf, 0 if not
 * OR node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
