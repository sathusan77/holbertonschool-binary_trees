#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left child of another node
 * @parent: parent node
 * @value: value
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *oldleft;

	if (!parent)
		return (NULL);
	oldleft = parent->left;
		new = binary_tree_node(parent, value);
		if (!new)
			return (NULL);
	if (oldleft)
	{
		new->left = oldleft;
		oldleft->parent = new;
	}
	parent->left = new;
	return (new);
}
