#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node as the left-child.
 * @parent: The pointer to th node where the left-child to be inserted.
 * @value: the value to store the new node
 * Return: the new node otherwise NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
