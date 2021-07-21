#include "binary_trees.h"
/**
 *  binary_tree_delete - deletes an entire binary tree
 *  @tree:  pointer to a parent node
 *  Return - none
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

    if (node->parent == NULL)
        return (1);

    return (0);

}
