#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
