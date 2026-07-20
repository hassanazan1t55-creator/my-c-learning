#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

// Function to print the list.
void printList(struct Node *head) {
    struct Node *temp = head;
    printf("Current List: NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// 1. Delete the first node.
struct Node* deleteAtHead(struct Node *head) {
    if (head == NULL) return NULL;
    struct Node *temp = head; // Keep track of old head.
    head = head->next;        // Shift head to the next node.
    
    if (head != NULL) {
        head->prev = NULL;    // Set the new head's prev pointer to NULL.
    }
    free(temp);
    return head;
}

// 2. Delete the last node.
void deleteAtEnd(struct Node *head) {
    if (head == NULL || head->next == NULL) return;
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;    // Go to the last node.
    }
    
    struct Node *previousNode = temp->prev; // Get the second last node.
    previousNode->next = NULL;              // Set its next pointer to NULL.
    free(temp);
}

// 3. Delete a node from a specific position.
void deleteAtPosition(struct Node *head, int position) {
    if (head == NULL) return;
    struct Node *temp = head;
    
    // Jump straight to the node we want to remove.
    for (int i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) return;
    
    // Connect the previous node's next link to the next node's address.
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    // Connect the next node's prev link to the previous node's address.
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    free(temp);
}

int main() {
    // Creating 5 nodes: 10 <-> 20 <-> 30 <-> 40 <-> 50.
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n5 = (struct Node *)malloc(sizeof(struct Node));
    
    n1->prev = NULL; n1->data = 10; n1->next = n2;
    n2->prev = n1;   n2->data = 20; n2->next = n3;
    n3->prev = n2;   n3->data = 30; n3->next = n4;
    n4->prev = n3;   n4->data = 40; n4->next = n5;
    n5->prev = n4;   n5->data = 50; n5->next = NULL;
    
    struct Node *head = n1;
    printf("=== DOUBLY LINKED LIST DELETION PROGRAMS ===\n\n");
    printList(head);
    printf("\n");
    
    //  Remove 10 from the start.
    head = deleteAtHead(head);
    printf("After Deleting Head (10 Removed):\n");
    printList(head);
    printf("\n");
    
    //  Remove 50 from the end.
    deleteAtEnd(head);
    printf("After Deleting End (50 Removed):\n");
    printList(head);
    printf("\n");
    
    //  Remove 30 from position 2.
    deleteAtPosition(head, 2);
    printf("After Deleting Position 2 (30 Removed):\n");
    printList(head);
    printf("\n");
    
    printf("=== FINAL OUTPUT ===\n");
    printList(head); 
    
    // Free remaining nodes.
    free(n4);
    free(n2);
    return 0;
}
