#include <stdio.h>

int main() {
    int n = 10;
    int Not_prime = 0;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        Not_prime = 1;
    } else {
        // Check divisibility from 2 up to n-1
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                Not_prime = 1;
                break; // Stop checking as soon as a factor is found
            }
        }
    }

    if (Not_prime) {
        printf("%d is not a prime number.\n", n);
    } else {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}
