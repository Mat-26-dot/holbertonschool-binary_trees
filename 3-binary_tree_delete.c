#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Is a pointer to the root node
 * Return: If tree is NULL, do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	/* First delete both subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/*Then delete the currentnode */
	free(tree);
}
