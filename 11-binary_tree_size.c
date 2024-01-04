#include "binary_trees.h"
/**
 * binary_tree_size - Function to calculate number of nodes in a tree
 *
 * @tree: given tree
 * Return: number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
