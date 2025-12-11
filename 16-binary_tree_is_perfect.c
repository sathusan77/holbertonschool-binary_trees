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
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: tree
 * Return: 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hl, hr;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	hl = height(tree->left);
	hr = height(tree->right);
	if (hl != hr)
		return (0);
	if (!binary_tree_is_perfect(tree->left))
		return (0);
	if (!binary_tree_is_perfect(tree->right))
		return (0);
	return (1);
}
