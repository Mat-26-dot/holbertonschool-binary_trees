#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;		/* Store value */
	new_node->parent = parent;	/* Link to parent */
	new_node->left = NULL;		/* No children yet */
	new_node->right = parent->right;
	/* Set new node's right to parent's current right */
	if (parent->right)
	parent->right->parent = new_node;  /* Update old right child's parent */

	parent->right = new_node;  /* Set parent's right to new node */

	return (new_node);
}


