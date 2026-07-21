#include <stdio.h>
#include <stdlib.h>

// Structure for student information.
struct Student {
  int roll_number;
  float marks;
};

// Function for Checking the student pass or fail.
void checkResult(struct Student* s) {
  if (s->marks >= 50.0) {
    printf("Roll Number: %d Pass with %.1f Marks.\n", s->roll_number, s->marks);
  } else {
    printf("Roll Number: %d Fail with %.1f Marks.\n", s->roll_number, s->marks);
  }
}

int main() {
  struct Student* s1 = (struct Student*)malloc(sizeof(struct Student));
  struct Student* s2 = (struct Student*)malloc(sizeof(struct Student));

  // Assign values to the struct members.
  s1->roll_number = 10;
  s1->marks = 75.5;
  s2->roll_number = 20;
  s2->marks = 42.0;

  // Function Call.
  checkResult(s1);
  checkResult(s2);

  // Freeing the memory allocated for the struct.
  free(s1);
  free(s2);

  return 0;
}
