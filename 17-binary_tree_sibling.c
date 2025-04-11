#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling of
 * Return: Pointer to the sibling node, or NULL if none exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Step 1: Check for NULL inputs */
	if (node == NULL || node->parent == NULL)
	return (NULL);

	/* Step 2: Determine if node is left or right child */
	if (node == node->parent->left)
	/* Step 3a: If left child, return right child */
	return (node->parent->right);
	else
	/* Step 3b: If right child, return left child */
	return (node->parent->left);
}
