#include "binary_trees.h"


/**
* binary_tree_insert_left - fn name
* @parent:the parent node
* @value: the value of the parent
*
* Return: the binary_tree_t type
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}

	parent->left = newnode;
	return (newnode);

}
