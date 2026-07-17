#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *prev; 
    int data;
    struct Node *next; 
};

void printForward(struct Node *head) {
    struct Node *temp = head;
    printf("Forward Gear (Ahead): ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printBackward(struct Node *tail) {
    struct Node *temp = tail;
    printf("Reverse Gear (Back): ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev; 
    }
    printf("NULL\n");
}

int main() {
    // Make 3 nodes in memory
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));

    // Connect the first node forward
    node1->prev = NULL;   
    node1->data = 10;
    node1->next = node2;  

    // Connect the second node forward and backward
    node2->prev = node1;  
    node2->data = 20;
    node2->next = node3;  

    // Connect the third node backward and end the list
    node3->prev = node2;  
    node3->data = 30;
    node3->next = NULL;   

    printf("--- Testing Doubly Linked List Road ---\n\n");
    printForward(node1);
    printf("\n");
    printBackward(node3);

    // Clean up memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
