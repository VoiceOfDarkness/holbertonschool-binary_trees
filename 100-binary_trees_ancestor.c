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
	binary_tree_t *first_parent = NULL, *second_parent = NULL;

	if (!first || !second)
		return (NULL);

	first_parent = first->parent;
	second_parent = second->parent;

	if (first == second)
		return ((binary_tree_t *)first);

	if (first_parent == second_parent)
		return (first_parent);

	if (first_parent == second)
		return (first_parent);

	if (second_parent == first)
		return (second_parent);

	if (first_parent == NULL)
		return (binary_trees_ancestor(first, second_parent));

	if (second_parent == NULL)
		return (binary_trees_ancestor(first_parent, second));

	return (binary_trees_ancestor(first_parent, second_parent));
}

