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
 * binary_tree_balance - fx measures the balance factor of a bin' tree
 * @tree: points to the root node of the tree in question
 *
 * Return: Balance factor OR 0 if tree == NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);

	lheight = tree->left ? (int)(binary_tree_height(tree->left)) : -1;
	rheight = tree->right ? (int)(binary_tree_height(tree->right)) : -1;

	return (lheight - rheight);
}
