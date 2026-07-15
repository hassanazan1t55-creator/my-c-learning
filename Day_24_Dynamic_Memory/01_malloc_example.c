#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declaring Variables.
  int n = 5;
  int* ptr;  // Pointer Variable.

  ptr = (int*)malloc(n * sizeof(int));  // Allocating Memory.

  // Checking if Memory is Allocated or not.
  if (ptr == NULL) {
    printf("Memory Allocation Failed\n");
    return 1;
  }

  // Filling The Allocated Memory.
  for (int i = 0; i < n; i++) {
    ptr[i] = (i + 1) * 10;
  }

  // Displaying The Allocated Memory.
  for (int i = 0; i < n; i++) {
    printf("Element %d: %d\n", i + 1, ptr[i]);
  }

  // Free The Allocated Memory.
  free(ptr);

  return 0;
}
