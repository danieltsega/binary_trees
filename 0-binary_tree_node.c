#include "binary_trees.h"

/**
 * binary_tree_node - A function to create
 * a binary tree node
 * @parent: parent node
 * @value: value of the node
 * Return: a new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
