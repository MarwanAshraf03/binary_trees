#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left child
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: a pointer to the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_node;

	if (!parent)
		return (NULL);
	l_node = malloc(sizeof(binary_tree_t));
	if (!l_node)
		return (NULL);
	l_node->parent = parent;
	l_node->n = value;
	l_node->right = NULL;
	if (parent->left)
		parent->left->parent = l_node;
	l_node->left = parent->left;
	parent->left = l_node;
	return (l_node);
}
