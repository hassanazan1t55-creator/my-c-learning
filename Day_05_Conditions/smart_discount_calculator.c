#include <stdio.h>

int main() {
    // Define a structure to hold product information.
    int quantity;   // Quantity of the product.
    float price;    // Price of the product.
    char StoreSection;  // Store section of the product.
    float total_bill = quantity * price; // Variable to hold the bill amount.
    float discount_bill; // Variable to hold the discounted bill amount.
    // Taking input from the user for product details.
    printf("Enter the quantity of the product: ");
    scanf("%d", &quantity);
    printf("Enter the price of the product: ");
    scanf("%f", &price);
    printf("Enter the store section of the product (single chracter): ");
    scanf(" %c", &StoreSection);

    total_bill = quantity * price; // Calculating the total bill amount.
    
    // Checking the condition for the bill amount.
    if (total_bill >=5000) {
      discount_bill = total_bill * 0.10; // 10% discount for bills >= 5000.
    }
    else if (total_bill >= 2000) {
        discount_bill = total_bill * 0.05; // 5% discount for bills >= 2000.
    }
    else {
        discount_bill = 0; // No discount for bills less than 2000.
        printf("No discount for bill less than 2000.\n");
    }


    // Displaying the product information.
    printf("\n======= Product Information =======\n");
    printf("Quantity: %d\n", quantity);
    printf("Price: %.1f\n", price);
    printf("Store Section: %c\n", StoreSection);
    printf("Total Bill: %.1f\n", total_bill);
    printf("Discounted bill: %.1f\n", discount_bill);
    printf("Net Bill: %.1f\n", total_bill - discount_bill);

    return 0;

}
