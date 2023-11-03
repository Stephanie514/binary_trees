#include "binary_trees.h"

/**
 * binary_tree_levelorder - fx traverses a bin' tree using levelorder
 * @tree: points to the root node of the tree to traverse
 * @func: points to the function to call nodes
 *
 * Description: if tree/func == NULL. do nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **tree_queue, *now;
	int first = 0, last = 0;

	if (tree == NULL || func == NULL)
		return;

	tree_queue = malloc(sizeof(binary_tree_t *) * 1024);

	if (tree_queue == NULL)
		return;

	tree_queue[first++] = (binary_tree_t *)tree;

	while (first < last)
	{
		now = tree_queue[first++];
		func(now->n);

		if (now->left)
			tree_queue[last++] = now->left;

		if (now->right)
			tree_queue[last++] = now->right;
	}
	free(tree_queue);
}
