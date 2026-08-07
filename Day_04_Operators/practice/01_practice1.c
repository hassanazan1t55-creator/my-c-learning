#include <stdio.h>

int main() {
    // Variable declarations
    int length, breadth;

    // Taking input from the user
    printf("Enter Length: ");
    scanf("%d", &length);

    printf("Enter Breadth: ");
    scanf("%d", &breadth);

    // Calculate area of rectangle
    int area = length * breadth;

    // Display the result
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}
