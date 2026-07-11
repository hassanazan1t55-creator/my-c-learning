#include <stdio.h>
#include <stdlib.h>

// Node structure for player scores
struct PlayerNode {
    int score;
    struct PlayerNode *next;
};

int main() {
    // Setup existing leaderboard: Rank 1 (100) -> Rank 3 (80)
    struct PlayerNode *rank1 = (struct PlayerNode *)malloc(sizeof(struct PlayerNode));
    struct PlayerNode *rank3 = (struct PlayerNode *)malloc(sizeof(struct PlayerNode));

    rank1->score = 100;
    rank1->next = rank3;

    rank3->score = 80;
    rank3->next = NULL;

    // New score of 90 needs to go into position 2
    struct PlayerNode *rank2 = (struct PlayerNode *)malloc(sizeof(struct PlayerNode));
    rank2->score = 90;

    // Move temp pointer to position 1
    struct PlayerNode *temp = rank1;
    int target_position = 2;

    for (int i = 1; i < target_position - 1; i++) {
        temp = temp->next;
    }

    // Insert rank 2 node in between
    rank2->next = temp->next; // Link 90 to 80
    temp->next = rank2;       // Link 100 to 90

    // Display the leaderboard
    struct PlayerNode *printTemp = rank1;
    int rank = 1;

    printf("--- GAME LEADERBOARD ---\n\n");
    while (printTemp != NULL) {
        printf("Rank %d: %d\n", rank, printTemp->score);
        printTemp = printTemp->next;
        rank++;
    }

    // Free memory
    free(rank1);
    free(rank2);
    free(rank3);

    return 0;
}
