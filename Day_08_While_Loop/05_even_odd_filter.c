#include <stdio.h>

int main() {
  // Initialize variables.
  int limit;  // Variable to store the limit for the Loop.
  int i = 1;  // Variable to store the current number in the Loop.

  // Prompt the user to enter a limit for the Loop.
  printf("Enter a limit for the Loop: ");
  scanf("%d", &limit);

  // Loop from 1 to the specified Limit.
  while (i <= limit) {
    // Checking if the current number is even or odd.
    if (i % 2 == 0) {
      printf("%d is even\n", i);
    } else {
      printf("%d is odd\n", i);
    }
    i++;  // Increment the current number by 1.
  }
  return 0;  // Return 0 to indicate successful execution of the program.
}
