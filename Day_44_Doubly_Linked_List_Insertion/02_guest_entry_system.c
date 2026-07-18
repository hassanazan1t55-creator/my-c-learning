#include <stdio.h>
#include <stdlib.h>

struct GuestNode {
    struct GuestNode *prev;
    int token_no;
    struct GuestNode *next;
};

void showGuests(struct GuestNode *head) {
    struct GuestNode *temp = head;
    printf("Gate Entry Order: NULL <-> ");
    while (temp != NULL) {
        printf("[Token %d] <-> ", temp->token_no);
        temp = temp->next;
    }
    printf("NULL\n");
}

// VIP Entry: Put a guest right at the front of the line
struct GuestNode* addVIP(struct GuestNode *head, int token) {
    struct GuestNode *newGuest = (struct GuestNode *)malloc(sizeof(struct GuestNode));
    newGuest->token_no = token;
    newGuest->prev = NULL;
    newGuest->next = head;
    
    if (head != NULL) {
        head->prev = newGuest; // Hook the old head back to our new VIP guest
    }
    return newGuest; // This new VIP guest is now the head of the line
}

// Regular Entry: Put a guest at the very back of the line
void addRegular(struct GuestNode *head, int token) {
    struct GuestNode *newGuest = (struct GuestNode *)malloc(sizeof(struct GuestNode));
    newGuest->token_no = token;
    newGuest->next = NULL;
    
    struct GuestNode *temp = head;
    // Walk through the line until we find the last guest
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newGuest;   // Hook the old last guest forward to our new guest
    newGuest->prev = temp;   // Hook the new guest backward to the old last guest
}

int main() {
    // First guest arrives with token 500
    struct GuestNode *head = (struct GuestNode *)malloc(sizeof(struct GuestNode));
    head->prev = NULL; 
    head->token_no = 500; 
    head->next = NULL;
    
    printf("--- INITIAL GUEST ---\n");
    showGuests(head);

    // VIP guest cuts to the front of the line with token 999
    head = addVIP(head, 999);
    printf("\n--- AFTER VIP ENTRY ---\n");
    showGuests(head);

    // Regular guest stands at the end with token 111
    addRegular(head, 111);
    printf("\n--- AFTER REGULAR ENTRY ---\n");
    showGuests(head);

    // Free all the guest nodes properly
    free(head->next->next); 
    free(head->next);       
    free(head);             
    
    return 0;
}
