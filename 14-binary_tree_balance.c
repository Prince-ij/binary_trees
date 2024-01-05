#include "binary_trees.h"
/**
 * binary_tree_balance - Calcs diff btw height of left & right nodes
 *
 * @tree: given tree
 * Return: diff
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t l_h = binary_tree_height(tree->left);
	size_t r_h = binary_tree_height(tree->right);

	return (l_h - r_h);
}
