#include <stdio.h>
#include <string.h>  // For string functions.

int main() {
  char firstName[20] = "Azan ";
  char lastName[20] = "Hassan";

  // strlen() - Calculate Length of string.
  printf("First Name ki Length: %lu\n", strlen(firstName));

  // strcat() - Concatenate two strings.
  strcat(firstName, lastName);

  // Displaying Output.
  printf("Full Name (Combine hone ke baad): %s\n", firstName);

  return 0;
}
