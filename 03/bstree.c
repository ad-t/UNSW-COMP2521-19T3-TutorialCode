#include <stdlib.h>

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

int BSTreeMaxBranchLen(BSTree t) {
  if (t == NULL) {
    return 0;
  } else if (t->left == NULL && t->right == NULL) {
    return 0;
  } else {
    int left = BSTreeMaxBranchLen(t->left);
    int right = BSTreeMaxBranchLen(t->right);
    return 1 + ((left > right) ? left : right);
  }
}

int nodeDepth (BSTree t, int key) {
  if (t == NULL) {
    return -1;
  }
  if (t->value == key) {
    return 0;
  } else if (key < t->value) {
    int ndl = nodeDepth(t->left, key);
    if (ndl == -1) return -1;
    return ndl + 1;
  } else {
    int ndr = nodeDepth(t->right, key);
    if (ndr == -1) return -1;
    return ndr + 1;
  }
}

int countInternal (BSTree t) {
  if (t == NULL) {
    return 0;
  }
  return 1 + countInternal(t->left) + countInternal(t->right);
}

