#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @root: Pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *root)
{
	if (root == NULL)
	{
		return;
	}
	binary_tree_delete(root->right);
	binary_tree_delete(root->left);
	free(root);
}
