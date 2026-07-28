#include <stdio.h>
#include <string.h>  // for string functions.  

int main() {
  // Declaring Variables.
  char fav_coding[] = "C Language";  
  char copy_coding[20];  
 
 strcpy(copy_coding, fav_coding);  // copying fav_coding to copy_coding.

  int length = strlen(copy_coding);  // finding Length of copy_coding.

  // Displaying Output.
  printf("Copy Coding Name is: %s\n", copy_coding);
  printf("Length of Copy Coding Name is: %d\n", length);

  return 0;
}
