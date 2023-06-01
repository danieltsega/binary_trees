#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function
 * inserts a node as the right-child of another node
 *
 * @parent: parent of a node
 * @value: value of a node
 * Return: pointer to the new node or NULL on failure
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

	return (new);
}
