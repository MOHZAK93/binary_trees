#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_ancestor - finds the lowest common ancesteor of two nodes
 *
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: pointer to lowerst common ancestor, otherwise NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp;

	while (first)
	{
		temp = second;
		while (temp)
		{
			if (first == temp)
				return ((binary_tree_t *) temp);
			temp = temp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
