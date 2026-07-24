#include <stdio.h>

int main() {
  int secret_key = 12345;  // Variable to store the secret key.
  int user_input;  // Variable to store user input.
  
  // Loop until the user enters the correct secret key.
  do {
  // prompt the user to enter a key.
  printf("Enter the secret key: ");
  scanf("%d", &user_input);

  // Check if the user input matches the secret key.
  if (user_input == secret_key) {
    printf("Access Granted!\n");
  } else {
    printf("Access Denied! Try again.\n");
  
  }
  } while (user_input != secret_key); // Continue Looping until the correct key is entered.
  return 0;  // Return 0 to indicate successful execution.
  
}
