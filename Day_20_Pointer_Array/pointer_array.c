#include <stdio.h>

int main() {
  // Declaring Array and Pointer.
  int arr[3] = {10, 20, 30};
  int* ptr = arr;

  printf("Using Pointer to Access Array Elements:\n\n");

  // Using Pointer to Access Array Elements.
  for (int i = 0; i < 3; i++) {
    printf("Index %d -> Value: %d (Address: %p)\n", i, *(ptr + i), ptr + i);
  }
  return 0;
}
