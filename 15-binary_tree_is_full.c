#include "binary_trees.h"
/**
  * binary_tree_is_full - checks if a binary tree is full
  * @tree: pointer to the root of the tree
  * Return: 1 if binary tree is full else 0
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int f_l, f_r;
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
	{
		f_l = binary_tree_is_full(tree->left);
		f_r = binary_tree_is_full(tree->right);
		if (f_l && f_r)
			return (1);
		return (0);
	}
	return (0);
}
