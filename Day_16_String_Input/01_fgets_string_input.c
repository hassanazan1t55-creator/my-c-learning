#include <stdio.h>
int main() {
  // Initializing Character Array.
  char full_name[30];

  // Input From User Asking For Full Name.
  printf("Enter Your Full Name: ");
  fgets(full_name, sizeof(full_name), stdin);

  // Displaying Output.
  printf("Your Full Name is: %s\n", full_name);
  return 0;
}
