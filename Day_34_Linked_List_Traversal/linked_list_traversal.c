#include <stdio.h>
#include <stdlib.h>

// Professional Node Structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // --- CREATING THREE NODES ---
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    // Assigning data and linking Node 1 -> Node 2
    head->data = 100;
    head->next = second;

    // Assigning data and linking Node 2 -> Node 3
    second->data = 200;
    second->next = third;

    // Assigning data and terminating the chain at Node 3
    third->data = 300;
    third->next = NULL;

    // --- TRAVERSING THE LINKED LIST ---
    struct Node *temp = head; // Temporary pointer starting at head

    printf("--- LINKED LIST TRAVERSAL ---\n\n");

    // Loop until the end of the list (NULL)
    while (temp != NULL) {
        printf("Node Value: %d\n", temp->data);
        temp = temp->next; // Move to the next node in the chain
    }

    printf("\nEnd of Linked List reached (NULL).\n");

    // Freeing memory allocations
    free(head);
    free(second);
    free(third);

    return 0;
}
