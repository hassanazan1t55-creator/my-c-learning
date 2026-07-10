#include <stdio.h>

// Function Declaration.
void Add(int a, int b) {
    int result = a + b;
    printf("The Result Add is: %d\n", result);
}

// Function Declaration.
void Multiply(int a, int b) {
    int result = a * b;
    printf("The Result Multiply is: %d\n", result);
}

int main() {
    Add(5, 32);   // Function Calling.
    Multiply(5, 12);   // Function Calling.
    return 0;
}
