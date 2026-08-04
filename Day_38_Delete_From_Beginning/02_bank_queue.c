#include <stdio.h>
#include <stdlib.h>

// Node structure for bank accounts queue
struct AccountNode {
    int account_id;
    struct AccountNode *next;
};

int main() {
    // Setup initial bank queue: 101 -> 102
    struct AccountNode *head = (struct AccountNode *)malloc(sizeof(struct AccountNode));
    struct AccountNode *acc2 = (struct AccountNode *)malloc(sizeof(struct AccountNode));

    head->account_id = 101;
    head->next = acc2;

    acc2->account_id = 102;
    acc2->next = NULL;

    printf("Initial Bank Queue:\n");
    printf("Front Account ID: %d\n", head->account_id);
    printf("Next Account ID: %d\n\n", head->next->account_id);

    // Remove first account after serving customer
    struct AccountNode *temp = head; // Hold reference to first account
    head = head->next;               // Move front of queue to next account
    free(temp);                      // Delete served account from memory

    printf("Queue After Serving First Customer:\n");
    printf("New Front Account ID: %d\n", head->account_id);

    // Clean up remaining memory
    free(head);

    return 0;
}
