#include "binary_trees.h"

int bin_is_descendant(const binary_tree_t *node, const binary_tree_t *target);

/**
 * binary_trees_ancestor - loookup the lowest common ancestor of two nodes
 *				recursivly
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: (pointer) the lowest common ancestor node,
 *	or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *bin_ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	bin_ancestor = (binary_tree_t *)first;

	while (bin_ancestor != NULL)
	{
		if (bin_is_descendant(bin_ancestor, second))
			return (bin_ancestor);
		bin_ancestor = bin_ancestor->parent;
	}

	return (NULL);
}


/**
 * bin_is_descendant - checks for descendant of another node
 *			recursion
 * @node: pointer to the potential descendant node
 * @target: pointer to the potential ancestor node
 *
 * Return: 1 if @node is a descendant of @target, else 0
 */
int bin_is_descendant(const binary_tree_t *node, const binary_tree_t *target)
{
	if (node == NULL)
		return (0);

	if (node == target)
		return (1);

	return (bin_is_descendant(node->left, target) ||
			bin_is_descendant(node->right, target));
}
