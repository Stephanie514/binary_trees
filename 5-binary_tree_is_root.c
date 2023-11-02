#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a given node is a root.
 * @n: A pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 *         0 if the node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *n)
{
	return ((!n || n->parent) ? 0 : 1);
}
