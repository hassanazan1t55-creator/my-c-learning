#include <stdio.h>
#include <string.h>

int main() {
  char fullName[50];
  char role[20];

  // Input from User.
  printf("Enter your full name: ");
  fgets(fullName, sizeof(fullName), stdin);
  fullName[strcspn(fullName, "\n")] = 0;  // Remove newline character.

  // Input Role / Access Level.
  printf("Enter your Access Role: ");
  fgets(role, sizeof(role), stdin);
  role[strcspn(role, "\n")] = 0;  // Remove newline character.

  // Displaying Badge Details.
  printf("\n=== Badge Details ===\n");
  printf("Full Name: %s\n", fullName);
  printf("Role: %s\n", role);

  return 0;
}