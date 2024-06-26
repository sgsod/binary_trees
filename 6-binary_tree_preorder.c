#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse through a binary tree
 * @tree: pointer to the root of tree
 * @func: printing function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}
