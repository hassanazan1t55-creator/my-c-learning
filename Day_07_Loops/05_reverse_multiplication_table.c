#include <stdio.h>

int main() {
    int n;

    // Input from user to enter number
    printf("Enter number: ");
    scanf("%d", &n);

    // Reverse multiplication table from 10 down to 1
    for (int i = 10; i; i--) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
