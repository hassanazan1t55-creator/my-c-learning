#include <stdio.h>

int main() {
    int n = 10;
    int Not_prime = 0;

    // 0 and 1 are not prime
    if (n == 0 || n == 1) {
        Not_prime = 1;
    } 
    // 2 is prime, no need to loop
    else if (n == 2) {
        Not_prime = 0;
    } 
    else {
        int i = 2;
        do {
            if (n % i == 0) {
                Not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
    }

    if (Not_prime) {
        printf("%d is not a prime number.\n", n);
    } else {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}
