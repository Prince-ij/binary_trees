#include "binary_trees.h"
/**
 * binary_tree_leaves - Function to count number of lea in a tree
 * @tree: tree given
 * Return: number if leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_leaf = binary_tree_leaves(tree->left);
	size_t right_leaf = binary_tree_leaves(tree->right);

	size_t leaves = left_leaf + right_leaf;

	return (!left_leaf && !right_leaf ? leaves + 1: leaves);
}
