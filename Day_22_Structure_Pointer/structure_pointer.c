#include <stdio.h>

// Structure For Student Information.
struct Student {
  int rollNo;
  float marks;
};

int main() {
  // Declaring Structure Variable and Pointer.
  struct Student s1 = {101, 90.5};
  struct Student* ptr = &s1;

  // Displaying Student Information.
  printf("Roll No: %d\n", ptr->rollNo);
  printf("Marks: %.1f\n", ptr->marks);

  return 0;
}
