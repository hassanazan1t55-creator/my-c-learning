#include <stdio.h>

// Defining an Enum. The computer gives numbers 0, 1, 2 behind the scenes.
enum GameState {
    START,     // Starts at 0
    PAUSE,     // Becomes 1
    GAME_OVER  // Becomes 2
};

int main() {
    // Creating an enum variable
    enum GameState current_state;

    // 1. Starting the game
    current_state = START;
    printf("Sir, current state code is: %d (Game started!)\n", current_state);

    // 2. Pausing the game
    current_state = PAUSE;
    if (current_state == PAUSE) {
        printf("Sir, current state code is: %d (Game is now paused.)\n", current_state);
    }

    // 3. Checking the memory size of the enum
    printf("\nSir, Enum variable size in RAM is: %d bytes (Because it works like an Integer!)\n", (int)sizeof(current_state));

    return 0;
}
