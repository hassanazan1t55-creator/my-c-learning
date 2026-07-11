#include <stdio.h>
#include <stdlib.h>

// Professional Node Structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // Initial List (10 -> 30)
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    third->data = 30;
    third->next = NULL;

    head->next = third; // 10 points directly to 30

    printf("--- INITIAL LINKED LIST ---\n");
    printf("%d -> %d -> NULL\n\n", head->data, head->next->data);

    // CREATE NEW NODE (20) TO INSERT AT POSITION 2
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 20;

    // Traverse to Position 1 
    struct Node *temp = head;
    int position = 2;

    // Loop stops at (position - 1) which is Position 1 (head)
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    // LINKING THE MIDDLE NODE (The Two Magic Steps)
    // Step A: Point new node (20) to the next node (30) first to prevent memory leak
    newNode->next = temp->next;

    // Step B: Point current node (10) to the new node (20)
    temp->next = newNode;

    // DISPLAY THE FINAL LINKED LIST
    struct Node *printTemp = head;
    printf("--- LINKED LIST AFTER INSERTING IN THE MIDDLE ---\n\n");
    while (printTemp != NULL) {
        printf("%d -> ", printTemp->data);
        printTemp = printTemp->next;
    }
    printf("NULL\n");

    // Freeing memory allocations safely
    free(head);
    free(newNode);
    free(third);

    return 0;
}
