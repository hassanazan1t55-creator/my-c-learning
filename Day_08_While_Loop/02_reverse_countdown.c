#include <stdio.h>

int main() {
  // Initialize a number variable.
  int i;       // Initialize a variable to to use in the while loop.
  int number;  // Initialize a variable to store the user input.
  // Prompt the user to enter a number.
  printf("Enter a number: ");
  scanf("%d", &number);
  // Use a while loop to print number reversed.
  i = number;
  while (i > 0) {
    printf("Reversed Number is: %d\n", i);
    i--;
  }
  // Print "Blast off!" after the loop ends.
  printf("Blast off!\n");
  return 0;
}
