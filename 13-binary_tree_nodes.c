#include "binary_trees.h"

/**
 * binary_tree_nodes - Compte les nœuds avec au moins un enfant
 * @tree: Pointeur vers la racine de l’arbre
 *
 * Description: Un nœud est compté s’il a au moins un enfant
 *
 * Return: Nombre de nœuds ayant au moins un enfant
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

    /* Vérifie si le nœud a au moins un enfant (compte = 1 sinon 0) */
	return ((tree->left || tree->right ? 1 : 0) +
		binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
