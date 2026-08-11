#include <stdio.h>

int main() {
    int i = 5;
    printf("The value of i is: %d\n", i);

    i += 5; // Same as i = i + 5 (i becomes 10)
    printf("The value of i is: %d\n", i);

    // Post-increment: Prints current value of i (10) first, then increments i to 11
    printf("The value of i is: %d\n", i++); 
    printf("The value of i is: %d\n", i);   // Now i is 11

    // Pre-increment concept
    i += 2; // i becomes 13
    printf("The value of i after i += 2 is: %d\n", i);

    printf("Pre-increment ++i: %d\n", ++i); // Increments i to 14 first, then prints it

    return 0;
}
