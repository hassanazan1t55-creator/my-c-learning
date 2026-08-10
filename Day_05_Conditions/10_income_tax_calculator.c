#include <stdio.h>

int main() {
    float income;
    float tax = 0;

    // Input from user
    printf("Enter your income: ");
    scanf("%f", &income);

    // Income tax calculation according to slabs
    if (income <= 250000) {
        tax = 0;
    } else if (income > 250000 && income <= 500000) {
        tax = 0.05 * (income - 250000);
    } else if (income > 500000 && income <= 1000000) {
        tax = (0.05 * 250000) + (0.2 * (income - 500000));
    } else {
        tax = (0.05 * 250000) + (0.2 * 500000) + (0.3 * (income - 1000000));
    }

    // Display tax to pay
    printf("The Tax you need to pay is: %.2f\n", tax);

    return 0;
}
