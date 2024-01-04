#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function to insert node as left child to a parent
 * make left child of parent to be new node child
 * @parent: parent node
 * @value: value to be inserted
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = parent->left;
	newNode->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = newNode;

	parent->left = newNode;

	return (newNode);
}
