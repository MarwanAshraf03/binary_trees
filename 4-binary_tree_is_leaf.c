#include "binary_trees.h"


/**
 * binary_tree_node - creates node in a binary tree
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: returns a pointer to the new node
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	/*
	if (!node->parent)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
	*/
	if (node->parent && !node->left && !node->right)
		return (1);
	else
		return (0);
}
