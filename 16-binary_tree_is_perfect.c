#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_is_perfect - fx checks for a perfect bin tree
 * @tree: point to the root node of the tree in question
 *
 * Return: 1 if true, 0 if false
 * OR 0 tree == NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight == rheight)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}

	return (0);
}
