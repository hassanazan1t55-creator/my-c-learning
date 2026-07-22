#include <stdio.h>

int main() {
  // Declaring Variables.
  int units;
  int total = 0;

  // Input from user.
  printf("Enter the number of units consumed: ");
  scanf("%d", &units);

  // Checking Conditions and set total amount to be paid.
  if (units < 100) {
    total = units * 10;
  } else if (units < 200) {
    total = (100 * 10) + ((units - 100) * 15);
  } else {
    total = (100 * 10) + (100 * 15) + ((units - 200) * 20);
  }

  // Print the total amount to be paid.
  printf("Total amount to be paid: Rs. %d\n", total);

  return 0;
}
