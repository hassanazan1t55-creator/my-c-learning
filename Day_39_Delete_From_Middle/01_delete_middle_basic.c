#include <stdio.h>
#include <stdlib.h>

// Node structure
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
    // Creating 3 nodes: 10 -> 20 -> 30
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

    // Deleting position 2 (Node 20)
    int position = 2;
    struct Node *temp = head;

    // Loop to reach node before target
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    struct Node *toDelete = temp->next; // Catch node 20
    temp->next = toDelete->next;       // Bypass node 20 (connect 10 to 30)
    free(toDelete);                    // Free node 20 from RAM

    printf("\nAfter Deleting Node at Position 2:\n");
    printList(head);

    // Clean remaining memory
    free(head);
    free(third);

    return 0;
}
