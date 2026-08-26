#include <stdio.h>

// Function to issue sequential ticket numbers using static variable
void generateTicketNumber() {
    static int ticketNumber = 100;
    printf("Ticket #%d issued\n", ticketNumber);
    ticketNumber++;
}

int main() {
    generateTicketNumber();
    generateTicketNumber();
    generateTicketNumber();
    generateTicketNumber();

    return 0;
}
