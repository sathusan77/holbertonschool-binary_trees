#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order
 * @tree: Pointer to the root node of the tree
 * @func: Function pointer to call for each node
 *
 * Description: Post-order = Left → Right → Node.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

