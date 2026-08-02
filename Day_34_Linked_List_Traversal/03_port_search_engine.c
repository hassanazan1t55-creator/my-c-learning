#include <stdio.h>
#include <stdlib.h>

// Professional Node Structure
struct PortNode {
    int port_number;
    struct PortNode *next;
};

int main() {
    // --- CREATING 3 PORT NODES ---
    struct PortNode *port1 = (struct PortNode *)malloc(sizeof(struct PortNode));
    struct PortNode *port2 = (struct PortNode *)malloc(sizeof(struct PortNode));
    struct PortNode *port3 = (struct PortNode *)malloc(sizeof(struct PortNode));

    // Assigning port values and linking
    port1->port_number = 80;
    port1->next = port2;

    port2->port_number = 443;
    port2->next = port3;

    port3->port_number = 8080;
    port3->next = NULL;

    // --- SEARCH LOGIC ---
    int target_port = 443; // The port we want to search
    struct PortNode *temp = port1; // Starting pointer
    int is_found = 0; // Flag: 0 = Not found, 1 = Found

    printf("--- NETWORK PORT SEARCH ENGINE ---\n\n");
    printf("Searching for Port: %d...\n\n", target_port);

    // Loop through the linked list to find the target
    while (temp != NULL) {
        if (temp->port_number == target_port) {
            is_found = 1; // Target found!
            break;        // Exit loop early for optimization
        }
        temp = temp->next; // Move to next node
    }

    // Checking the result
    if (is_found == 1) {
        printf("SUCCESS: Port %d was FOUND in the Linked List!\n", target_port);
    } else {
        printf("FAILED: Port %d was NOT found in the Linked List.\n", target_port);
    }

    // Freeing memory
    free(port1);
    free(port2);
    free(port3);

    return 0;
}
