#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

void printForward(struct Node *head) {
    struct Node *temp = head;
    printf("Forward path: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printBackward(struct Node *tail) {
    struct Node *temp = tail;
    printf("Reverse gear: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev; 
    }
    printf("NULL\n");
}

int main() {
    // Allocate the nodes
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));

    // Link everything together two ways
    n1->prev = NULL; n1->data = 10; n1->next = n2;
    n2->prev = n1;   n2->data = 20; n2->next = n3; 
    n3->prev = n2;   n3->data = 30; n3->next = NULL; 

    printf("--- Traversing Both Directions ---\n");
    printForward(n1);  
    printBackward(n3); 

    printf("\n--- Searching In Doubly List ---\n");
    int itemToFind = 20;
    struct Node *temp = n1;
    bool found = false;

    // Loop through the list to look for the number
    while (temp != NULL) {
        if (temp->data == itemToFind) {
            found = true;
            break;
        }
        temp = temp->next;
    }

    if (found) {
        printf("Good news! %d is found in the Doubly List!\n", itemToFind);
    } else {
        printf("Sorry! %d is not in the list.\n", itemToFind);
    }

    // Free the memory
    free(n1); free(n2); free(n3);

    return 0;
}
