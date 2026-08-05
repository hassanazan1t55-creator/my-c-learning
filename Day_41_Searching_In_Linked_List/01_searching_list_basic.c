#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // For boolean flags (true/false)

// Professional Node Structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // Initial setup: 10 -> 20 -> 30 -> NULL
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10; 
    head->next = second;

    second->data = 20; 
    second->next = third;

    third->data = 30; 
    third->next = NULL;

    // Searching logic
    int searchItem = 20; // Target item to search
    struct Node *temp = head;
    bool found = false;

    while (temp != NULL) {
        if (temp->data == searchItem) {
            found = true; // Item located!
            break;        // Exit loop early
        }
        temp = temp->next; // Move to the next node
    }

    // Result Output
    if (found == true) {
        printf("RESULT: %d is present in the list!\n", searchItem);
    } else {
        printf("RESULT: %d was not found in the list!\n", searchItem);
    }

    // Free memory
    free(head);
    free(second);
    free(third);

    return 0;
}
