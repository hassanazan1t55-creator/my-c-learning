#include <stdio.h>

int main() {
  // Declaring File Variable.
  FILE* fp;

  fp = fopen("test.txt", "a");  // File open in Append Mode.

  // Checking if File is opened or not.
  if (fp == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  // Writing to File.
  fprintf(fp, "This line was appended to the file.\n");

  printf("Append operation completed successfully.\n");

  // Closing File.
  fclose(fp);

  return 0;
}
