#include "binary_trees.h"
/**
 * biary_tree_is_root - Check for root node
 *
 * @ode: Pointer to te node to check
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if(node == NULL ||node->parent != NULL)
		return (0);
	return (1);
}
