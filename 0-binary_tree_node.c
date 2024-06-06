#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: parent node
 * @value: value to be kept in node
 * Return: pointer to new node (SUCCESS)
 *	   NULL (FAILURE)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL) /*malloc fail*/
		return (NULL);

	/*START Setting node vaulues*/
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	new_node->n = value;
	/*END*/

	return (new_node);
}
