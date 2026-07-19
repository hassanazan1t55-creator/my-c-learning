#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

// Professional Function to print the linked list.
void printList(struct Node* ptr) {
  int count = 1;
  printf("--- Linked List Elements ---\n");
  while (ptr != NULL) {
    printf("Node %d: Data = %d, Address = %p\n", count, ptr->data, (void*)ptr);
    ptr = ptr->next;  // Moving to the next node.
    count++;
  }
}

int main() {
  // Allocating 3 nodes
  struct Node* head = (struct Node*)malloc(sizeof(struct Node));
  struct Node* second = (struct Node*)malloc(sizeof(struct Node));
  struct Node* third = (struct Node*)malloc(sizeof(struct Node));

  // Linking the nodes and assigning values.
  head->data = 100;
  head->next = second;

  second->data = 200;
  second->next = third;

  third->data = 300;
  third->next = NULL;

  // Calling our neat function.
  printList(head);

  // Freeing memory.
  free(head);
  free(second);
  free(third);

  return 0;
}
