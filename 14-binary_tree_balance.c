#include "binary_trees.h"
/**
 * binary_tree_height - Function to calculate height of a tree
 * @tree: tree to be calculated
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);
	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left_h > right_h) ? (left_h) : (right_h));
}
/**
 * binary_tree_balance - Calcs diff btw height of left & right nodes
 *
 * @tree: given tree
 * Return: diff
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
