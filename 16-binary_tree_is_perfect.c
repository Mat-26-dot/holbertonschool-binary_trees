#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the tree. If `tree` is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the larger of the two subtree heights + 1 (current node) */
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* Edge Case: Empty tree is not perfect */
	if (tree == NULL)
	return (0);

	/* Base Case: A leaf node is trivially perfect */
	if (tree->left == NULL && tree->right == NULL)
	return (1);

	/* If a node has only one child, the tree isn't perfect */
	if (tree->left == NULL || tree->right == NULL)
	return (0);

	/* Check if left and right subtrees have the same height */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
	return (0);

	/* Recursively check left and right subtrees */
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
