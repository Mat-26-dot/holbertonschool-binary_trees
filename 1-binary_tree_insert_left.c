#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: Is the value to store in the new node
 * Return: Return a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL) /* 1. Check if parent is NULL */
		return (NULL);
	/* Allocate new memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value; /* Initialize the new node */
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL) /* 4. Handle existing left child (if any) */
	{/* Set the new nodes left to the existing child */
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}	/* Update the old childs parent to the new node */
		parent->left = (new_node);

		/* 6. Return the new node */
		return (new_node);

}

