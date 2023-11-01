#include "binary_trees.h"

/**
 * binary_tree_insert_right - Fx inserts a right-child node
 * @parent: points to the parent of the neu_Node
 * @value: the value of the neu_Node
 * Return: Pointer to the created node
 * OR NULL if fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *neu_Node;

	if (!parent)
		return (NULL);

	neu_Node = malloc(sizeof(binary_tree_t));
	if (!neu_Node)
		return (NULL);

	neu_Node->n = value;
	neu_Node->parent = parent;
	neu_Node->left = NULL;
	neu_Node->right = parent->right;
	parent->right = neu_Node;

	if (neu_Node->right)
		neu_Node->right->parent = neu_Node;
	return (neu_Node);
}
