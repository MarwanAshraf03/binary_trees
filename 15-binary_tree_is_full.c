#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full or not
 * @tree: root node of checked tree
 * Return: 1 if full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;
	if (!tree)
		return (1);
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);
	return (left_full && right_full);
}
