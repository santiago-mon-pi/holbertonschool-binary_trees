#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	return (h_left > h_right ? h_left + 1 : h_right + 1);
}
/**
 * binary_tree_balance - Function that measures the balance factor of a
 * binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal = 0, bar = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		bal = binary_tree_height(tree->left) + 1;

	if (tree->right)
		bar = binary_tree_height(tree->right) + 1;

	return (bal - bar);
}
/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_balance(tree) == 0)
	{
		if (binary_tree_height(tree->left) == 0 &&
			binary_tree_height(tree->right) == 0)
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}
