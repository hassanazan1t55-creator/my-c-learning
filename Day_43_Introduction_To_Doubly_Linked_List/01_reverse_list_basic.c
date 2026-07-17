#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

void printForward(struct Node *head) {
    struct Node *temp = head;
    printf("Forward: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Allocate dynamic heap memory for individual node components
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    // Configure structural linkages for the first node element
    head->prev = NULL;
    head->data = 10;
    head->next = second;

    // Link the central node forward and backward symmetrically
    second->prev = head;
    second->data = 20;
    second->next = third;

    // Terminate structural pathways safely at the last node element
    third->prev = second;
    third->data = 30;
    third->next = NULL;

    printf("--- My First Doubly Linked List ---\n");
    printForward(head);

    // Clean up allocated dynamic system resources
    free(head);
    free(second);
    free(third);

    return 0;
}
