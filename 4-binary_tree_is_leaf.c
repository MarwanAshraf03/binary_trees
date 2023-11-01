#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: pointer to the node to be examined
 * Return: returns 1 if node is leaf, 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent && !node->left && !node->right)
		return (1);
	else
		return (0);
}
