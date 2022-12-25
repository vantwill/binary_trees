#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if tree is NULL, otherwise it returns the number of nodes
 * with at least 1 child in a binary tree.
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count += 1;
	count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (count);
}
