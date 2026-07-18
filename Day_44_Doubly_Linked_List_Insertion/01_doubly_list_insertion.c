#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Case 1: Add a new node right at the start
struct Node* insertAtHead(struct Node *head, int newValue) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newValue;
    newNode->prev = NULL;
    newNode->next = head; // Link the new node forward to the old head

    if (head != NULL) {
        head->prev = newNode; // Link the old head backward to the new node
    }
    return newNode; // The new node is our new head now
}

// Case 2: Add a new node at the very end
void insertAtEnd(struct Node *head, int newValue) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newValue;
    newNode->next = NULL;
    
    struct Node *temp = head;
    // Loop until we reach the last node in the list
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode; // Link the old last node forward to the new node
    newNode->prev = temp; // Link the new node backward to the old last node
}

int main() {
    // Start with a single node in the list holding 20
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->prev = NULL; 
    head->data = 20; 
    head->next = NULL;
    
    printf("--- ORIGINAL LIST ---\n");
    printList(head);

    // Test putting 10 at the start
    head = insertAtHead(head, 10);
    printf("\n--- AFTER INSERT AT HEAD (10) ---\n");
    printList(head);

    // Test putting 30 at the end
    insertAtEnd(head, 30);
    printf("\n--- AFTER INSERT AT END (30) ---\n");
    printList(head);

    // Free the memory slots one by one
    free(head->next->next); 
    free(head->next);       
    free(head);             
    
    return 0;
}
