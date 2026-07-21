#include <stdio.h>
#include <stdlib.h>

struct Student {
  int roll_number;
  float marks;
};

// Function for updating the marks.
void updateMarks(struct Student* s, float new_marks) {
  *s = (struct Student){s->roll_number, new_marks};
  printf("Marks updated for Roll Number %d to %.1f.\n", s->roll_number, new_marks);
}

int main() {
  struct Student* s1 = (struct Student*)malloc(sizeof(struct Student));

  // Assign values to the struct members.
  s1->roll_number = 10;
  s1->marks = 45.0;

  // Print the values of the struct mebers.
  printf("Roll Number: %d\n", s1->roll_number);
  printf("Marks: %.1f\n", s1->marks);

  // Function Calling.
  updateMarks(s1, 90.5);

  // Free the memory allocated for the struct.
  free(s1);

  return 0;
}
