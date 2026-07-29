#include <stdio.h>

// Swap Function.
void swap(int* a, int* b) {
  int temp = *a;  // *a into temp.
  *a = *b;        // *b into *a.
  *b = temp;      // temp into *b.
}

int main() {
  int x = 10, y = 20;

  printf("Before Swap Values: x = %d, y = %d\n", x, y);

  // Calling swap function.
  swap(&x, &y);

  printf("After Swap Values: x = %d, y = %d\n", x, y);

  return 0;
}
