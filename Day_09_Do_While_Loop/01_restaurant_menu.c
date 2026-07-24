#include <stdio.h>

int main() {
  int choice;

  do {
    // printing menu options for the user.
    printf("\n=== Fast Food Menu ===\n");
    printf("1. Burger (PKR 500)\n");
    printf("2. Pizza (PKR 1200)\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Checking the user's choice.
    if (choice == 1) {
      printf("You ordered a Burger! Total: PKR 500\n");
    } else if (choice == 2) {
      printf("You ordered a Pizza! Total: PKR 1200\n");
    } else if (choice == 3) {
      printf("Thank you for visiting! Goodbye.\n");
    } else {
      printf("Invalid choice! Please select between 1 and 3.\n");
    }

  } while (choice != 3);  // 3. Exit Condition.

  return 0;
}