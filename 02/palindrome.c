#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE (1)
#define FALSE (0)

/*
 * A = character array
 * n = length of string
 * frontIndex = 0
 * backIndex = n - 1
 * while (frontIndex < backIndex) {
 *   if (A[frontIndex] != A[backIndex]) {
 *      return FALSE;
 *   }
 *   frontIndex++;
 *   backIndex--;
 * }  
 * return TRUE;
 */

unsigned int isPalindrome(char *possiblePalindrome) {
  unsigned int lengthOfString = strlen(possiblePalindrome);
  unsigned int backIndex = lengthOfString - 1;
  unsigned int frontIndex = 0;

  while (frontIndex < backIndex) {
    if (possiblePalindrome[frontIndex] != possiblePalindrome[backIndex]) {
      return FALSE;
    }
    frontIndex++;
    backIndex--;
  }
  return TRUE;
}

int main(int argc, char *argv[]) {

  if (argc == 2) {
    if (isPalindrome(argv[argc - 1]) == TRUE) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  } else {
    fprintf(stderr, "Usage: ./palindrome <possiblePalindrome string>\n");
  }

  return 0;
}
