typedef struct {
  int a;
  int b; 
} Item;

int isStableSort(int original[], int sorted[], int lo, int hi) {
  int i, j, k, key;

  for (i = lo; i <= hi; i++) {
    key = sorted[i].a;

    j= i; k = 0;

    while (j <= hi && k <= hi) {
      for (; j<= hi; j++) {
        if (sorted[j].a == key) break;
      }

      for (; k<= hi; k++) {
        if (original[k].a == key) break;
      }

      if (j <= hi && k <= hi ) {
        if (sorted[j].b != original[k].b) {
          return false;
        }

        j++; k++;
      }
    }
  }
}

