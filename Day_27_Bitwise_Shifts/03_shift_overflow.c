#include <stdio.h>

int main() {
  // Declaring Variable and initializing it to 1.
  unsigned int active_bit = 1;

  // Shifting Bits Left Using For Loop.
  for (int i = 0; i <= 32; i += 4) {
    printf("Shifted Left by %2d bits: %u\n", i, active_bit << i);
  }

  return 0;
}
