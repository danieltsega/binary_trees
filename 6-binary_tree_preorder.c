#include "binary_trees.h"

/**
 * binary_tree_preorder - a function
 * that traverse in pre-order way
 *
 * @tree: a pointer to the root
 * @func: a pointer to call a function
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
