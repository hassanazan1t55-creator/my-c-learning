#include <stdio.h>

// Function For Giving Bonus.
void giveBonus(int* salary) {
    *salary = *salary * 2; 
}
int main() {
  int salary = 50000;
  // Calling Function.
  giveBonus(&salary);

  // Displaying Updated Salary.
  printf("Updated Salary: %d", salary);

  return 0;
}
