#include <stdio.h>
#include <stdlib.h>

// Professional Node Structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // --- 1. CREATING INITIAL LIST (10 -> 20) ---
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    second->data = 20;

    // Linking initial elements together
    head->next = second;
    second->next = NULL; // Currently 'second' is the last node

    // --- 2. CREATE NEW NODE TO INSERT AT END (30) ---
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 30;
    newNode->next = NULL; // Since it will be the final terminal node

    // --- 3. TRAVERSE TO THE ABSOLUTE LAST NODE ---
    struct Node *temp = head;
    
    // Loop stops exactly when temp points to the node whose next is NULL
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // --- 4. LINK THE LAST NODE TO NEW NODE ---
    // temp is currently at '20', updating its next link to point to '30'
    temp->next = newNode;

    // --- DISPLAY THE FINAL LINKED LIST ---
    struct Node *printTemp = head;
    printf("--- LINKED LIST AFTER INSERTION AT END ---\n\n");
    while (printTemp != NULL) {
        printf("%d -> ", printTemp->data);
        printTemp = printTemp->next;
    }
    printf("NULL\n");

    // Freeing memory allocations safely
    free(head);
    free(second);
    free(newNode);

    return 0;
}
