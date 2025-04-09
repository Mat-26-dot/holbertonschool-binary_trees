#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node) /* Check if not a leaf */
		return (0);

	if (node->left == NULL) /* Check if leaf */
	{
		if (node->right == NULL)
			return (1); /* Return 1 if a leaf */
	}
		return (0);
}
