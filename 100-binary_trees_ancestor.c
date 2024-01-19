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

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second)
		return ((binary_tree_t *)second);

	if (second->parent == first)
		return ((binary_tree_t *)first);

	if (second != first->parent && first->parent)
		return (binary_trees_ancestor(first->parent, second));

	if (first != second->parent && second->parent)
		return (binary_trees_ancestor(first, second->parent));

	return (NULL);
}

