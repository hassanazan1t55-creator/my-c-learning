#include <stdio.h>
#include <stdlib.h>

// Professional Node Structure
struct Node {
    int data;
    struct Node *next;
};

// Professional Function to insert a node at the beginning
struct Node* insertAtBeginning(struct Node *head, int new_data) {
    // Allocate memory for the new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    // Assign data
    newNode->data = new_data;

    // Point new node's next to the current head
    newNode->next = head;

    // Return the new node as the new head address
    return newNode;
}

// Function to print the linked list
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // --- CREATING AN INITIAL LINKED LIST (20 -> 30) ---
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = NULL;

    printf("--- INITIAL LINKED LIST ---\n");
    printList(head);

    // --- INSERTING 10 AT THE BEGINNING ---
    head = insertAtBeginning(head, 10);

    printf("\n--- AFTER INSERTION AT BEGINNING ---\n");
    printList(head);

    // Freeing allocated memory sequential blocks
    free(second);      // Node containing 30
    free(head->next); // Node containing 20
    free(head);       // Node containing 10

    return 0;
}
