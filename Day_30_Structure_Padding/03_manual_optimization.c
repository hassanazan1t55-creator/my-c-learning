#include <stdio.h>

// Bad Structure: Variables are mixed up andCauses heavy padding
struct BadBadge {
  char id1;    // 1 byte
  int points;  // 4 bytes
  char id2;    // 1 byte
};

// Good Structure: Variables sorted from biggest to smallest
struct GoodBadge {
  int points;  // 4 bytes
  char id1;    // 1 byte
  char id2;    // 1 byte
};

int main() {
  printf("Size of BadBadge (Mixed Order): %lu bytes\n",sizeof(struct BadBadge));
  printf("Size of GoodBadge (Sorted Order): %lu bytes\n", sizeof(struct GoodBadge));

  return 0;
}
