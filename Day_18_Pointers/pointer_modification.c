#include <stdio.h>

int main() {
  int score = 100;
  int* ptr = &score;  // Pointer to store the address of score variable.

  // Displaying the original value.
  printf("Original score: %d\n", score);

  // Updating the value using pointer.
  *ptr = 400;
  
  // Displaying the updated value.
  printf("Updated score: %d\n", score);

  return 0;
}
