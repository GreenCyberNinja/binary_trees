#include "binary_trees.h"
/**
* binary_tree_is_root - checks if node is root
* @node: node to be checked
* Return: returns 1 if root otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	else
		return (0);
}
