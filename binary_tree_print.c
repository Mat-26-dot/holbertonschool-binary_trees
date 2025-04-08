#include "binary_trees.h"
#include <stdio.h>

void binary_tree_print(const binary_tree_t *tree)
{
    static int depth;
    static int last;

    if (!tree)
        return;

    printf("%*s%c- (%d)\n", depth * 4, "", 
           last ? ' ' : '|', tree->n);

    if (tree->left || tree->right) {
        depth++;
        last = !tree->right;
        binary_tree_print(tree->left);
        last = 1;
        binary_tree_print(tree->right);
        depth--;
    }
}
