#include <stdio.h>

int main() {
  // Initialize a variable to store a User Input.
  int num;
  
  // Prompt the user to enter a number for which they want to print the
  // multiplication table.
  printf("Enter a number to print its multiplication table: ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
  }
  return 0;
}
