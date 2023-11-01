#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right child
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: a pointer to the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_node;

	if (!parent)
		return (NULL);
	r_node = malloc(sizeof(binary_tree_t));
	if (!r_node)
		return (NULL);
	r_node->parent = parent;
	r_node->n = value;
	r_node->left = NULL;
	if (parent->right)
		parent->right->parent = r_node;
	r_node->right = parent->right;
	parent->right = r_node;
	return (r_node);
}
