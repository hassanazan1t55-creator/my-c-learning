#include <stdio.h>

// Structure For Student Information.
struct Student {
  int rollNum;
  float marks;
};

// Function To Input Student Data.
void inputStudentData(struct Student* s) {
  printf("Enter Roll Number: ");
  scanf("%d", &s->rollNum);
  printf("Enter Marks: ");
  scanf("%f", &s->marks);
}

int main() {
  struct Student s1;

  // Input From User Using Function.
  printf("==========================================\n");
  inputStudentData(&s1);  // Passing Address of Structure.

  // Displaying Output.
  printf("==========================================\n");
  printf("Roll Number: %d\n", s1.rollNum);
  printf("Marks: %.1f\n", s1.marks);
  printf("==========================================\n");

  return 0;
}
