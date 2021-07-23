#include "binary_trees.h"
/**
 * binary_tree_inorder - route in order
 * @tree: pointer to a parent node
 * @func: pointer pointer to the desired function
 * Return - none
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) == NULL || (func) == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
