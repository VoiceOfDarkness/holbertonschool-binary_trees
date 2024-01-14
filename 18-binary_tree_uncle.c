#include "binary_trees.h"
/**
  * binary_tree_uncle - finds the uncle of a node
  * @node: pointer to the node
  * Return: pointer to the uncle
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent && node->parent->parent->left == node->parent)
	{
		if (node->parent->parent->right != NULL)
			return (node->parent->parent->right);
	}
	else if (node->parent->parent)
		if (node->parent->parent->left != NULL)
			return (node->parent->parent->left);
	return (NULL);
}
