#include <stdio.h>

void evaluateStudent(char name[], float marks, float total_marks) {
  float percentage = (marks / total_marks) * 100.0;

  // Displaying Output.
  printf("Name: %s\n", name);
  printf("Marks: %.2f\n", marks);
  printf("Total Marks: %.2f\n", total_marks);
  printf("Percentage: %.2f%%\n", percentage);

  // Checking Condition.
  if (percentage >= 80.0) {
    printf("Grade: A\n");
  } else if (percentage >= 60.0) {
    printf("Grade: B\n");
  } else if (percentage >= 40.0) {
    printf("Grade: C\n");
  } else {
    printf("Grade: F\n");
  }

  printf("===============================\n\n");
}

int main() {
  // Dynamic Function call for different student.
  evaluateStudent("Ali", 425.0, 500.0);
  evaluateStudent("Hamza", 340.0, 500.0);
  evaluateStudent("Usman", 270.0, 500.0);

  return 0;
}
