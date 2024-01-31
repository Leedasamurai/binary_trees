#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lf = 0;
	size_t rgt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lf = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			rgt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((lf > rgt) ? lf : rgt);
	}
}
