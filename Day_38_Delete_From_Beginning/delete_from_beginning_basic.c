#include <stdio.h>
#include <stdlib.h>

// Basic node structure
struct Node {
    int data;
    struct Node *next;
};

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
    // Setup initial list: 10 -> 20 -> 30
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Initial Linked List:\n");
    printList(head);

    // Delete the first node (10)
    struct Node *temp = head; // Keep reference to first node
    head = head->next;        // Shift head pointer to second node
    free(temp);               // Safely remove first node from memory

    printf("\nAfter Deleting First Node:\n");
    printList(head);

    // Free remaining memory
    free(second);
    free(third);

    return 0;
}
