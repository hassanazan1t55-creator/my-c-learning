#include <stdio.h>
#include <stdlib.h>

struct Node {
  struct Node* prev;
  int data;
  struct Node* next;
};

void printList(struct Node* head) {
  struct Node* temp = head;
  printf("Delete from End: NULL <-> ");
  while (temp != NULL) {
    printf("%d <-> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

// Function to delete the node at the end.
void deleteLastNode(struct Node* head) {
  if (head == NULL || head->next == NULL) return;

  struct Node* temp = head;
  // 1. Loop through the list to reach the very last node.
  while (temp->next != NULL) {
    temp = temp->next;
  }

  // 2. Get the second last node and set its next pointer to NULL.
  struct Node* previousNode = temp->prev;
  previousNode->next = NULL;

  free(temp);  // 3. Free the last node from memory.
}

int main() {
  struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
  struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));

  n1->prev = NULL; n1->data = 100; n1->next = n2;
  n2->prev = n1;   n2->data = 200; n2->next = NULL;
  
  printf("--- Original List ---\n");
  printList(n1);

  printf("\n--- Removing the last node (200) ---\n");
  deleteLastNode(n1);
  printList(n1);

  free(n1);
  return 0;
}
