#include <stdio.h>
#include <stdlib.h>  // Dynamic memory allocation

// 1. Defining the structure of a single Node.
struct Node {
  int data;           // To store the value.
  struct Node* next;  // Pointer to store the address of the NEXT node.
};

int main() {
  // 2. Creating a pointer for the first node Head.
  struct Node* head = NULL;

  // 3. Allocating memory dynamically in RAM using malloc.
  head = (struct Node*)malloc(sizeof(struct Node));

  // 4. Assigning value to the first node
  head->data = 45;
  head->next = NULL;  // Right now, there is no next node, so it points to NULL.

  // Printing the data using our pro %zu and standard %d format specifiers.
  printf("--- My First Linked List Node ---\n");
  printf("Node Data: %d\n", head->data);
  printf("Node Address: %p\n", (void*)head);
  printf("Next Node Address: %p\n", (void*)head->next);

  // 5. Freeing the memory.
  free(head);

  return 0;
}
