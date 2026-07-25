#include <stdio.h>

// Function Declaration For Adding Two Numbers.
int Addition(int a, int b) {
  int sum = a + b;
  return sum;
}

int main() {
  int result;                 // Variable To Store The Result.
  result = Addition(89, 43);  // Function Calling.

  // Displaying The Result.
  printf("Sum: %d\n", result);
  return 0;
}
