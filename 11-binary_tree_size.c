#include "binary_trees.h"

/**
 * binary_tree_size - find size of tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
