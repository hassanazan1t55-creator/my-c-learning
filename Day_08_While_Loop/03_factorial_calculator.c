#include <stdio.h>

int main() {
    int i = 1;
    int product = 1;
    int n = 6;

    while (i <= n) {
        product *= i;
        i++;
    }

    // Factorial of 6 is 720
    printf("The factorial of %d is: %d\n", n, product);

    return 0;
}
