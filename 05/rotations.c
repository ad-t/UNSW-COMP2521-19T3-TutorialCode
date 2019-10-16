struct {
  int value;
  struct BSTree *left;
  struct BSTree *right;
} BSTree;

struct BSTree *rotateLeft(struct BSTree *root) {
  if (root == NULL) {
    return NULL;
  } else if (root->right == NULL) {
    return root;
  } else {
    struct BSTree *pivot = root->right;
    struct BSTree *pivotLeft = pivot->left;
    root->right = pivotLeft;
    pivot->left = root;
    return pivot;
  }
}
