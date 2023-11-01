#include "binary_trees.h"

/**
 * binary_tree_depth - calculates depth of a node (distance from node to root)
 * @tree: pointer to the node
 * Return: returns depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count = extra_depth(tree, count);
	return (count);
}

/**
 * extra_depth - an extra function to help me use counter
 * @tree: the node to be used to calculate depth
 * @count: the count (depth) of @tree
 * Return: returns the depth of left or right node (the bigger one)
*/
size_t extra_depth(const binary_tree_t *tree, size_t count)
{
	if (tree->parent)
		count = extra_depth(tree->parent, ++count);
	return (count);
}
