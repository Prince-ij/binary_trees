#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds sibling of a node
 *
 * @node: node to find it's sibling
 * Return: pointer to sinling or Null im case of failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || parent == NULL)
		return (NULL);	

	if (parent->left == node && parent->right != NULL)
		return (parent->right);
	else if (parent->right == node && parent->left != NULL)
		return (parent->left);
	else
		return (NULL);
}
