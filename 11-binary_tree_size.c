#include "binary_trees.h"

/**
 * binary_tree_size - function to calculate height of a tree
 * @tree: pointer to the root of the tree
 * Return: returns height of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count = extra_size(tree);
	return (count);
}

/**
 * extra_size - an extra function to help me use counter
 * @tree: the node to be used to calculate height
 * Return: returns the height of left or right node (the bigger one)
*/
size_t extra_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + extra_size(tree->left) + extra_size(tree->right));
}
