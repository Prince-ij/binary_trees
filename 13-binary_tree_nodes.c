#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the node with atleast one child
 * in a tree
 * @tree: The given tree
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		size_t node1 = binary_tree_nodes(tree->left);
		size_t node2 = binary_tree_nodes(tree->right);

		size_t nodes = node1 + node2;

		return (1 + nodes);
	}

	return (0);
}
