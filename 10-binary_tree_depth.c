#include "binary_trees.h"

/**
 * binary_tree_depth - fx measures the depth of a node in a bin' tree
 * @tree: points to the node to measure depth
 *
 * Return: tree depth OR 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int tree_depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	tree_depth = ((binary_tree_depth(tree->parent)) + 1);
	return (tree_depth);
}
