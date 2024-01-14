#include "binary_trees.h"
/**
  * binary_tree_nodes - counts the nodes with at least 1 child
  * @tree:  pointer to the root node
  * Return: count of node at least 1 child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);
	if (tree->right != NULL || tree->left != NULL)
		count++;
	count += binary_tree_nodes(tree->right);
	count += binary_tree_nodes(tree->left);
	return (count);
}
