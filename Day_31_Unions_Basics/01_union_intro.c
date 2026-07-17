#include <stdio.h>

// Creating a basic Union
union Data {
  int micro_controller_id;  // 4 bytes
  char group_code;          // 1 byte
};

int main() {
  union Data sample;

  // Modern and professional %zu format specifier
  printf("Size of Union: %zu bytes\n", sizeof(sample));

  // Storing value in the first member
  sample.micro_controller_id = 105;
  printf("\nStored ID: %d\n", sample.micro_controller_id);

  // Storing value in the second member (Overwriting the memory!)
  sample.group_code = 'A';
  printf("Stored Group Code: %c\n", sample.group_code);

  // Let's see what happened to the ID now!
  printf("ID after changing Group Code: %d\n", sample.micro_controller_id);

  return 0;
}
