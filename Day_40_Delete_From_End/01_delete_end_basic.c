#include <stdio.h>
#include <stdlib.h>

// Professional Node Structure
struct Node {
    int data;
    struct Node *next;
};

// Function to print the linked list from any starting node
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Initial setup: 10 -> 20 -> 30 -> NULL
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

    // Delete last node (30)
    struct Node *temp = head;

    // Loop until temp reaches second-last node (20)
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    struct Node *toDelete = temp->next; // Hold address of last node (30)
    temp->next = NULL;                 // Make node 20 the new end node
    free(toDelete);                    // Free last node memory

    printf("\nAfter Deleting Last Node:\n");
    printList(head);

    // Clean up remaining memory
    free(head);
    free(second);

    return 0;
}
