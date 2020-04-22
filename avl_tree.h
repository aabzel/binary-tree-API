#ifndef AVL_TREE_H
#define AVL_TREE_H

#include "bin_tree.h"

#include "avl_tree.h"

TreeNode_t *avl_insert (TreeNode_t *root, int val);
TreeNode_t *avl_delete (TreeNode_t *root, int val);

TreeNode_t *avl_insert_ok (TreeNode_t *root, int newVal);
TreeNode_t *avl_delete_bad (TreeNode_t *root, int oldVal);
bool avl_is_empty (TreeNode_t *root);
bool avl_contains(TreeNode_t *root, int val);

#endif /* AVL_TREE_H */
