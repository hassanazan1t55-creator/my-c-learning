#include <stdio.h>

// Function Prototype
int factorial(int n);

int main() {
    int num = 3;
    printf("%d ka factorial %d ha.\n", num, factorial(num));
    return 0;
}

// Function Definition using Recursion
int factorial(int n) {
    // Base Case
    if (n <= 1) {
        return 1;
    }
    // Recursive Step
    return n * factorial(n - 1);
}
