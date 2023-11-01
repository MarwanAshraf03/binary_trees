#include "binary_trees.h"


/**
 * binary_tree_node - creates node in a binary tree
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: returns a pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	return (node);
}
