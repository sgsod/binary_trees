#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is a root
 * @node: node to be check
 *
 * Return: 1 if node is root
 *	   0 if all else
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
