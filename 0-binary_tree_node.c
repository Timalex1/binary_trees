#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Parent node of the node to create
 * @value: Value of the new node
 *
 * Return: Address of the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *new = NULL;

  new = malloc(sizeof(binary_tree_t));
  if (!new)
  {
    return (NULL);
  }
  new->n = value;
  new->parent = parent;
  new->left = NULL;
  new->right = NULL;
  return (new);
  
}
