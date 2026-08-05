#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize the initial list sequence
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10; 
    head->next = second;

    second->data = 20; 
    second->next = third;

    third->data = 30; 
    third->next = NULL;

    printf("--- Original Linked List ---\n");
    printList(head);

    // Core Iterative Reversal Logic Using Three Pointers
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;     // Temporarily store the pointer to the next node
        current->next = prev;     // Reverse the current node's pointer direction backward
        prev = current;           // Move the previous tracker forward to the current node
        current = next;           // Advance the current tracker to the next stored node
    }

    // Update the head pointer anchor to the last processed node
    head = prev;

    printf("\n--- Reversed Linked List ---\n");
    printList(head);

    // Deallocate heap memory safely
    free(third);
    free(second);
    free(head);

    return 0;
}
