#include <stdio.h>

int main() {
  // Intializing a Variable.
  int lucky_number[3];
  int i;

  // Input from User and Storing in Variable.
  for (i = 0; i < 3; i++) {
    printf("Enter Lucky Number: %d ", i + 1);
    scanf("%d", &lucky_number[i]);
  }

  // Displaying the Result.
  for (i = 0; i < 3; i++) {
    printf("Lucky Number %d is: %d\n", i + 1, lucky_number[i]);
  }

  return 0;
}
