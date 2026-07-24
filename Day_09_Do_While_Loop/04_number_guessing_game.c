#include <stdio.h>

int main() {
  // Declaring Variables.
  int secretNumber = 7;
  int user_input;
  int attempts = 0;

  printf("Guess a Number 1 to 10:\n");
  // Do-While Loop.
  do {
    printf("Enter a Number: ");
    scanf("%d", &user_input);
    attempts++;

    // Logic Hints.
    if (user_input < secretNumber) {
      printf("Too Low! Try Again.\n\n");
    } else if (user_input > secretNumber) {
      printf("Too High! Try Again.\n\n");
    }
  } while (user_input != secretNumber);  // Exit Condition.

  // Displaying Output.
  printf("\nBINGO! You guessed it right!\n");
  printf("Total Attempts Taken: %d\n", attempts);

  return 0;
}