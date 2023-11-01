#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node as the
 * left-child of another node.
 * @parent: A pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on
 * failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;
	if (new_node->left)
	{
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
