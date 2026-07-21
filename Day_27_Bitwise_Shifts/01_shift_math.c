#include <stdio.h>

int main() {
  int number = 15;  // Binary: 00001111.

  // Left shift by 3 bits.
  int left_shift_res = number << 3;
  printf("Original Number: %d\n", number);
  printf("Left Shift by << 3 bits: %d\n", left_shift_res);

  // Right shift by 2 bits.
  int right_shift_res = left_shift_res >> 2;
  printf("Right Shift by >> 2 bits: %d\n", right_shift_res);

  return 0;
}
