#include <stdio.h>

int main() {
  int num = 10;  // Binary 0000 1010

  // Displaying Bitwise Left Shift Operator (<<) on num variable.
  printf("Left Shift  (<< 1) = %d\n", num << 1);  // Binary 0001 0100 = 20
  printf("Left Shift  (<< 2) = %d\n", num << 2);  // Binary 0010 1000 = 40

  // Displaying Bitwise Right Shift Operator (>>) on num variable.
  printf("Right Shift (>> 1) = %d\n", num >> 1);  // Binary 0000 0101 = 5
  printf("Right Shift (>> 2) = %d\n", num >> 2);  // Binary 0000 0010 = 2

  return 0;
}
