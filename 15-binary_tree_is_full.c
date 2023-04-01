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
	if (tree)
	{
		return (is_full_recursive(tree));
	}
	return (0);
}

/**
 * is_full_recursive - checks if a binary tree is full recursively
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, otherwise 0
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && !tree->right) || (!tree->left && tree->right) ||
		     !is_full_recursive(tree->left) || !is_full_recursive(tree->right))
			return (0);
	}
	return (1);
}
