#include <stdio.h>

int main() {
  // Array with dynamic size.
  int numbers[] = {15, 25, 35, 45, 55, 65, 75};

  // Calculating array length dynamically.
  int total_bytes = sizeof(numbers);
  int single_element_bytes = sizeof(numbers[0]);
  int length = total_bytes / single_element_bytes;

  // Displaying Output.
  printf("=== Dynamic Array Size Calculator ===\n\n");
  printf("Total Memory Size: %d bytes\n", total_bytes);
  printf("Single Element Size: %d bytes\n", single_element_bytes);
  printf("Total Elements in Array: %d\n", length);

  return 0;
}