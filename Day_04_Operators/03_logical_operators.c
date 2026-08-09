#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;

    // Returns 1 only if BOTH conditions are true, otherwise returns 0
    printf("The value of a && b is %d\n", a && b);

    // Returns 1 if AT LEAST ONE condition is true; returns 0 if both are false
    printf("The value of a || b is %d\n", a || b);

    // Inverts the boolean value: 1 becomes 0, and 0 becomes 1
    printf("The value of !a is %d\n", !a);

    // Checking conditions using logical AND (&&)
    if (a && b) {
        printf("Both are True!\n");
    }

    // Alternative way to check multiple conditions without logical operators (Nested IF)
    if (a) {
        if (b) {
            printf("Both are True!\n");
        }
    }

    // Checking conditions using logical OR (||)
    if (a || b) {
        printf("At least one condition is True!\n");
    }

    return 0;
}
