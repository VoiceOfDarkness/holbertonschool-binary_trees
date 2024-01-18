#include "binary_trees.h"
/**
  * binary_tree_leaves - function that counts the leaves in a binary tree
  * @tree: pointer to the root node of the tree
  * Return: count of leaves
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);
	if (tree->right == NULL && tree->left == NULL)
		return (++count);
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
