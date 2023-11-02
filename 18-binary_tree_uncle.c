#include "binary_trees.h"

/**
 * binary_tree_uncle - fx finds the uncle of a node in a bin' tree
 * @node: points to node to find its uncle
 *
 * Return: pointer to Uncle node OR
 * NULL if node == NULL or if !uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grannie;

	if (node == NULL || node->parent == NULL
			|| node->parent->parent == NULL)
		return (NULL);

	grannie = node->parent->parent;

	if (grannie->left == node->parent)
		return (grannie->right);
	else
		return (grannie->left);
}
