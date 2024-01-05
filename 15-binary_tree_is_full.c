#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks for 0 or 2 children
 * @tree: given tree
 * Return: 1 for success 0 for failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((!tree->left && !tree->right) || (tree->left && tree->right))
		return 
	else
		return (0);
}
