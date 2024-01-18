#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 *
 * @first: first given node.
 * @second: second given node.
 *
 * Return: pointer to common ancestor node.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (binary_tree_depth(first) > binary_tree_depth(second))
	{
		return (binary_trees_ancestor(first->parent, second));
	}
	else if (binary_tree_depth(first) < binary_tree_depth(second))
	{
		return (binary_trees_ancestor(first, second->parent));
	}
	else
	{
		if (first == second)
			return ((binary_tree_t *)first);
		return (binary_trees_ancestor(first->parent, second->parent));
	}
}
