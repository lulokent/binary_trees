#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t l_depth = binary_tree_depth(tree->left);
	size_t r_depth = binary_tree_depth(tree->right);

	return ((l_depth > r_depth ? l_depth : r_depth) + 1);
}
