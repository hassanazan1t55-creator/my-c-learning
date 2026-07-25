#include <stdio.h>

// Function Declaration.
int sub(int a, int b) {
  int Answer = a - b;
  return Answer;
}

int main() {
  int Final_Answer;           // Variable To Store Final Answer.
  Final_Answer = sub(20, 8);  // Function Calling.

  // Displaying Final Answer.
  printf("The Final Answer Is: %d\n", Final_Answer);
  return 0;
}
