#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the number of leaves
 *
 * Return: number of tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		n += (!tree->left && !tree->right) ? 1 : 0;
		n += binary_tree_leaves(tree->left);
		n += binary_tree_leaves(tree->right);
	}
	return (n);
}
