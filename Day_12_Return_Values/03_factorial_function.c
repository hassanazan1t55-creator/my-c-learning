#include <stdio.h>

// Function to calculate factorial using long long for large numbers
long long calculateFactorial(int n) {
    if (n < 0) return -1;
    
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    long long res = calculateFactorial(num);

    if (res == -1) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is: %lld\n", num, res);
    }

    return 0;
}
