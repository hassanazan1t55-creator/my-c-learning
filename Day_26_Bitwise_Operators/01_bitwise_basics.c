#include <stdio.h>

int main() {
  int a = 5;  // Binary: 0101.
  int b = 6;  // Binary: 0110.

  // Displaying Bitwise Operations of a and b.
  printf("Bitwise AND (a & b) = %d\n", a & b);
  printf("Bitwise OR (a | b) = %d\n", a | b);
  printf("Bitwise XOR (a ^ b) = %d\n", a ^ b);
  printf("Bitwise NOT (~a) = %d\n", ~a);

  return 0;
}
