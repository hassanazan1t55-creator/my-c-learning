#include <stdio.h>

int main() {
    int year;

    // Input from user
    printf("Enter year: ");
    scanf("%d", &year);

    // Leap year logic check
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("This is a leap year!\n");
    } else {
        printf("This is not a leap year.\n");
    }

    return 0;
}
