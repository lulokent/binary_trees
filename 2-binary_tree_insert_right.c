#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts anode as the right-child.
 * @parent: Pointer to the node a right-child is inserted in.
 * @value: The value to store the new node.
 * Return: pointer to the new node otherwise NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	nnode = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);

	nnode = binary_tree_node(parent, value);
	if (nnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		nnode->right = parent->right;
		parent->right->parent = nnode;
	}
	parent->right = nnode;

	return (nnode);
}
