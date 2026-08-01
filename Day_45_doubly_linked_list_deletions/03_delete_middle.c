#include <stdio.h>
#include <stdlib.h>

struct Node {
  struct Node* prev;
  int data;
  struct Node* next;
};

void printList(struct Node* head) {
  struct Node* temp = head;
  printf("Delete from Middle: NULL <-> ");
  while (temp != NULL) {
    printf("%d <-> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

// Function to delete a node from a specific position.
void deleteMiddleNode(struct Node* head, int position) {
  struct Node* temp = head;

  // Move to the node that we want to delete.
  for (int i = 1; i < position && temp != NULL; i++) {
    temp = temp->next;
  }

  if (temp == NULL) return;

  // Link the previous node's next pointer to the next node.
  if (temp->prev != NULL) {
    temp->prev->next = temp->next;
  }

  // Link the next node's prev pointer to the previous node.
  if (temp->next != NULL) {
    temp->next->prev = temp->prev;
  }

  free(temp);  // Free the target node from memory.
}

int main() {
  struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
  struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
  struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));

  n1->prev = NULL; n1->data = 50; n1->next = n2;
  n2->prev = n1;   n2->data = 60; n2->next = n3; // Position 2.
  n3->prev = n2;   n3->data = 70; n3->next = NULL;
    
  printf("--- Original List ---\n");
  printList(n1);

  printf("\n--- Removing node at position 2 (60) ---\n");
  deleteMiddleNode(n1, 2);
  printList(n1);

  free(n3);
  free(n1);
  return 0;
}
