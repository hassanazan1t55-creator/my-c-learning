#include <stdio.h>
#include <stdlib.h>

struct Chat {
    struct Chat *prev;
    int chat_id;
    struct Chat *next;
};

void displayChats(struct Chat *head) {
    struct Chat *temp = head;
    printf("Pinned Chats: NULL <-> ");
    while (temp != NULL) {
        printf("[Chat %d] <-> ", temp->chat_id);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Pin a chat by placing it right at the top (head) of the list
struct Chat* pinChat(struct Chat *head, int id) {
    struct Chat *newChat = (struct Chat *)malloc(sizeof(struct Chat));
    newChat->chat_id = id;
    newChat->prev = NULL;
    newChat->next = head;
    
    if (head != NULL) {
        head->prev = newChat; // Hook the old top chat backward to our newly pinned chat
    }
    return newChat; // The newly pinned chat becomes the new top head
}

int main() {
    struct Chat *head = NULL; // No chats are pinned at the start

    // Pin three chats in a row
    head = pinChat(head, 101);
    head = pinChat(head, 102);
    head = pinChat(head, 103); 

    printf("--- WHATSAPP PINNED CHATS ---\n");
    displayChats(head);

    // Use a loop to clean up all chat nodes completely
    struct Chat *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    
    return 0;
}
