#include "binary_trees.h"

/**
 * binary_tree_nodes - function to calculate height of a tree
 * @tree: pointer to the root of the tree
 * Return: returns height of the tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count = extra_nodes(tree);
	return (count);
}

/**
 * extra_nodes - an extra function to help me use counter
 * @tree: the node to be used to calculate height
 * Return: returns the height of left or right node (the bigger one)
*/
size_t extra_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + extra_nodes(tree->left) + extra_nodes(tree->right));
	return (0 + extra_nodes(tree->left) + extra_nodes(tree->right));
}
