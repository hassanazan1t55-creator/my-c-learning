#include <stdio.h>

int main() {
  // Declaring Variables.
  int salary;
  float total = 0.0;

  // Input from user to enter salary.
  printf("Enter your salary: ");
  scanf("%d", &salary);

  // Checking conditions and apply Tax.
  if (salary > 100000) {
    total = 2500 + (salary - 100000) * 0.10;
    printf("Total Tax: %.1f", total);
  } else if (salary > 50000) {
    total = (salary - 50000) * 0.05;
    printf("Total Tax: %.1f", total);
  } else {
    printf("Total Tax: 0");
  }

  return 0;
}
