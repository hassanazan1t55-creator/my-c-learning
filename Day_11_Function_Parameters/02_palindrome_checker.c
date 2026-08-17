#include <stdio.h>

// Function prototype
int reverseNumber(int);

// Function definition
int reverseNumber(int n) {
    int reverse = 0, rem;
    while (n > 0) {
        rem = n % 10;
        reverse = (reverse * 10) + rem;
        n /= 10;
    }
    return reverse;
}

int main() {
    int num;

    // Input from user to enter the number
    printf("Enter the number: ");
    scanf("%d", &num);

    int rev = reverseNumber(num);

    // Condition check
    if (num == rev) {
        printf("%d is a Palindrome!\n", num);
    } else {
        printf("%d is NOT a Palindrome.\n", num);
    }

    return 0;
}
