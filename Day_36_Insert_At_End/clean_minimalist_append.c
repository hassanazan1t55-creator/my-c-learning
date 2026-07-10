#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    // --- 1. HEAD NODE (10) ---
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL; 

    // --- 2. INSERT 20 AT THE END ---
    struct Node *newNode1 = (struct Node *)malloc(sizeof(struct Node));
    newNode1->data = 20;
    newNode1->next = NULL;

    struct Node *temp = head; 
    while (temp->next != NULL) {
        temp = temp->next; // Loop stops when temp reaches node 10
    }
    temp->next = newNode1; // Links node 20 directly after 10

    // --- 3. INSERT 30 AT THE END ---
    struct Node *newNode2 = (struct Node *)malloc(sizeof(struct Node));
    newNode2->data = 30;
    newNode2->next = NULL;

    temp = head; // Resetting path finder pointer back to start
    while (temp->next != NULL) {
        temp = temp->next; // Loop traverses through 10 and stops at 20
    }
    temp->next = newNode2; // Links node 30 directly after 20

    // --- DISPLAY THE TRAVERSAL ---
    struct Node *printPtr = head;
    printf("--- CLEAN LINKED LIST ---\n\n");
    while (printPtr != NULL) {
        printf("%d -> ", printPtr->data);
        printPtr = printPtr->next;
    }
    printf("NULL\n");

    // Freeing memory allocations safely
    free(head);
    free(newNode1);
    free(newNode2);

    return 0;
}
