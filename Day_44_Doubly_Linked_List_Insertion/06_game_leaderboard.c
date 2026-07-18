#include <stdio.h>
#include <stdlib.h>

struct Player {
    struct Player *prev;
    int score;
    struct Player *next;
};

void showLeaderboard(struct Player *head) {
    struct Player *temp = head;
    printf("Leaderboard: NULL <-> ");
    while (temp != NULL) {
        printf("[%d pts] <-> ", temp->score);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Fit a new player score right into a specific middle rank position
void insertInMiddle(struct Player *head, int position, int newScore) {
    struct Player *newPlayer = (struct Player *)malloc(sizeof(struct Player));
    newPlayer->score = newScore;
    
    struct Player *temp = head;
    // Step forward until we rest exactly one player node before our target rank
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    // Set up all 4 pointer adjustments to secure the new node in place
    newPlayer->next = temp->next; 
    newPlayer->prev = temp;       
    
    if (temp->next != NULL) {
        temp->next->prev = newPlayer; 
    }
    temp->next = newPlayer;       
}

int main() {
    struct Player *p1 = (struct Player *)malloc(sizeof(struct Player));
    struct Player *p3 = (struct Player *)malloc(sizeof(struct Player));
    
    p1->prev = NULL; p1->score = 1000; p1->next = p3;
    p3->prev = p1;   p3->score = 500;  p3->next = NULL;

    printf("--- BEFORE NEW PLAYER ENTRY ---\n");
    showLeaderboard(p1);

    // Insert a new player score of 750 directly at rank position 2
    insertInMiddle(p1, 2, 750);
    printf("\n--- AFTER NEW PLAYER ENTRY (Position 2) ---\n");
    showLeaderboard(p1);

    // Release the memory allocations cleanly
    free(p1->next->next); 
    free(p1->next);       
    free(p1);             
    
    return 0;
}
