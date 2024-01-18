#include "binary_trees.h"
/**
  * depth - finds depth
  * @node: node
  * Return: depth of node
  */
int depth(const binary_tree_t *node)
{
	int d = 0;
	binary_tree_t *buf;

	if (!node)
		return (d);
	buf = (binary_tree_t *)node;
	while (buf != NULL)
	{
		buf = buf->parent;
		d++;

	}
	return (d);
}

/**
  * binary_trees_ancestor -  finds the lowest common ancestor of two nodes
  * @first: first node
  * @second: second node
  * Return: common ancestor
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int f_d, s_d;
	binary_tree_t *buf;

	if (!first || !second)
		return (NULL);
	f_d = depth(first);
	s_d = depth(second);
	while (first && second)
	{
		if (f_d < s_d)
		{
			while (f_d != s_d)
				second = second->parent, s_d--;
		}
		else
		{
			while (f_d != s_d)
				first = first->parent, f_d--;
		}
		if (first == second)
		{
			buf = (binary_tree_t *)first;
			return (buf);
		}
		else
		{
			first = first->parent;
			second = second->parent;
		}
	}
	return (NULL);
}
