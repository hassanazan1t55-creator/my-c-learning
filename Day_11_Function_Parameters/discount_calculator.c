#include <stdio.h>

// Function For Calculate Discount.
void calculate_Discount(float total_bill, float discount_percent) {
    float result = total_bill * discount_percent / 100;  // Formula For Calculate Discount.

    // Displaying The Result.
    printf("Discount Amount: %.2f\n", total_bill * discount_percent / 100);
    printf("Total Bill: %.2f\n", total_bill - result);
}

int main() {
    calculate_Discount(1000, 10);  // Function Calling.
    calculate_Discount(5000, 15);  // Function Calling.
    return 0;
}
