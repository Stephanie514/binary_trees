#include "binary_trees.h"

/**
 * binary_tree_node - Fx creates a binary tree node
 * @parent: points to the parent node of the created node
 * @value: value of the new node
 * Return: Pointer to the new_node
 * NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *neu_Node;

	neu_Node = malloc(sizeof(binary_tree_t));
	if (!neu_Node)
		return (NULL);

	neu_Node->n = value;
	neu_Node->parent = parent;
	neu_Node->left = NULL;
	neu_Node->right = NULL;

	return (neu_Node);
}
