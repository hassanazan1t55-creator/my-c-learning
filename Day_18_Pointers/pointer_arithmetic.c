#include <stdio.h>

int main() {
    int number = 50;
    int *ptr = &number;  // pointer Variable to store the address of number.

    // Displaying Output Using Pointer.
    printf("Current Adress: %p\n", ptr);
    printf("Current Value: %d\n", *ptr);
    printf("Next Adress: %p\n", ptr + 1);

    return 0;
}
