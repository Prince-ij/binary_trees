#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that inserts a node
 * as the right child node of a given node
 * @parent: given node
 * @value: value of created child node
 * Return: created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = newNode;

	parent->right = newNode;

	return (newNode);
}
