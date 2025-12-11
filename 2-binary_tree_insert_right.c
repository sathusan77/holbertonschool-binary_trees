#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as the right child
 * @parent: parent node
 * @value: value
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *oldright;

	if (!parent)
		return (NULL);
	oldright = parent->right;
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (oldright)
	{
		new->right = oldright;
		oldright->parent = new;
	}
	parent->right = new;
	return (new);
}
