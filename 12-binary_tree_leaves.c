#include "binary_trees.h"

/**
 * binary_tree_leaves - function to calculate height of a tree
 * @tree: pointer to the root of the tree
 * Return: returns height of the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count = extra_leaves(tree);
	return (count);
}

/**
 * extra_leaves - an extra function to help me use counter
 * @tree: the node to be used to calculate height
 * Return: returns the height of left or right node (the bigger one)
*/
size_t extra_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1 + extra_leaves(tree->left) + extra_leaves(tree->right));
	return (0 + extra_leaves(tree->left) + extra_leaves(tree->right));
}
