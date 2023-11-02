#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of the tree
 * (height of left_subtree - height of right subtree)
 * @tree: node to the root of the tree
 * Return: returns balance factor of the @tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;
	if (!tree)
		return (0);
	left = extra_height(tree->left, 0);
	right = extra_height(tree->right, 0);
	return (left - right);
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
