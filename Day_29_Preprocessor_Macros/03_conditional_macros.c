#include <stdio.h>

// Comment out the next line to turn off debug messages.
#define DEBUG_MODE

int main() {
  int current_balance = 5000;

  printf("Welcome to the Banking System\n");

  // Debugging messages.
#ifdef DEBUG_MODE
  printf("[DEBUG LOG] Current balance variable holds: %d\n", current_balance);
  printf("[DEBUG LOG] Memory check complete.\n");
#endif

  printf("Transaction completed successfully.\n");

  return 0;
}
