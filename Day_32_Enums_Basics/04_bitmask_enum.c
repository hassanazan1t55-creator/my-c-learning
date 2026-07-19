#include <stdio.h>

// Using Bitwise shifts (1 << x) to create overlapping flags
enum PlayerFlags {
  NONE = 0,              // 0000
  IS_FLYING = 1 << 0,    // 0001 (1)
  IS_POISONED = 1 << 1,  // 0010 (2)
  IS_SHIELDED = 1 << 2,  // 0100 (4)
  IS_SPEEDY = 1 << 3     // 1000 (8)
};

int main() {
  // Giving the player MULTIPLE states at the same time using Bitwise OR (|)
  unsigned int player_status = IS_FLYING | IS_SHIELDED;

  printf("--- Game Physics Engine (Bitmask Enum) ---\n\n");

  // Checking individual flags using Bitwise AND (&)
  if (player_status & IS_FLYING) {
    printf("[STATUS] Player is currently in the air!\n");
  }

  if (player_status & IS_POISONED) {
    printf("[STATUS] Player is taking poison damage!\n");
  }

  if (player_status & IS_SHIELDED) {
    printf("[STATUS] Player has an active shield! Immune to hits.\n");
  }

  // Printing the raw integer value of combined states
  printf("\nCombined integer value of player status: %u\n", player_status);

  return 0;
}
