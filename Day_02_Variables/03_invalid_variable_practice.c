#include <stdio.h>

int main() {
    // Valid declarations
    int a = 1;
    int b = a;
    int v = 3 * 3;

    // Invalid: 'char' can only store a single character, not a full text string
    // char dt = '4 August 2026'; // Error! Correct way for text is string/char array: char dt[] = "4 August 2026";

    printf("Valid variables: a = %d, b = %d, v = %d\n", a, b, v);

    return 0;
}
