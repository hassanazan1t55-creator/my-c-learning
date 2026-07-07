#include <stdio.h>
#include <stdlib.h> // Required for dynamic memory allocation (malloc)

// 1. Designing the template for a train compartment (Node)
struct Node {
    int data;            // To store the actual value
    struct Node *next;   // Pointer to hold the memory address of the next node
};

int main() {
    // 2. Allocating a dynamic node space in RAM and passing control to 'head'
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));

    // Setting data inside the dynamic block
    head->data = 45;     // Storing data value
    head->next = NULL;   // No node exists ahead yet, so we mark it as NULL

    // 3. Printing values to verify layout tracking
    printf("--- LINKED LIST NODE START ---\n");
    printf("Node Data: %d\n", head->data);
    printf("Next Node Address: %p (NULL means the chain ends here)\n", head->next);

    // Freeing memory to avoid leaks
    free(head);

    return 0;
}
