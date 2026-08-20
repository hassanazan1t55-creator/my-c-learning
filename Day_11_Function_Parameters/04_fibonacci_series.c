#include <stdio.h>

// Function definition to generate Fibonacci series
void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter terms: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
