#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

int main() {
  // Creating 3 Nodes and Allocating Memory in RAM.
  struct Node* head = (struct Node*)malloc(sizeof(struct Node));
  struct Node* second = (struct Node*)malloc(sizeof(struct Node));
  struct Node* third = (struct Node*)malloc(sizeof(struct Node));

  // Assigning the data and LINKING the nodes together.
  head->data = 10;
  head->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  // Traversing the Linked List.
  int count = 0;
  struct Node* ptr = head;
  while (ptr != NULL) {
    printf("Node %d Data: %d\n", count + 1, ptr->data);
    ptr = ptr->next;
    count++;
  }

  // Freeing the allocated memory.
  free(head);
  free(second);
  free(third);

  return 0;
}
