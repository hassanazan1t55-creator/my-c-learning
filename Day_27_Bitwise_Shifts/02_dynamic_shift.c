#include <stdio.h>

int main() {
  // Declaring Variable.
  int num, count;

  // Input from User.
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Enter Number of bits to shift: ");
  scanf("%d", &count);

  // Shifting Bits.
  int leftShift = num << count;   // Left Shifting.
  int rightShift = num >> count;  // Right Shifting.

  // Printing Result.
  printf("%d shifted left by %d  = %d\n", num, count, leftShift);
  printf("%d shifted right by %d = %d\n", num, count, rightShift);

  return 0;
}
