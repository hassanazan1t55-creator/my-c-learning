#include <stdio.h>
// Structure for Student Information.
struct Student {
  int roll_num;
  float marks;
};

int main() {
  struct Student S1;  // Creating Structure Object.

  // Assigning Values.
  S1.roll_num = 12;
  S1.marks = 88.5;

  // Displaying Student Information.
  printf("Roll Number: %d\n", S1.roll_num);
  printf("Marks: %.1f\n", S1.marks);

  return 0;
}
