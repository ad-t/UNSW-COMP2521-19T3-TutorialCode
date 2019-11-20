typedef struct Node *List;

struct Node {
  int value;
  List next;
};

List copy(List ls) {
  if (ls == NULL) { return NULL; }
  else {
    struct Node *new = malloc(sizeof(struct Node));
    new->value = ls->value;
    new->next = copy(ls->next);
  }
}

List selectSort(List ls) {
  if (ls == NULL) {
    return NULL;
  }

  List old = copy(ls);
  List res = NULL;
  struct Node *curr, max, prev;

  while (old != NULL) {
    max = curr = old;
    while (curr != NULL) {
      if (curr->value > max->value) {
        max = curr;
      }
      curr = curr->next;
    }

    prev = NULL; curr = old;

    while (curr != max) {
      prev = curr;
      curr = curr->next;
    }

    if (prev == NULL) {
      old = max->next;
    }
    else 
    {
      prev->next = max->next;
    }

    max->next = res;
    res = max;
  }
  return res;
}

