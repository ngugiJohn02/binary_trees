#include <stdio.h>
#include "binary_trees.h"

/**
 * print_tree - Recursively prints a binary tree
 * @tree: Pointer to the current node
 * @space: The number of spaces for indentation
 */
void print_tree(const binary_tree_t *tree, int space)
{
    int i;

    if (tree == NULL)
        return;

    /* Increase distance between levels */
    space += 5;

    /* Process the right child first */
    print_tree(tree->right, space);

    /* Print the current node */
    printf("\n");
    for (i = 5; i < space; i++)
        printf(" ");
    printf("%d\n", tree->n);

    /* Process the left child */
    print_tree(tree->left, space);
}

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    print_tree(tree, 0);
}

