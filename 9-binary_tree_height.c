#include "binary_trees.h"

/**
 * binary_tree_height - finding height of tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftheight = 0, rightheight = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	else
	{
		leftheight = binary_tree_height(tree->left);
		rightheight = binary_tree_height(tree->right);

			if (leftheight > rightheight)
				return (leftheight + 1);
			else
				return (rightheight + 1);
	}
}
