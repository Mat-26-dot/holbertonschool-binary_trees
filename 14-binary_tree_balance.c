#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the tree, or -1 if tree is NULL.
 */
int height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1); /* Base case: empty tree has height -1 */

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 * Return: Balance factor, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0); /* If tree is NULL, return 0 */

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height); /* Balance factor: left - right */
}
