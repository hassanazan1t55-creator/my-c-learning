#include <stdio.h>

int main() {
  // Declaring Variables.
  int user_input;
  const int ATM_KEY = 1234;
  int attempts = 0;
  int max_attempts = 3;

  // Checking the User Input.
  while (attempts < max_attempts) {
    printf("Enter the PIN: ");
    scanf("%d", &user_input);

    attempts++;

    // Checking the PIN.
    if (user_input == ATM_KEY) {
      printf("Access Granted!\n");
      break;
    } else {
      printf("Wrong PIN. Please try again.\n");
    }

    if (attempts < max_attempts) {
      printf("Remaining Attempts: %d\n\n", max_attempts - attempts);
    } else {
      printf("Maximum attempts reached. Card Blocked!\n");
    }
  }

  return 0;
}