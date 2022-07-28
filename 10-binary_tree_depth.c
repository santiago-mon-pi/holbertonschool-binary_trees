#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the height of a binary tree
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d_node = 0;

	if (tree == NULL || (!tree->parent))
		return (0);

	d_node = binary_tree_depth(tree->parent);

	return (d_node + 1);
}
