#include <stdio.h>
#include <stdlib.h>
int main() {
  // Declaring Pointer Variable.
  int* ptr;

  // Allocating Memory.
  ptr = (int*)malloc(2 * sizeof(int));
  ptr[0] = 10;
  ptr[1] = 20;

  // Displaying Elements Before Reallocation.
  printf("Element Before Reallocation: %d %d\n", ptr[0], ptr[1]);

  // Reallocating Memory.
  ptr = (int*)realloc(ptr, 4 * sizeof(int));
  ptr[2] = 30;
  ptr[3] = 40;

  // Displaying Elements After Reallocation.
  printf("Element After Reallocation:");
  for (int i = 0; i < 4; i++) {
    printf(" %d", ptr[i]);
  }

  // Free The Allocated Memory.
  free(ptr);

  return 0;
}
