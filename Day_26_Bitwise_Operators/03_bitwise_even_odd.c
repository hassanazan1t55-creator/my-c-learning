#include <stdio.h>

int main() {
  int num;

  // Input From User.
  printf("Enter any Number: ");
  scanf("%d", &num);

  // Checking Condition Use Bitwise Operator.
  if ((num & 1) == 1) {
    printf("%d is ODD Number.\n", num);
  } else {
    printf("%d is EVEN Number.\n", num);
  }

  return 0;
}
