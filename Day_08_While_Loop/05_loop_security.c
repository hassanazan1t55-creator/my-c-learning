#include <stdio.h>

int main() {
  // Variable to store the user input.
  int number = 0;
 
  // Loop until the user enters 99.  
  while (number != 99) {
    printf("Enter a number (99 to exit): ");
    scanf("%d", &number);
    }
    // Check if the user entered 99 to exit the Loop. 
    printf("Correct Code! Access Granted.\n");
    printf("Program Closed....\n");
    return 0;
}
