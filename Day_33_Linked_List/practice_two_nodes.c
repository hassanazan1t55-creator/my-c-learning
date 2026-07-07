#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next; // Hook to capture the next memory point location
};

int main() {
    // --- NODE 1 SETUP ---
    // Creating the first node box dynamically
    struct Node *dabba1 = (struct Node *)malloc(sizeof(struct Node));
    dabba1->data = 10; 

    // --- NODE 2 SETUP ---
    // Creating the second node box dynamically
    struct Node *dabba2 = (struct Node *)malloc(sizeof(struct Node));
    dabba2->data = 20; 
    dabba2->next = NULL; // This is the terminal node, so its hook points to NULL

    // --- LINKING OPERATIONS ---
    // Hooking the next pointer of node 1 to point directly to node 2's address
    dabba1->next = dabba2;

    // --- CHECKING VERIFICATION ---
    printf("--- TRAIN LINKING CHECK ---\n");
    printf("Dabba 1 Data: %d\n", dabba1->data);
    
    // Verifying indirect node lookup through the active chain connection path
    printf("Dabba 2 Data (via Chain Connection): %d\n", dabba1->next->data);

    // Freeing both allocated resource sections sequentially
    free(dabba1);
    free(dabba2);

    return 0;
}
