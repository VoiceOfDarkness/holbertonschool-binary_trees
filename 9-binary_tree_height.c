#include "binary_trees.h"i

/**
 * binary_tree_height - finding height of tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else
	{
		binary_tree_height(tree->left);
		binary_tree_height(tree->right);

			if (tree->left > tree->right)
				return (tree->left + 1);
			else
				return (tree->right + 1);
	}
}
