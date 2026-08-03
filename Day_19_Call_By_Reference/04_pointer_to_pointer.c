#include <stdio.h>

int main() {
  int secretCode = 1243;
  // Single pointer to hold the address of secretCode
  int* ptr = &secretCode;
  // Double pointer to hold the address of ptr
  int** dptr = &ptr;

  printf("==== Pointer to Pointer Example ====\n");
  printf("The Value of Secret Code is: %d\n", secretCode);
  printf("The Value of Single Pointer is: %d\n", *ptr);
  printf("The Value of Double Pointer is: %d\n", **dptr);

  printf("==== Memory Addresses Chain ====\n");
  printf("The Address of Secret Code is: %p\n", (void*)&secretCode);
  printf("The Address stored in Single Pointer is: %p\n", (void*)ptr);
  printf("The Address stored in Double Pointer is: %p\n", (void*)dptr);
  printf("The Address of Single Pointer is: %p\n", (void*)&ptr);
  printf("The Address of Double Pointer is: %p\n", (void*)&dptr);

  return 0;
}
