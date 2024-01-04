#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that print node first, left, then
 * right
 * @tree: tree to be traversed in NLR way
 * @func: function pointer that dictates what should be done
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		;
	if (func == NULL)
		;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
