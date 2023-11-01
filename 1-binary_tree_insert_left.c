#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left child
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: a pointer to the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_node = malloc(sizeof(binary_tree_t));

	if (!parent || !l_node || !value)
		return (NULL);
	l_node->parent = parent;
	l_node->n = value;
	l_node->right = NULL;
	if (parent->left)
	{
		l_node->left = parent->left;
		parent->left->parent = l_node;
		parent->left = l_node;
	}
	else
	{
		parent->left = l_node;
		l_node->left = NULL;
	}
	return (l_node);
}
