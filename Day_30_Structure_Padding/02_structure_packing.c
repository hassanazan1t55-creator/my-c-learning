#include <stdio.h>

// Telling the compiler to pack everything with 1-byte alignment (No padding!)
#pragma pack(1)

struct PackedBadge {
  char id;     // 1 byte
  int points;  // 4 bytes
};

int main() {
  struct PackedBadge player1;

  // Now it should be exactly 1 + 4 = 5 bytes!
  printf("Size of packed structure: %lu bytes\n", sizeof(player1));

  return 0;
}
