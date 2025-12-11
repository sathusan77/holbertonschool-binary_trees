#include "binary_trees.h"

/**
 * binary_tree_is_root - Vérifie si un nœud est la racine d'un arbre
 * @node: Pointeur vers le nœud à vérifier
 *
 * Description: Retourne 1 si le nœud est une racine (pas de parent),
 * sinon retourne 0. Si node est NULL, retourne 0.
 *
 * Return: 1 si c'est la racine, sinon 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

    /* La racine n'a pas de parent */
	if (node->parent == NULL)
	return (1);

	return (0);
}
