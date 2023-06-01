#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function
 * that inserts a node to the left of a
 * parent node
 *
 * @parent: a parent node
 * @value: a value of a node
 * Return: a pointer to the new node
 * if success or NULL if fail
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
	{
		parent->left->parent = newNode;
	}

	parent->left = newNode;
	return (newNode);
}
