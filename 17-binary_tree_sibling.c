#include "binary_trees.h"
/**
 * binary_tree_sibling - Function that finds the sibling of a node
 *
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	if (node == node->parent->left && node->parent->right)
		return (node->parent->right);
	else if (node == node->parent->right && node->parent->left)
		return (node->parent->left);
	else
		return (NULL);
}
