#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as
 * the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to put in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_left_node = malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
		return (NULL);

	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->right = NULL;
	new_left_node->left = parent->left;
	parent->left = new_left_node;

	if (new_left_node->left)
		new_left_node->left->parent = new_left_node;

	return (new_left_node);
}
