#include <stdio.h>

// Macros that take arguments just like functions.
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
  // Declaring Variables.
  int num = 6;
  int x = 15, y = 20;

  // Displaying Results Using Macros.
  printf("Square of %d is: %d\n", num, SQUARE(num));
  printf("The larger number between %d and %d is: %d\n", x, y, MAX(x, y));

  return 0;
}
