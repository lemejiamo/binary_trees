#include "binary_trees.h"



size_t tree_size(const binary_tree_t *tree, size_t *level, size_t *deep)
{
    if (tree->right != NULL)
    {
        if (*level >= *deep)
            *deep += 1;
         *level += 1;
        tree_size(tree->right, level, deep);
    }

    if (tree->left != NULL)
    {
        if (*level >= *deep)
            *deep += 1;
         *level += 1;
        tree_size(tree->left, level, deep);
    }

    if (tree->left == NULL && tree->right == NULL)
        return ((*level - 1));
    
    return (0);

}

/**
 *  binary_tree_height - deletes an entire binary tree
 *  @tree:  pointer to a parent node
 *  Return - none
 */
 size_t binary_tree_size(const binary_tree_t *tree)
 {
    size_t *deep = NULL, *level = NULL, deep_t = 1, level_t = 1;
    deep = &deep_t;
    level = &level_t;

    tree_size(tree, level, deep);

    return (deep_t);
 }