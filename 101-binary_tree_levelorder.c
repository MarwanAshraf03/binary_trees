#include "binary_trees.h"

/**
 * binary_tree_levelorder - prints tree with level order traversal
 * @tree: root node
 * @func: function printing node value
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (!tree || !func)
		return;
	height = extra_height(tree, 1);
	for (i = 1; i <= height; i++)
		print_level(tree, func, i);
}

/**
 * extra_level_order - helper function to call
 * @tree: root node
 * @func: function printing node value
*/
void extra_level_order(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		func(tree->left->n);
	if (tree->right)
		func(tree->right->n);
	if (tree->left)
	extra_level_order(tree->left, func);
	if (tree->right)
	extra_level_order(tree->right, func);
}

/**
 * print_level - helper function to print level of tree
 * @tree: root node
 * @func: function printing node value
 * @level: level to be printed
*/
void print_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		print_level(tree->left, func, level - 1);
		print_level(tree->right, func, level - 1);
	}
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
