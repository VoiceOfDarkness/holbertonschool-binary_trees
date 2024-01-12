#include "binary_trees.h"

/**
 * binary_tree_depth - finding depth of tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int dleft = 0, dright = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	else
	{
		dleft = binary_tree_depth(tree->left);
		dright = binary_tree_depth(tree->right);

		if (dleft > dright)
			return (dleft + 1);
		else
			return (dright + 1);
	}


}
