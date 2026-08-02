#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    // Initial head node containing 20
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 20;
    head->next = NULL;

    printf("Initial Head Data: %d\n", head->data);

    // FITTING NEW NODE (10) AT THE BEGINNING
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 10;

    // Connect the new node's hook to the old head address
    newNode->next = head; 

    // Shift the head pointer control to the new node
    head = newNode;       

    printf("New Head Data after insertion: %d\n", head->data);
    printf("Next Node Data via Head Pointer: %d\n", head->next->data);

    // Freeing memory blocks safely
    free(head->next);
    free(head);

    return 0;
}
