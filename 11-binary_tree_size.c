#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size
 * @tree: isa pointer to the root node of the tree
 *
 * Return: if tree is null, fuction must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + (binary_tree_size(tree->right) + 1));
}
