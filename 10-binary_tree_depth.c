#include "binary_trees.h"

/**
 * binary_tree_depth - finding depth of tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int size = 0;

	if (!tree || !tree->parent)
		return (0);

	size = binary_tree_depth(tree->parent);
	return (size + 1);
}
