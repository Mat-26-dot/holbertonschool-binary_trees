#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if full, 0 otherwise (or if tree is NULL)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{	/* If the input tree is NULL, return 0, empty tree doesn't qualify */
	if (tree == NULL)
		return (0);

	/* If the current node has no left or right child, return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Node with exactly 2 children */
	if (tree->left && tree->right)
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));

	/* Node with only 1 child */
	return (0);
}
