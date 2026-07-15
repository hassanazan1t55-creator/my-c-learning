#include <stdio.h>
#include <stdlib.h>

struct Student {
  int rollNum;
  float marks;
};

int main() {
  // Declaring Structure Pointer.
  struct Student *ptr;

  // Allocating Memory.
  ptr = (struct Student *)malloc(sizeof(struct Student));

  // Checking Memory Allocation.
  if (ptr == NULL) {
    printf("Memory Allocation Failed\n");
    return 1;
  }

  // Assigning Values Using Arrow Operator.
  ptr->rollNum = 12;
  ptr->marks = 98.5;

  // Displaying Dynamic Data.
  printf("Roll Number: %d\n", ptr->rollNum);
  printf("Marks: %.1f\n", ptr->marks);

  // Freeing Memory.
  free(ptr);

  return 0;
}
