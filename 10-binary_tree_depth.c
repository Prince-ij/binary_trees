#include "binary_trees.h"
/**
 * binary_tree_depth - Function to calculate depth of a node
 * @tree: given tree
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL ||  tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
