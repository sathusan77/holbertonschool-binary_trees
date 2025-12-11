#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: node to check
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (NULL);
	parent = node->parent;
	if (!parent)
		return (NULL);
	if (parent->left == node)
		return (parent->right);
	if (parent->right == node)
		return (parent->left);
	return (NULL);
}
