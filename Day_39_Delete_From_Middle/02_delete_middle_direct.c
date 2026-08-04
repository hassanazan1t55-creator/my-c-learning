#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    // 3 Nodes: 10 -> 20 -> 30
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));

    node1->data = 10;
    node1->next = node2;

    node2->data = 20;
    node2->next = node3;

    node3->data = 30;
    node3->next = NULL;

    // Delete node 20 directly without loop
    struct Node *toDelete = node2;
    node1->next = node3; // Bypass node2
    free(toDelete);      // Delete node2 from RAM

    printf("Data after node1: %d\n", node1->next->data);

    // Clean remaining memory
    free(node1);
    free(node3);

    return 0;
}
