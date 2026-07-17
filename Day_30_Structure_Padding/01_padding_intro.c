#include <stdio.h>

struct Badge {
  char id;     // Takes 1 byte
  int points;  // Takes 4 bytes
};

int main() {
  struct Badge player1;

  // Mathematically it should be 1 + 4 = 5 bytes
  // Let's see what the computer actually gives us!
  printf("Actual size of structure in memory: %zu bytes\n", sizeof(player1));

  return 0;
}
