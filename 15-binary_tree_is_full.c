#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full or not
 * @tree: root node of checked tree
 * Return: 1 if full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);
	if (!(tree->right && tree->left))
		return (0);
	left = extra_full(tree->left);
	right = extra_full(tree->right);
	return ((left > right) ? right : left);
}

/**
 * extra_full - helper function
 * @tree: root node
 * Return: 1 if subtree is full, 0 otherwise
*/
int extra_full(binary_tree_t *tree)
{
	int help = (tree->left != NULL) ^ (tree->right != NULL);

	if (help)
		return (0);
	if (tree->left)
		extra_full(tree->left);
	if (tree->right)
		extra_full(tree->right);
	return (1);
}
