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
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
	{
		right = binary_tree_is_full(tree->right);
		left = binary_tree_is_full(tree->left);
		return (right && left);
	}
	return (0);
}