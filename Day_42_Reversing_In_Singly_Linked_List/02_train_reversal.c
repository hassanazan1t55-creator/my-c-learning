#include <stdio.h>
#include <stdlib.h>

struct TrainNode {
    char name;
    struct TrainNode *next;
};

int main() {
    // Creating initial train structure
    struct TrainNode *a = (struct TrainNode *)malloc(sizeof(struct TrainNode));
    struct TrainNode *b = (struct TrainNode *)malloc(sizeof(struct TrainNode));
    struct TrainNode *c = (struct TrainNode *)malloc(sizeof(struct TrainNode));

    a->name = 'A'; a->next = b;
    b->name = 'B'; b->next = c;
    c->name = 'C'; c->next = NULL;

    printf("--- Original Train Layout ---\n");
    printf("%c -> %c -> %c -> NULL\n\n", a->name, b->name, c->name);

    // Shifting hook couplings using three pointers
    struct TrainNode *prev = NULL;
    struct TrainNode *current = a;
    struct TrainNode *next = NULL;

    while (current != NULL) {
        next = current->next;     // Save forward tracking location
        current->next = prev;     // Redirect coupling connection backward
        prev = current;           // Advance the trailing marker pointer
        current = next;           // Advance the processing target pointer
    }

    // Set the terminal node as the new locomotive engine head
    struct TrainNode *newHead = prev; 

    printf("--- Reversed Train Layout ---\n");
    struct TrainNode *temp = newHead;
    while (temp != NULL) {
        printf("%c -> ", temp->name);
        temp = temp->next;
    }
    printf("NULL\n");

    // Deallocate node structures from heap memory
    free(c); free(b); free(a);
    return 0;
}
