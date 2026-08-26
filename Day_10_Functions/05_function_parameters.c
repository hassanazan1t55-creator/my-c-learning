#include <stdio.h>

void printSquare(int number) {
  int result = number * number;
  printf("The square of %d is: %d\n", number, result);
}

int main() {
  printSquare(5);   // Function Calling.
  printSquare(12);  // Function Calling.
  return 0;
}
