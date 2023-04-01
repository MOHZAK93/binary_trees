#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure height
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree)
	{
		size_t h1 = 0, h2 = 0;

		h1 = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		h2 = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((h1 > h2) ? h1 : h2);
	}
	return (0);
}
