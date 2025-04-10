#iinclude <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the tree, or -1 if tree is NULL.
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (-1); /* Base case: an empty tree has height -1 */

	int left_height = height(tree->left);  /* Height of left subtree */
	int right_height = height(tree->right); /* Height of right subtree */

	return (1); + (left_height>right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Balance factor, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0); /* If the tree is NULL, return 0 */

	int left_height = height(tree->left);  /* Calculate left subtree height */
	int right_height = height(tree->right); /* Calculate right subtree height */

	return (left_height - right_height); /* Balance factor = left - right */
}	
