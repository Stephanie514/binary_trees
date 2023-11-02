#include "binary_trees.h"

/**
 * binary_tree_leaves - fx counts the no. of leaves in a bin' tree
 * @tree: points to the root node of the tree in question
 *
 * Return: no. of leaves OR 0 if tree == NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftleaves, rightleaves;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	leftleaves = binary_tree_leaves(tree->left);
	rightleaves = binary_tree_leaves(tree->right);

	return (leftleaves + rightleaves);
}
