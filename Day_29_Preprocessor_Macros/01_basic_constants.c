#include <stdio.h>

// Defining simple constants that won't change.
#define MAX_SCORE 100
#define WELCOME_MSG "Welcome to Day 29!"

int main() {
  int user_score = 85;

  // Print the welcome message.
  printf("%s\n", WELCOME_MSG);
  printf("Your score is %d out of %d\n", user_score, MAX_SCORE);

  return 0;
}
