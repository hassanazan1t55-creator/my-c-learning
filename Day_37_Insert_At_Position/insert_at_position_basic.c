#include <stdio.h>
#include <stdlib.h>

// Basic node structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // 1. Create initial list: 10 -> 30
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    third->data = 30;
    third->next = NULL;

    head->next = third; // Point 10 to 30

    printf("Initial List: %d -> %d -> NULL\n\n", head->data, head->next->data);

    // 2. Create a new node (20) to put at position 2
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 20;

    // 3. Move temp pointer to position 1 (right before where we insert)
    struct Node *temp = head;
    int position = 2;

    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    // 4. Link the new node in the middle
    newNode->next = temp->next; // Point 20 to 30 first
    temp->next = newNode;       // Point 10 to 20 second

    // 5. Print the updated list
    struct Node *printTemp = head;
    printf("Updated List: ");
    while (printTemp != NULL) {
        printf("%d -> ", printTemp->data);
        printTemp = printTemp->next;
    }
    printf("NULL\n");

    // Clean up memory
    free(head);
    free(newNode);
    free(third);

    return 0;
}
