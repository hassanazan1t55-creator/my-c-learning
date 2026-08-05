#include <stdio.h>
#include <stdlib.h>

struct ChatNode {
    int msg_id;
    struct ChatNode *next;
};

int main() {
    // Populating log timelines
    struct ChatNode *m1 = (struct ChatNode *)malloc(sizeof(struct ChatNode));
    struct ChatNode *m2 = (struct ChatNode *)malloc(sizeof(struct ChatNode));
    struct ChatNode *m3 = (struct ChatNode *)malloc(sizeof(struct ChatNode));

    m1->msg_id = 1; m1->next = m2;
    m2->msg_id = 2; m2->next = m3;
    m3->msg_id = 3; m3->next = NULL;

    printf("--- Original Chat History Order ---\n");
    printf("Msg %d -> Msg %d -> Msg %d -> NULL\n\n", m1->msg_id, m2->msg_id, m3->msg_id);

    // Reversing timeline linkages
    struct ChatNode *prev = NULL;
    struct ChatNode *current = m1;
    struct ChatNode *next = NULL;

    while (current != NULL) {
        next = current->next;     // Retain the upcoming message node pointer
        current->next = prev;     // Reposition pointer track backward
        prev = current;           // Shift previous baseline element marker
        current = next;           // Progress to next message tracking node
    }

    // Update head reference boundary pointer
    struct ChatNode *newHead = prev; 

    printf("--- Reversed Chat History Order ---\n");
    struct ChatNode *temp = newHead;
    while (temp != NULL) {
        printf("Msg %d -> ", temp->msg_id);
        temp = temp->next;
    }
    printf("NULL\n");

    // Clear operational structural logs from system memory
    free(m3); free(m2); free(m1);
    return 0;
}
