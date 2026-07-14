#include <stdio.h>

int main() {
  // Declaring Variables.
  FILE* fp;
  char text[100];  // To Store Text.

  fp = fopen("test.txt", "r");  // Opening File in Read Mode.

  // Checking File Opened or Not.
  if (fp == NULL) {
    printf("Error Opening File\n");
    return 1;
  }

  // Reading File Line by Line.
  while (fgets(text, sizeof(text), fp) != NULL) {
    printf("%s", text);
  }

  // Closing File.
  fclose(fp);
  return 0;
}
