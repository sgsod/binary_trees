#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right child
 * @parent: parent node
 * @value: value to be kept in node
 * Return: pointer to new node (SUCCESS)
 *	   NULL (FAILURE)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL) /*malloc fail*/
		return (NULL);

	/*START Setting node vaulues*/
	new_node->right = parent->right;
	parent->right = new_node; /*right-child moved to next level*/

	new_node->left = NULL;
	new_node->parent = parent;
	new_node->n = value;
	/*END*/

	return (new_node);
}
