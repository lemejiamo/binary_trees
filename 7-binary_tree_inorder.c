#include "binary_trees.h"
/**
 *  binary_tree_delete - deletes an entire binary tree
 *  @tree:  pointer to a parent node
 *  Return - none
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func != NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}