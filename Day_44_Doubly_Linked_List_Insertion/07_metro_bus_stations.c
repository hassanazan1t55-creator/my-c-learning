#include <stdio.h>
#include <stdlib.h>

struct Station {
    struct Station *prev;
    int station_id;
    struct Station *next;
};

void displayRoute(struct Station *head) {
    struct Station *temp = head;
    printf("Route: NULL <-> ");
    while (temp != NULL) {
        printf("[St %d] <-> ", temp->station_id);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertStation(struct Station *head, int position, int id) {
    struct Station *newSt = (struct Station *)malloc(sizeof(struct Station));
    newSt->station_id = id;
    
    struct Station *temp = head;
    // Move along the line until we sit exactly one station before the insertion spot
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    // Wire up the 4 bidirectional hooks for this middle station insert
    newSt->next = temp->next;
    newSt->prev = temp;
    
    if (temp->next != NULL) {
        temp->next->prev = newSt;
    }
    temp->next = newSt;
}

int main() {
    struct Station *s1 = (struct Station *)malloc(sizeof(struct Station));
    struct Station *s2 = (struct Station *)malloc(sizeof(struct Station));
    struct Station *s4 = (struct Station *)malloc(sizeof(struct Station));
    
    s1->prev = NULL; s1->station_id = 10; s1->next = s2;
    s2->prev = s1;   s2->station_id = 20; s2->next = s4; 
    s4->prev = s2;   s4->station_id = 40; s4->next = NULL; 

    printf("--- ORIGINAL METRO ROUTE ---\n");
    displayRoute(s1);

    // Fit station 30 right into position 3 (between station 20 and station 40)
    insertStation(s1, 3, 30);
    printf("\n--- AFTER NEW STATION ADDED (Position 3) ---\n");
    displayRoute(s1);

    // Free the bus route station nodes safely
    free(s4); 
    free(s2->next); 
    free(s2); 
    free(s1);
    
    return 0;
}
