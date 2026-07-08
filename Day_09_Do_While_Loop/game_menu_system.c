#include <stdio.h>

int main() {
    // Variable to store the user's choice.
    int choice;

    do {
        // Prompt the user for input INSIDE the loop
        printf("\nSir Please Enter a Number:\n");
        printf("1 For Start Game | 2 For Exit Game: ");
        scanf("%d", &choice);   

        // Game logic (if-else) MUST be inside the do block
        if (choice == 1) {
            printf("Game Started! 🎮\n");
        } 
        else if (choice == 2) {
            printf("Exiting Game. Goodbye! 👋\n");
        } 
        else {
            printf("Invalid choice. Please Enter 1 to Start Game or 2 to Exit Game.\n");
        }

    // while condition comes at the VERY END of the do block
    } while (choice != 2); 

    return 0;
}
