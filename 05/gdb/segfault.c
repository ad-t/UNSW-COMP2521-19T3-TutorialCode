#include <stdlib.h>
#include <stdio.h>

#define SOME_LARGE_AMOUNT (12)

void squareInPlace(int *location, int valueToSquare) {
  *location = valueToSquare * valueToSquare;
}

int main (int argc, char **argv) {

  // gdb tutorial show off debugging an obscure bug

  // create some large amount of squared values in this array
  int *squares = malloc(SOME_LARGE_AMOUNT);

  for (unsigned int index = 0; index < SOME_LARGE_AMOUNT; index++) {
    squareInPlace(&squares[index], index);
  }

  // output them
  for (unsigned int index = 0; index < SOME_LARGE_AMOUNT; index++) {
    printf("%d squared = %d\n", index, squares[index]);
  }

  return EXIT_SUCCESS;
}


