#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    struct Node *temp = head;
    printf("Current List: NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// 1. Insert a new node right at the front (head)
struct Node* insertAtHead(struct Node *head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;
    
    if (head != NULL) {
        head->prev = newNode;
    }
    return newNode; 
}

// 2. Insert a new node at the absolute back (end)
void insertAtEnd(struct Node *head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (head == NULL) {
        return; 
    }
    
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next; 
    }
    
    temp->next = newNode;
    newNode->prev = temp;
}

// 3. Insert a new node anywhere in the middle position
void insertAtPosition(struct Node *head, int position, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    
    struct Node *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Position valid nahi hai!\n");
        return;
    }
    
    newNode->next = temp->next;
    newNode->prev = temp;
    
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

int main() {
    struct Node *head = NULL;
    printf("=== ULTIMATE DOUBLY INSERTION MASTER ===\n\n");

    // Put nodes at the front
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 10); 
    printf("After Inserting 10 and 20 at Head:\n");
    printList(head);
    printf("\n");

    // Put a node at the back
    insertAtEnd(head, 40); 
    printf("After Inserting 40 at End:\n");
    printList(head);
    printf("\n");

    // Put a node right in the middle at position 3
    insertAtPosition(head, 3, 30); 
    printf("After Inserting 30 at Position 3 (Middle):\n");
    printList(head);
    printf("\n");

    printf("=== FINAL PERFECT OUTPUT ===\n");
    printList(head);

    // Loop through the completed list to free every node perfectly
    struct Node *current = head;
    struct Node *nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    
    return 0;
}
