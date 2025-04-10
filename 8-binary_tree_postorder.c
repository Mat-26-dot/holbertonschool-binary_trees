#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
        if (!tree || !func)
                return;

        binary_tree_postorder(tree->left, func);
        binary_tree_postorder(tree->right, func);
        func(tree->n);
}
