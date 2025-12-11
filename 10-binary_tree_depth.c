#include "binary_trees.h"

/**
 * binary_tree_depth - Mesure la profondeur d’un nœud dans un arbre binaire
 * @tree: Pointeur vers le nœud dont on veut mesurer la profondeur
 *
 * Description: La profondeur correspond au nombre d’arêtes entre le nœud
 * et la racine de l’arbre. Si tree est NULL, la fonction retourne 0.
 *
 * Return: Profondeur du nœud
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	return (0);

    /* 1 + profondeur du parent */
	return (binary_tree_depth(tree->parent) + 1);
}
