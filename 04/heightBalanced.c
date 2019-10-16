#define NOT_HEIGHT_BALANCED (-99);

int isHeightBalanced (BSTree t) {
  if (t == NULL) {
    return 0;
  }
  if (t->left == NULL && t->right == NULL) {
    return 0;
  }

  int hl = isHeightBalanced(t->left);
  int hr = isHeightBalanced(t->right);

  if (hl < 0 || hr < 0) {
    return NOT_HEIGHT_BALANCED;
  }

  int diff = hl - hr;
  if (diff < -1 || diff > 1) {
    return NOT_HEIGHT_BALANCED;
  }

  if (hl > hr) {
    return hl + 1;
  } else {
    return hr + 1;
  }
}
