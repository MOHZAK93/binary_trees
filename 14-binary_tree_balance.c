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
	int b1 = 0, b2 = 0;

	if (tree)
	{
		b1 = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		b2 = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	}
	return (b1 - b2);
}
