#include <stdio.h>
#include <stdlib.h> // Required for malloc and free operations

// 1. Creating the design template for a Game Player record block
struct Player {
    int score;
    int health;
};

int main() {
    // 2. Allocating memory for one Player size block dynamically
    struct Player *p1 = (struct Player *)malloc(sizeof(struct Player));

    // 3. Using the arrow operator (->) to fill data via reference pointer
    p1->score = 150;
    p1->health = 100;

    // 4. Printing data reports on screen
    printf("--- PLAYER 1 DATA ---\n");
    printf("Player Score: %d\n", p1->score);
    printf("Player Health: %d%%\n", p1->health);

    // 5. Returning allocated space back to the operating system
    free(p1);

    return 0;
}
