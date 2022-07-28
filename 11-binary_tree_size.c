#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures the size of a binary tree
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
