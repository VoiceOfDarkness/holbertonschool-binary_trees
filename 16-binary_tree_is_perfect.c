#include "binary_trees.h"
/**
  * binary_tree_is_perfect - chekcs if a binary tree is perfect
  * @tree: pointer to the root of the tree
  * Return: if binary tree is perfect 1 else 0
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int c_l = 0, c_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		c_l++, c_r++;
		c_l += binary_tree_is_perfect(tree->left);
		c_r += binary_tree_is_perfect(tree->right);

		if (c_l == c_r && c_l != 0)
		{
			if (tree->parent == NULL)
				return (1);
			return (c_l);
		}
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
