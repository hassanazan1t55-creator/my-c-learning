#include <stdio.h>

int main() {
    int number = 0;

    // Loop runs from 0 to 20
    while (number <= 20) {
        // Prints only numbers that are 10 or greater
        if (number >= 10) {
            printf("The value of number is: %d\n", number);
        }
        number++;
    }

    return 0;
}
