#include "binary_trees.h"
/**
 *  binary_tree_height - deletes an entire binary tree
 *  @tree:  pointer to a parent node
 *  Return - none
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height = 0;

    if (tree == NULL)
        return (0);

    if (tree->left)
        height += 1;

    if (tree->right)
        height += 1;
    
    return (height);
}