#include <stdio.h>

int main() {
  char username[] = "admin1234";  // Array of characters.

  // Displaying Output.
  printf("Original Username: %s\n", username);

  // Modifying the username.
  username[0] = 'A';  // Changing the first character to 'A'.
  printf("Modified Username: %s\n", username);

  // Counting total characters manually using '\0' null character.
  int lenght = 0;
  for (int i = 0; username[i] != '\0'; i++) {
    lenght++;
  }

  // Displaying the total number of characters.
  printf("Total number of characters: %d\n", lenght);

  return 0;
}