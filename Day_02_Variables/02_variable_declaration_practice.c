#include <stdio.h>

int main() {
    // Declaring and initializing variables
    int i = 10;
    int j = i;
    int a = 2, b = 3, c = 4, d = 5;

    // Performing arithmetic operations
    int j1 = a + j - i + d - b + a + c - a;

    printf("The value of j1 is %d\n", j1);
    printf("The value of i = %d and the value of j = %d\n", i, j);
    printf("The value of a = %d and the value of b = %d\n", a, b);
    printf("The value of c = %d and the value of d = %d\n", c, d);

    return 0;
}
