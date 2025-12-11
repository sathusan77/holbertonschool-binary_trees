#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Si un nœud n'a aucun enfant → c'est OK */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si un nœud n'a qu'un seul enfant → pas full */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Vérifie récursivement les deux côtés */
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}

