#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node
 * @tree: pointer to the node to measure depth
 *
 * Return: tree is null return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{	/* If the node is NULL or root (no parent), depth is 0 */
		if (!tree || !tree->parent)
			return (0);

	/* Recursive case: Depth = 1 (current edge) + parent's depth */
		return (1 + binary_tree_depth(tree->parent));
}
