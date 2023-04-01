#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_sibling - finds sibling of a node
 *
 * @node: pointer to the node to find sibling
 *
 * Return: pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}
