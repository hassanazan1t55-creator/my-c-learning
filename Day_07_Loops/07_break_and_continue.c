#include <stdio.h>

int main() {
    printf("--- Demo 1: Using 'continue' (Skips numbers >= 4) ---\n");
    for (int i = 0; i <= 6; i++) {
        if (i >= 4) {
            continue; // Skip current loop and jump to next iteration
        }
        printf("i is %d\n", i);
    }

    printf("\n--- Demo 2: Using 'break' (Stops loop when i reaches 4) ---\n");
    for (int i = 0; i <= 6; i++) {
        if (i == 4) {
            printf("Break condition hit at i = %d! Exiting loop...\n", i);
            break; // Exits the loop completely
        }
        printf("i is %d\n", i);
    }

    printf("\nFor loop practice is done!\n");
    return 0;
}
