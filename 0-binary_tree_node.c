#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: (pointer) parent node of the node to create
 * @value: value to write to the new node
 *
 * Return: pointer to the new node on_success, or NULL on_failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bin_node;

	bin_node = malloc(sizeof(binary_tree_t));
	if (bin_node == NULL)
		return (NULL);

	bin_node->n = value;
	bin_node->parent = parent;
	bin_node->left = NULL;
	bin_node->right = NULL;

	return (bin_node);
}
