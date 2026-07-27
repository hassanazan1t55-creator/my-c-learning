#include <stdio.h>

int main() {
  // 3 Days expenses (Day 1, Day 2, Day 3).
  int expenses[3] = {500, 1200, 300};

  printf("Original Day 2 Expense: %d\n", expenses[1]);

  // Modifying an array element directly.
  expenses[1] = 800;
  printf("Updated Day 2 Expense: PKR %d\n\n", expenses[1]);

  // Performing Math operations with array values.
  int total = expenses[0] + expenses[1] + expenses[2];

  printf("--- Summary ---\n");
  printf("Day 1: PKR %d\n", expenses[0]);
  printf("Day 2: PKR %d\n", expenses[1]);
  printf("Day 3: PKR %d\n", expenses[2]);
  printf("----------------\n");
  printf("Total Expense: PKR %d\n", total);

  return 0;
}