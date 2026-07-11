#include <stdio.h>

int main() {
  char word[] = "Coding";  // Array of characters.

  // Displaying Original String.
  printf("Original String: %s\n", word);

  // Changing the characters.
  word[0] = 'C';  // Changing the first character to 'C'.
  word[1] = 'o';  // Changing the second character to 'o'.
  word[2] = 'd';  // Changing the third character to 'd'.
  word[3] = 'e';  // Changing the fourth character to 'e'.
  word[4] = 'r';  // Changing the fifth character to 'r'.

  // Displaying Modified String.
  printf("Modified String: %s\n", word);

  return 0;
}
