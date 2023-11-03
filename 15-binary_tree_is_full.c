#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full or not
 * @tree: root node of checked tree
 * Return: 1 if full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int n_leaves, height, i = 0, new = 1;

	if (!tree)
		return (0);
	n_leaves = extra_leaves(tree);
	height = extra_height(tree, 0);
	for (i = 0; i < height; i++)
		new *= 2;
	if (new == n_leaves)
		return (1);
	return (0);
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
