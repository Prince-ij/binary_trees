#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Check if binary_tree is perfect
 * left height and right height must be the same
 * @tree: tree to be checked
 * Return: 1 sucess 0 failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int l_h = 0, r_h = 0;
	const binary_tree_t *left, *right;

	left = tree->left;
	right = tree->right;

	while (left != NULL)
	{
		l_h++;
		left = left->left;
	}

	while (right != NULL)
	{
		r_h++;
		right = right->right;
	}

	if (l_h == r_h)
		return (1);
	return (0);
}
