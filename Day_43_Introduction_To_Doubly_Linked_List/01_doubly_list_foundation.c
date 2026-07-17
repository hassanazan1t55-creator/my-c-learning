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
    // Create 3 separate nodes in memory
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    // Set up the first node links
    head->prev = NULL; 
    head->data = 10;
    head->next = second; 

    // Set up the second node links both ways
    second->prev = head; 
    second->data = 20;
    second->next = third; 

    // Set up the third node links and point next to NULL
    third->prev = second; 
    third->data = 30;
    third->next = NULL; 

    printf("--- My First Doubly Linked List ---\n");
    printForward(head);

    // Free the memory we allocated
    free(head);
    free(second);
    free(third);

    return 0;
}
