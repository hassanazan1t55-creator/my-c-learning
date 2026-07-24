#include <stdio.h>

int main() {
    // Define a structure to hold product information.
    int quantity;   // Quantity of the product.
    float price;    // Price of the product.
    char StoreSection;  // Store section of the product.

    // Taking input from the user for product details.
    printf("Enter the quantity of the product: ");
    scanf("%d", &quantity);
    printf("Enter the price of the product: ");
    scanf("%f", &price);
    printf("Enter the store section of the product (single chracter): ");
    scanf(" %C", &StoreSection);

    // Displaying the product information.
    printf("\n======= Product Information =======\n");
    printf("Quantity: %d\n", quantity);
    printf("Price: %.1f\n", price);
    printf("Store Section: %c\n", StoreSection);

    return 0;

}
