#include "binary_trees.h"

/**
 * binary_tree_delete - Supprime entièrement un arbre binaire
 * @tree: Pointeur vers la racine de l’arbre à supprimer
 *
 * Description: La fonction libère récursivement chaque nœud de l’arbre
 * en parcourant d'abord les sous-arbres gauche et droit, puis en
 * libérant le nœud courant. Si tree est NULL, la fonction ne fait rien.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

    /* Supprimer récursivement le sous-arbre gauche */
	binary_tree_delete(tree->left);

    /* Supprimer récursivement le sous-arbre droit */
	binary_tree_delete(tree->right);

    /* Libérer le nœud courant */
	free(tree);
}
