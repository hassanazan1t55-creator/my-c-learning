#include <stdio.h>
#include <stdlib.h>

struct Node {
  struct Node* prev;
  int data;
  struct Node* next;
};

void printList(struct Node* head) {
  struct Node* temp = head;
  printf("Delete from Head: NULL <-> ");
  while (temp != NULL) {
    printf("%d <-> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

// Function to delete the node at the start.
struct Node* deleteFirstNode(struct Node* head) {
  if (head == NULL) return NULL;

  struct Node* temp = head;  // Keep track of the old head to free it later.
  head = head->next;         // Move head to the next node.

  if (head != NULL) {
    head->prev = NULL;  // Set the prev pointer of the new head to NULL.
  }

  free(temp);   // Free the old head node from memory.
  return head;  // Return the new head pointer.
}

int main() {
  struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
  struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
  
  n1->prev = NULL; n1->data = 10; n1->next = n2;
  n2->prev = n1;   n2->data = 20; n2->next = NULL;
  
  struct Node* head = n1;
  printList(head);

  printf("\n--- Removing the first node (10) ---\n");
  head = deleteFirstNode(head);
  printList(head);

  free(head);
  return 0;
}
