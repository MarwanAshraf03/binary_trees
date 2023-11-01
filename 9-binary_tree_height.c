#include "binary_trees.h"

/**
 * binary_tree_height - function to calculate height of a tree
 * @tree: pointer to the root of the tree
 * Return: returns height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count = extra_height(tree, count);
	return (count);
}

/**
 * extra_height - an extra function to help me use counter
 * @tree: the node to be used to calculate height
 * @count: the count (height) of @tree
 * Return: returns the height of left or right node (the bigger one)
*/
size_t extra_height(const binary_tree_t *tree, size_t count)
{
	size_t left_count = count, right_count = count;

	if (tree->left)
	{
		left_count++;
		left_count = extra_height(tree->left, left_count);
	}
	if (tree->right)
	{
		right_count++;
		right_count = extra_height(tree->right, right_count);
	}
	return ((right_count > left_count) ? right_count : left_count);
}
