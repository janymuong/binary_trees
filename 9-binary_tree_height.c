#include "binary_trees.h"

/**
 * binary_tree_height - function that checks the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int counter = 0, left = 0, right = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->right != NULL)
		{
			right = 1 + binary_tree_height(tree->right);
		}
		if (tree->left != NULL)
		{
			left = 1 + binary_tree_height(tree->left);
		}

		if (right > left)
		{
			return (right);
		}
		else
			return (left);

	}
}
