#include "binary_trees.h"
/**
 * binary_tree_is_toot - Checks if a node is root
 * @node: given node
 * Return: 1 for Success 0 for failure
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
