#include "binary_trees.h"

/**
 * binary_trees_ancestor - loookup the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: (pointer) the lowest common ancestor node,
 *	or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first == second->parent)
		return ((binary_tree_t *)first);

	if (first->parent == second)
		return ((binary_tree_t *)second);

	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);

	return (binary_trees_ancestor(first->parent, second->parent));
}
