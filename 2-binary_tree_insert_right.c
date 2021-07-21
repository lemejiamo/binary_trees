#include "binary_trees.h"
/**
 *  binary_tree_insert_right - a funtion to insert a
 *  node to right side of node from binary tree
 *  @parent:  pointer to a parent node
 *  @value: value of node
 *  Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* if parent is null */
	if (parent == NULL)
		return (NULL);

	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}