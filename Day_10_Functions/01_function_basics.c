#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition  calculates and returns the sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 1;
    int b = 2;
    int c = sum(a, b);
    printf("Sum of a and b is: %d\n", c);

    int a1 = 59;
    int b2 = 4;
    int d = sum(a1, b2);
    printf("Sum of a1 and b2 is: %d\n", d);

    int total = c + d;
    printf("The total sum is: %d\n", total);

    return 0;
}
