#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 *
 * @first: first given node.
 * @second: second given node.
 *
 * Return: pointer to common ancestor node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (!first || !second)
        return (NULL);

    if (first->parent == second->parent)
        return (first->parent);

    if (first == second->parent)
        return (second->parent);

    if (second == first->parent)
        return (first->parent);

    if (first->parent != second->parent)
        return (binary_trees_ancestor(first, second->parent));

    if (second->parent != first->parent)
        return (binary_trees_ancestor(first->parent, second));

    return (NULL);
}

