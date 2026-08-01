#include <stdio.h>

// Function to calculate the discounted price.
float calculateDiscountPrice(float basePrice, float discountRate)
{
    float discountAmount = basePrice * (discountRate / 100.0);
    return basePrice - discountAmount;
}

// Function to calculate the final price after applying tax.
float calculateFinalPrice(float basePrice, float taxRate)
{
    float taxAmount = basePrice * (taxRate / 100.0);
    return basePrice + taxAmount;
}

int main()
{
    float laptopPrice, discountRate;
    float taxRate = 18.0; // 18% Fixed Sales Tax.

    // Input Laptop Price.
    printf("Enter the Laptop Price: ");
    if (scanf("%f", &laptopPrice) != 1 || laptopPrice <= 0)
    {
        printf("Invalid input! Please enter a valid positive number for Laptop Price.\n");
        return 1;
    }

    // Input Discount Percentage.
    printf("Enter Discount Percentage (0-100): ");
    if (scanf("%f", &discountRate) != 1 || discountRate < 0 || discountRate > 100)
    {
        printf("Invalid discount! Percentage must be between 0 and 100.\n");
        return 1;
    }

    // Calculating the final price after discount and tax.
    float priceAfterDiscount = calculateDiscountPrice(laptopPrice, discountRate);
    float finalPrice = calculateFinalPrice(priceAfterDiscount, taxRate);

    // Detailed Invoice Display.
    printf("Original Price   : PKR %.2f\n", laptopPrice);
    printf("Discount (%.1f%%)  : -PKR %.2f\n", discountRate, laptopPrice - priceAfterDiscount);
    printf("Price w/ Discount: PKR %.2f\n", priceAfterDiscount);
    printf("Sales Tax (%.1f%%) : +PKR %.2f\n", taxRate, finalPrice - priceAfterDiscount);
    printf("-----------------------------------\n");
    printf("FINAL PAYABLE : PKR %.2f\n", finalPrice);

    return 0;
}
