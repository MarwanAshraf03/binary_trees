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

	if (!l_node)
		return (NULL);
    if (!parent)
    {
        l_node = binary_tree_node(parent, value);
        return (l_node);
    }
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
	l_node->parent = parent;
	l_node->n = value;
	l_node->right = NULL;
	return (l_node);
}
