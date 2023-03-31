#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int f = 0;

	if (tree)
	{
		f += ((tree->left && tree->right) || (!tree->left && !tree->right)) ?
		     binary_tree_is_full(tree->left) : 1 + binary_tree_is_full(tree->left);
		f += ((tree->left && tree->right) || (!tree->left && !tree->right)) ?
		     binary_tree_is_full(tree->left) : 1 + binary_tree_is_full(tree->right);
	}
	if (!f)
		return (1);
	return (0);
}
