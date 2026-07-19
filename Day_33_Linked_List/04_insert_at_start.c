#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

// Function to print the list.
void printList(struct Node* ptr) {
  while (ptr != NULL) {
    printf("%d -> ", ptr->data);
    ptr = ptr->next;
  }
  printf("NULL\n");
}

// Function to insert a new node at the very beginning.
struct Node* insertAtFirst(struct Node* old_head, int new_data) {
  // Create a new node in RAM
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  // Assign the new data.
  new_node->data = new_data;

  // Link the new node to the old head.
  new_node->next = old_head;

  // This new node becomes the new head!.
  return new_node;
}

int main() {
  struct Node* head = (struct Node*)malloc(sizeof(struct Node));
  head->data = 50;
  head->next = NULL;

  printf("Original List:\n");
  printList(head);

  // Inserting 25 at the beginning.
  head = insertAtFirst(head, 25);

  // Inserting 12 at the very beginning again.
  head = insertAtFirst(head, 12);

  printf("\nList after inserting at start:\n");
  printList(head);

  // Freeing the allocated memory.
  free(head);
  return 0;
}
