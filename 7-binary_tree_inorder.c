#include "binary_trees.h"

/**
 * custom_inorder - Helper function for binary_tree_inorder.
 * @node: Current node in the traversal.
 * @func: Pointer to the function to call for each node.
 *
 * This function recursively traverses the binary tree using in-order
 * traversal and calls the given function for each node.
 */
void custom_inorder(const binary_tree_t *node, void (*func)(int))
{
	if (!node || !func)
		return;

	custom_inorder(node->left, func);
	func(node->n);
	custom_inorder(node->right, func);
}

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * This function goes through the binary tree using in-order traversal and
 * calls the given function for each node, passing the value in the node
 * as a parameter to the function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	custom_inorder(tree, func);
}
