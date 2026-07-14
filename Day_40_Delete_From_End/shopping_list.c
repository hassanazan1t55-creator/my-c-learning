#include <stdio.h>
#include <stdlib.h>

// Node structure for Grocery Items
struct ShoppingNode {
    int item_id;
    struct ShoppingNode *next;
};

// Print utility function
void printList(struct ShoppingNode *head) {
    struct ShoppingNode *temp = head;
    while (temp != NULL) {
        printf("Item %d -> ", temp->item_id);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Initial list: 101 -> 102 -> 103 -> NULL
    struct ShoppingNode *item1 = (struct ShoppingNode *)malloc(sizeof(struct ShoppingNode));
    struct ShoppingNode *item2 = (struct ShoppingNode *)malloc(sizeof(struct ShoppingNode));
    struct ShoppingNode *item3 = (struct ShoppingNode *)malloc(sizeof(struct ShoppingNode));

    item1->item_id = 101; 
    item1->next = item2;

    item2->item_id = 102; 
    item2->next = item3;

    item3->item_id = 103; 
    item3->next = NULL;

    printf("Original Shopping List:\n");
    printList(item1);

    // Remove last item (103)
    struct ShoppingNode *temp = item1;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    struct ShoppingNode *toDelete = temp->next;
    temp->next = NULL;
    free(toDelete);

    printf("\nAfter Removing Last Item:\n");
    printList(item1);

    // Clean up memory
    free(item1);
    free(item2);

    return 0;
}
