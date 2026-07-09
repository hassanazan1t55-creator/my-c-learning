#include <stdio.h>
#include <stdlib.h>

// Professional Node Structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // --- STEP 1: INITIAL FIRST NODE (30) ---
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 30;
    head->next = NULL;

    // --- STEP 2: INSERT 20 AT THE BEGINNING ---
    struct Node *node20 = (struct Node *)malloc(sizeof(struct Node));
    node20->data = 20;
    node20->next = head; // Pointing hook to 30
    head = node20;       // Updating head pointer to 20

    // --- STEP 3: INSERT 10 AT THE BEGINNING ---
    struct Node *node10 = (struct Node *)malloc(sizeof(struct Node));
    node10->data = 10;
    node10->next = head; // Pointing hook to 20
    head = node10;       // Updating head pointer to 10

    // --- DISPLAY THE FINAL LINKED LIST ---
    struct Node *temp = head;
    printf("--- FINAL LINKED LIST (10 -> 20 -> 30) ---\n\n");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Freeing allocated dynamic memory
    free(head->next->next); // Freeing node 30
    free(head->next);       // Freeing node 20
    free(head);             // Freeing node 10

    return 0;
}
