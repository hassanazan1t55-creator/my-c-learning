#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    struct Node *temp = head;
    printf("List: NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Put a new node at a specific position using 1-based index
void insertAtPosition(struct Node *head, int position, int newValue) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newValue;
    
    struct Node *temp = head;
    // Stop exactly one node before the spot where we want to insert
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("The position is invalid!\n");
        return;
    }

    // Connect all 4 links to fit the node right in the middle
    newNode->next = temp->next; // 1. Link new node forward to the next node
    newNode->prev = temp;       // 2. Link new node backward to the current node
    
    if (temp->next != NULL) {
        temp->next->prev = newNode; // 3. Link the next node backward to our new node
    }
    temp->next = newNode;       // 4. Link the current node forward to our new node
}

int main() {
    // Build a starting list with 10 and 30
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *tail = (struct Node *)malloc(sizeof(struct Node));
    
    head->prev = NULL; head->data = 10; head->next = tail;
    tail->prev = head; tail->data = 30; tail->next = NULL;
    
    printf("--- BEFORE MID-INSERT ---\n");
    printList(head);

    // Insert 20 at position 2 to sit right between 10 and 30
    insertAtPosition(head, 2, 20);
    printf("\n--- AFTER MID-INSERT (20 inserted at Pos 2) ---\n");
    printList(head);

    // Clean up all memory blocks
    free(head->next->next); 
    free(head->next);       
    free(head);             
    
    return 0;
}
