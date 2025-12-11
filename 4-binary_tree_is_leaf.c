#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Vérifie si un nœud est une feuille
 * @node: Pointeur vers le nœud à vérifier
 *
 * Description: Retourne 1 si le nœud est une feuille (aucun enfant),
 * sinon retourne 0. Si node est NULL, retourne 0.
 *
 * Return: 1 si le nœud est une feuille, 0 sinon
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

    /* Une feuille n'a ni enfant gauche ni enfant droit */
	if (node->left == NULL && node->right == NULL)
	return (1)
	return (0);
}
