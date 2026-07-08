#include <stdio.h>

int main() {
  // Initialize Variables to store the two numbers and the total.  
  int number1, number2, total;
  
  // Prompt the user to enter two numbers and store them in the variables.
  printf("Enter number 1: ");
  scanf("%d", &number1);
  printf("Enter number 2: ");
  scanf("%d", &number2);
  
  // Calculate the total by multiplying the two numbers.
  total = number1 * number2;
  
  // Display the result to the user.  
  printf("Your Result is: %d\n", total);
  return 0;
}
