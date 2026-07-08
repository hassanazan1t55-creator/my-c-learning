#include <stdio.h>

int main() {
  // Initialize the variable to store the age.  
  int age_checker;
  
  // Prompt the user to enter their age.
  printf("Enter your age: ");
  scanf("%d", &age_checker);
  
  // Check if the user is 18 or older and print the oppropriate message.
  if (age_checker >= 18) {
  printf("You can make CNIC and License\n");
  } else {
  printf("You are small boy now\n");
  }
  return 0;    
}
