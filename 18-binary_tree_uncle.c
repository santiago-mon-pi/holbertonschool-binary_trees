#include "binary_trees.h"
/**
 * binary_tree_uncle - Function that finds the uncle of a node
 *
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	if (node->parent->parent)
	{
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
		else if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		else
			return (NULL);
	}

	return (NULL);
}
