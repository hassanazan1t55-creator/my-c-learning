#include <stdio.h>

int main() {
  // Initialize variables.
  int fac_input;
  int factorial = 1;

  // Prompt user for input.
  printf("Enter a positive integer: ");
  scanf("%d", &fac_input);

  // Loop to calculate factorial.
  for (int i = 1; i <= fac_input; i++) {
    factorial = factorial * i;  // Update factorial by multiplying it with the current value of i.
  }
  // Output the result.
  printf("Factorial of %d = %d\n", fac_input, factorial);
  return 0;
}
