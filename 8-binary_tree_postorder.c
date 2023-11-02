#include "binary_trees.h"

/**
 * binary_tree_postorder - Fx traverses a bin' tree using postorder traversal
 * @tree: points to the root node of the tree to traverse
 * @func: points to fx to call the node
 *
 * Description: if tree or fun is NULL, do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
