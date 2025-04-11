#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	/* First check if node, its parent, or grandparent exist */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);

	/* Initialize variables after all declarations */
	parent = node->parent;
	grandparent = parent->parent;

	/* Determine which side parent is on, return the other side (uncle) */
	if (grandparent->left == parent)
	return (grandparent->right);
	else
	return (grandparent->left);
}
