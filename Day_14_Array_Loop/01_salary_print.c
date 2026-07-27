#include <stdio.h>

int main() {
  // Initializing an array.
  int salaries[3] = {50000, 60000, 70000};
  int s;

  // Accessing an array.
  for (s = 0; s < 3; s++) {
    printf("Salary %d: Rs. %d\n", s + 1, salaries[s]);
  }

  return 0;
}
