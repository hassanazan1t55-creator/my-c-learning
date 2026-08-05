#include <stdio.h>
#include <stdlib.h>

struct PriceNode {
    int price;
    struct PriceNode *next;
};

int main() {
    // Tracking sequential prices
    struct PriceNode *p1 = (struct PriceNode *)malloc(sizeof(struct PriceNode));
    struct PriceNode *p2 = (struct PriceNode *)malloc(sizeof(struct PriceNode));
    struct PriceNode *p3 = (struct PriceNode *)malloc(sizeof(struct PriceNode));

    p1->price = 90; p1->next = p2;
    p2->price = 95; p2->next = p3;
    p3->price = 99; p3->next = NULL;

    printf("--- Original Price Data Log ---\n");
    printf("$%d -> $%d -> $%d -> NULL\n\n", p1->price, p2->price, p3->price);

    // Inverting pointer directions iteratively
    struct PriceNode *prev = NULL;
    struct PriceNode *current = p1;
    struct PriceNode *next = NULL;

    while (current != NULL) {
        next = current->next;     // Retain validation pathway link
        current->next = prev;     // Reverse index flow relationship map
        prev = current;           // Advance trailing reference allocation
        current = next;           // Advance processing context pointer
    }

    struct PriceNode *newHead = prev;

    printf("--- Reversed Price Data Log ---\n");
    struct PriceNode *temp = newHead;
    while (temp != NULL) {
        printf("$%d -> ", temp->price);
        temp = temp->next;
    }
    printf("NULL\n");

    // Reclaim dynamic memory resources cleanly
    free(p3); free(p2); free(p1);
    return 0;
}
