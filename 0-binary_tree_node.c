#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);

	/* Initialize node values */
	new_node->n = value; 
	new_node->parent = parent; /* Set Parent */
	new_node->left = NULL; /* Initialize node to NULL */
	new_node->right = NULL; /* Initialize node to NULL */

	return (new_node);
}
