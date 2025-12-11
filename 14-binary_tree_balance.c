#include "binary_trees.h"
/**
 * height - height of tree
 * @tree: tree
 * Return: height
 */
int height(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	if (left >= right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_balance - check balance factor
 * @tree: tree to check
 * Return: balance dif
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}
