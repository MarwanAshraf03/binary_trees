#include "binary_trees.h"

/**
 * binary_tree_levelorder - prints tree with level order traversal
 * @tree: root node
 * @func: function printing node value
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	extra_level_order(tree, func);
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
