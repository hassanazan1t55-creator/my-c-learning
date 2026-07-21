#include <stdio.h>
#include <stdlib.h>

struct Student {
  int roll_number;
  float marks;
};

int main() {
  struct Student* s1 = (struct Student*)malloc(sizeof(struct Student));

  // Assign values to the struct members.
  s1->roll_number = 10;
  s1->marks = 90.5;

  // Print the values of the struct members.
  printf("Roll Number: %d\n", s1->roll_number);
  printf("Marks: %.1f\n", s1->marks);

  // Free the memory allocated for the struct.
  free(s1);

  return 0;
}
