#include <stdio.h>

// Function prototype
int sum(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);

// Function Definitions
int sum(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }

int main() {
    int a, b;
    char op;

    // Input from user
    printf("Enter calculation example (10 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result: %d\n", sum(a, b));
            break;
        case '-':
            printf("Result: %d\n", subtract(a, b));
            break;
        case '*':
            printf("Result: %d\n", multiply(a, b));
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero!\n");
            } else {
                printf("Result: %.2f\n", divide(a, b));
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}
