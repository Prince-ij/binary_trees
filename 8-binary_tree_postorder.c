#include "binary_trees.h"
/**
 * binary_tree_postorder - Function that traverses in LRN form
 * @tree: tree to be traversed
 * @func: what to do at each traversal
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))

{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
