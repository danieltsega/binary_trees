#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that
 * checks if a node is a root
 *
 * @node: node of a binary tree
 * Return: 1 if node is root 0 otherwise
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
