#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of the tree
 * (height of left_subtree - height of right subtree)
 * @tree: node to the root of the tree
 * Return: returns balance factor of the @tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);
	if (tree->left)
		left = extra_balance(tree->left, 1);
	else
		left = 0;
	if (tree->right)
		right = extra_balance(tree->right, 1);
	else
		right = 0;
	return (left - right);
}

/**
 * extra_balance - helper function to calculate subtree height
 * @tree: root node
 * @count: initial count
 * Return: height of the tree
*/
int extra_balance(const binary_tree_t *tree, int count)
{
	int left = count, right = count;

	if (tree->left)
		left = extra_balance(tree->left, ++left);
	if (tree->right)
		right = extra_balance(tree->right, ++right);
	return ((left > right) ? left : right);
}
