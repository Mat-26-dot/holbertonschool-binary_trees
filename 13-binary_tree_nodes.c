#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes
 * @tree: pointer to the root nodeof the tree
 *
 * Return: tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{

		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	}
		return (binary_tree_nodes(tree->left) +
			(binary_tree_nodes(tree->right)));
}
