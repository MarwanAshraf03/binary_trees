#include "binary_trees.h"

/**
 * binary_tree_sibling - returns node's sibling
 * @node: node to be used
 * Return: pointer to @node's sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	return ((node->parent->right == node) ?
node->parent->left : node->parent->right);
}
