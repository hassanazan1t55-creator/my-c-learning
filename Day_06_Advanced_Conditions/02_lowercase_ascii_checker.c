#include <stdio.h>

int main() {
    char ch = 'a';

    printf("The character is: %c\n", ch);
    printf("The ASCII value of character is: %d\n", ch);

    // Checking if the character falls in lowercase ASCII range (97 to 122)
    if (ch >= 97 && ch <= 122) {
        printf("This character is lowercase.\n");
    } else {
        printf("This character is not lowercase.\n");
    }

    return 0;
}
