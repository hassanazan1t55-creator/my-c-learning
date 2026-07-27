#include <stdio.h>

int main() {
  // Variable Declaration.
  int marks[5];
  int sum = 0;
  float average;

  // Marks Input and Summation.
  for (int i = 0; i < 5; i++) {
    printf("Enter marks for student %d: ", i + 1);
    scanf("%d", &marks[i]);
    sum = sum + marks[i];
  }

  // Average Calculation and Printing.
  average = sum / 5.0;
  printf("Average marks: %.2f\n", average);

  return 0;
}
