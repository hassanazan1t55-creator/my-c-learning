#include <stdio.h>
#include <stdlib.h>

// Professional Node Structure for Shopping Cart
struct CartNode {
    int item_id;      // Product ID code
    int price;        // Item price in dollars
    struct CartNode *next;
};

int main() {
    // --- 1. INITIAL CART WITH ONE ITEM (Laptop) ---
    struct CartNode *head = (struct CartNode *)malloc(sizeof(struct CartNode));
    head->item_id = 101; 
    head->price = 1200;  
    head->next = NULL;   

    // --- 2. USER ADDS A SECOND ITEM (Mouse) ---
    struct CartNode *newItem1 = (struct CartNode *)malloc(sizeof(struct CartNode));
    newItem1->item_id = 102;
    newItem1->price = 50;
    newItem1->next = NULL;

    // Finding the end of the cart to link Mouse
    struct CartNode *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newItem1; // Linked Mouse at the end

    // --- 3. USER ADDS A THIRD ITEM (Keyboard) ---
    struct CartNode *newItem2 = (struct CartNode *)malloc(sizeof(struct CartNode));
    newItem2->item_id = 103;
    newItem2->price = 80;
    newItem2->next = NULL;

    // Resetting temp pointer to head to scan for the new end of the cart
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newItem2; // Linked Keyboard at the current end

    // --- 4. TRAVERSE AND CALCULATE TOTAL BILL ---
    struct CartNode *printTemp = head;
    int total_bill = 0;

    printf("--- YOUR PROFESSIONAL SHOPPING CART ---\n\n");
    while (printTemp != NULL) {
        printf("Item ID: %d | Price: $%d\n", printTemp->item_id, printTemp->price);
        total_bill += printTemp->price;
        printTemp = printTemp->next;
    }

    printf("\n-----------------------------------\n");
    printf("Total Bill to Pay: $%d\n", total_bill);
    printf("-----------------------------------\n");

    // Freeing memory blocks
    free(head);
    free(newItem1);
    free(newItem2);

    return 0;
}
