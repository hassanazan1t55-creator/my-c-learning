#include <stdio.h>

int main() {
  // Declaring File Pointer.
  FILE* f;
  f = fopen("test.txt", "w");  // Opening File in Write Mode.

  // Checking for Error in Opening File.
  if (f == NULL) {
    printf("Error in opening file\n");
    return 1;
  }

  // Writing in File.
  fprintf(f, "Hello World\n");
  fprintf(f, "This is a test\n");

  printf("Sir Test Executed !\n");

  // Closing File.
  fclose(f);
  return 0;
}
