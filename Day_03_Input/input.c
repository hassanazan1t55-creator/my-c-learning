#include <stdio.h>

int main() {
  // Initialize a variable to store the height.  
  float height;
  
  // Prompt the user to enter their height.
  printf("Please Sir, enter your height here (e.g., 5.9): ");
  scanf("%f", &height);
  // Display the height entered by the user.  
  printf("Sir, your height is: %.1f\n", height);
  return 0;
}
