#include <stdio.h>

// Function for Welcome Banner.
void showWelcome() {
  printf("=============================================\n");
  printf("             Welcome HBL ATM!             \n");
  printf("=============================================\n");
}

// Function for Balance Display.
void showBalance() {
  float balance = 50000.75;
  printf("\nCurrent Account Balance: PKR %.2f\n\n", balance);
}

// Function for Exit Message.
void showGoodbye() {
  printf("=============================================\n");
  printf("      Thank you for banking with us!      \n");
  printf("=============================================\n");
}

int main() {
  // Calling function in sequence.
  showWelcome();
  showBalance();
  showGoodbye();

  return 0;
}
