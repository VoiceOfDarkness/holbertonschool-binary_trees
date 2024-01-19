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
	binary_tree_t *tmp_first, *tmp_second;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	tmp_first = first->parent, tmp_second = second->parent;

	if (first == tmp_second || !tmp_first || (!tmp_first->parent && tmp_second))
		return (binary_trees_ancestor(first, tmp_second));
	else if (tmp_first == second || !tmp_second || (!tmp_second->parent && tmp_first))
		return (binary_trees_ancestor(tmp_first, second));

	return (binary_trees_ancestor(tmp_first, tmp_second));
}

