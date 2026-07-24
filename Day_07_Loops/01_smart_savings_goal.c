#include <stdio.h>

int main() {
  // Declaring Variables.
  float total_pkr = 0.0;
  float user_saving = 0.0;
  int day_count = 0;

  // Checking conditions using while loop.
  while (total_pkr < 5000) {
    day_count++;

    // Input from User.
    printf("Enter your saving for day %d: ", day_count);
    scanf("%f", &user_saving);

    // Negative input check.
    if (user_saving < 0) {
      printf("Invalid Input Please Enter a Positive Number.\n");
      continue;
    }

    // Calculating total_pkr.
    total_pkr += user_saving;
    printf("\nCurrent Total Saved: %.1f\n", total_pkr);
  }

  // Displaying Output.
  printf("Goal Achieved in %d days.\n", day_count);

  return 0;
}