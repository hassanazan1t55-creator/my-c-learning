#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure for Store Items
struct ProductNode {
    int product_id;
    struct ProductNode *next;
};

int main() {
    // Stock Product IDs: 5001 -> 5002 -> 5003 -> NULL
    struct ProductNode *p1 = (struct ProductNode *)malloc(sizeof(struct ProductNode));
    struct ProductNode *p2 = (struct ProductNode *)malloc(sizeof(struct ProductNode));
    struct ProductNode *p3 = (struct ProductNode *)malloc(sizeof(struct ProductNode));

    p1->product_id = 5001; 
    p1->next = p2;

    p2->product_id = 5002; 
    p2->next = p3;

    p3->product_id = 5003; 
    p3->next = NULL;

    // Inventory Lookup
    int checkID = 9999;
    struct ProductNode *temp = p1;
    bool inStock = false;

    while (temp != NULL) {
        if (temp->product_id == checkID) {
            inStock = true;
            break;
        }
        temp = temp->next;
    }

    // Displaying Inventory Management Output
    printf("--- INVENTORY SYSTEM ---\n");
    if (inStock) {
        printf("Product ID %d is IN STOCK!\n", checkID);
    } else {
        printf("Product ID %d is OUT OF STOCK!\n", checkID);
    }

    // Free memory
    free(p1); 
    free(p2); 
    free(p3);

    return 0;
}
