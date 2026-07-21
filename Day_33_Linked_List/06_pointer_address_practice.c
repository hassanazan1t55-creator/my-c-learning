#include <stdio.h>

void doubleValue(int* ptr) { *ptr *= 2; }

int main() {
  int num = 25;
  // Print the memroy adress of num.
  printf("Memory address: %p\n", &num);
  // Before modification.
  printf("Original value: %d\n", num);

  // Call the function to double the value.
  doubleValue(&num);

  // Memrory Adress of num after modification.
  printf("Memory address: %p\n", &num);

  // After modification.
  printf("Modified value: %d\n", num);

  return 0;
}
