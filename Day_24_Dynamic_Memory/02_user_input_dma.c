#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int* ptr;  // Pointer Variable.

  // Inut From User to store number of elements.
  printf("Enter The Number of Elements: ");
  scanf("%d", &n);

  // Memory Allocation.
  ptr = (int*)malloc(n * sizeof(int));

  // Checking if Memory Allocation is Successful or not.
  if (ptr == NULL) {
    printf("Memroy Allocation Failed.\n");
    return 1;
  }

  // Input From User to Store Elements.
  for (int i = 0; i < n; i++) {
    printf("Enter Element %d: ", i + 1);
    scanf("%d", &ptr[i]);
  }

  printf("Elements You Entered Are: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");

  // Freeing Memory.
  free(ptr);
  return 0;
}
