#include <stdio.h>
#include <stdlib.h>

struct Student {
  int rollNum;
  float marks;
};

int main() {
  int n;
  struct Student* ptr;
  FILE* fp;
  // Input From User to store Number of Students.
  printf("Enter Number of Students: ");
  scanf("%d", &n);

  // Allocating Memory for Structure Array.
  ptr = (struct Student*)malloc(n * sizeof(struct Student));

  // Checking if Memory is Allocated or not.
  if (ptr == NULL) {
    printf("Error Allocating Memory\n");
    return 1;
  }

  // Input From User to store Student Information.
  for (int i = 0; i < n; i++) {
    printf("Enter Roll Number of Student %d: ", i + 1);
    scanf("%d", &ptr[i].rollNum);
    printf("Enter Marks of Student %d: ", i + 1);
    scanf("%f", &ptr[i].marks);
  }

  // Opening File in Write Mode.
  fp = fopen("Students_Report.txt", "w");
  if (fp == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  // Writing to File.
  fprintf(fp, "==== Student Record ====\n");
  for (int i = 0; i < n; i++) {
    fprintf(fp, "Student %d -> Roll Num: %d, Marks: %.1f\n", i + 1, ptr[i].rollNum, ptr[i].marks);
  }

  printf("\nWriting to file completed successfully.\n");

  
  // Closing File and Freeing Memory.
  fclose(fp);
  free(ptr);

  return 0;
}
