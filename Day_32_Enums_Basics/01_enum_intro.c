#include <stdio.h>

// Game States Using Enum.
enum GameStates { Game_Over, Playing, Paused };

int main() {
  // Creating an enum variable and assigning state to it.
  enum GameStates current_state = Playing;

  // Checking the value of the state.
  if (current_state == Playing) {
    printf("The Game is currently active!\n");
  }

  // Printing the actual value behind the enum variable.
  printf("The hidden integer value of Game_Over is: %d\n", Game_Over);
  printf("The hidden integer value of Playing is: %d\n", Playing);
  printf("The hidden integer value of Paused is: %d\n", Paused);

  return 0;
}
