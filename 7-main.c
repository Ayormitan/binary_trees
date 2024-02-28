#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * print_num - prints number
 *
 * @n: Number tobe printed
 */
void print_num(int n)
{
	printf("%d\n", n);
}
/**
 * main - Entry point
 *
 * Return: Always success
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right= binary_tree_node(root, 402);
	root->left->left = binary_tree_node(root->left, 6);
	root->left->right = binary_tree_node(root->left, 56);

	binary_tree_print(root);
	binary_tree_inorder(root,&print_num);
	return (0);
}
