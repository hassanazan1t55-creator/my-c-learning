#include <stdio.h>
// Structure For Store Student Details.
struct Student {
  int roll_num;
  float marks;
};

// Function For Update Marks.
void updateMarks(struct Student* s, float newMarks) {
    s->marks = newMarks; 
}

int main() {
  struct Student s1 = {12, 34.5};

  printf("Original Marks: %.1f\n", s1.marks);

  // Calling Function For Update Marks.
  updateMarks(&s1, 95.5);

  // Displaying Output.
  printf("Roll Num: %d \n", s1.roll_num);
  printf("Updated Marks: %.1f\n", s1.marks);

  return 0;
}
