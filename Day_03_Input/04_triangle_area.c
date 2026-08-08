#include <stdio.h>

int main() {
    // Variable declarations
    float base, height;

    // Taking input from the user
    printf("Enter Base: ");
    scanf("%f", &base);

    printf("Enter Height: ");
    scanf("%f", &height);

    // Calculate area of triangle
    float area = 0.5 * base * height;

    // Display the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
