#include <stdio.h>
#include <stdlib.h>

// Node structure for Leaderboard
struct ScoreNode {
    int score;
    struct ScoreNode *next;
};

int main() {
    // Initial Scores: 100 -> 80 -> 50 -> NULL
    struct ScoreNode *s1 = (struct ScoreNode *)malloc(sizeof(struct ScoreNode));
    struct ScoreNode *s2 = (struct ScoreNode *)malloc(sizeof(struct ScoreNode));
    struct ScoreNode *s3 = (struct ScoreNode *)malloc(sizeof(struct ScoreNode));

    s1->score = 100; 
    s1->next = s2;

    s2->score = 80;  
    s2->next = s3;

    s3->score = 50;  
    s3->next = NULL;

    printf("Leaderboard Before Deletion:\n");
    printf("%d -> %d -> %d -> NULL\n\n", s1->score, s2->score, s3->score);

    // Delete last score (50)
    struct ScoreNode *temp = s1;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    struct ScoreNode *toDelete = temp->next;
    temp->next = NULL;
    free(toDelete);

    printf("Leaderboard After Removing Last Score:\n");
    printf("%d -> %d -> NULL\n", s1->score, s2->score);

    // Clean up memory
    free(s1);
    free(s2);

    return 0;
}
