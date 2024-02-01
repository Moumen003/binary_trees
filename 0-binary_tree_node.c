#include "binary_trees.h"


/**
* binary_tree_node - fn name
* @parent:the parent node
* @value: the value of the parent
*
* Return: the binary_tree_t type
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);

}
