#include "binary_trees.h"

/**
 * binary_tree_height - Mesure la hauteur d’un arbre binaire
 * @tree: Pointeur vers la racine de l’arbre
 *
 * Description: La hauteur est définie comme le nombre d’arêtes sur
 * le plus long chemin entre le nœud et une feuille. Si tree est NULL,
 * la fonction retourne 0.
 *
 * Return: Hauteur de l’arbre
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
	return (0);

    /* Si aucun enfant → hauteur = 0 (nœud seul) */
	if (tree->left == NULL && tree->right == NULL)
	return (0);

    /* Calcul récursif */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}
