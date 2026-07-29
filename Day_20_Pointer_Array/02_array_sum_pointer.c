#include <stdio.h>

int main() {
  // Declaring Array.
  int number[5] = {10, 20, 30, 40, 50};
  int* ptr = number;
  int sum = 0;

  // Using Pointer to Access Array Elements.
  for (int i = 0; i < 5; i++) {
    sum += *(ptr + i);
  }

  // Displaying Output.
  printf("Sum of Array Elements: %d", sum);

  return 0;
}
