#include "binary_trees.h"
/**
  * find_height - finds height of tree
  * @tree: pointer to root of tree
  * Return: height of tree
  */
size_t find_height(const binary_tree_t *tree)
{
	size_t height_r = 0, height_l = 0, height = 0;

	if (tree == NULL)
		return (0);
	height++;
	height_r += find_height(tree->right);
	height_l += find_height(tree->left);
	height += height_r > height_l ? height_r : height_l;
	return (height);
}
/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * @tree: pointer to the root node
  * Return: balance factor of a binary tree
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	l = find_height(tree->left);
	r = find_height(tree->right);
	return (l - r);
}
