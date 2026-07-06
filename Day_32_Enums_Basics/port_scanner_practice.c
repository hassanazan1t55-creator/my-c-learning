#include <stdio.h>

// Creating an Enum with custom numbers instead of default 0, 1, 2
enum PortStatus {
    CLOSED = 0,
    OPEN = 80,       // HTTP Port
    SECURE = 443,    // HTTPS Port
    ATTACKED = 999   // Hacker Attack State
};

int main() {
    // Creating an enum variable and setting it to SECURE
    enum PortStatus current_port = SECURE;

    printf("--- NETWORK SECURITY MONITOR ---\n\n");

    // Using switch case to jump directly to the active port state
    switch (current_port) {
        case CLOSED:
            printf("Status Code %d: Port is closed. Everything is quiet.\n", CLOSED);
            break;
        case OPEN:
            printf("Status Code %d: Web Traffic (HTTP) is allowed here.\n", OPEN);
            break;
        case SECURE:
            printf("Status Code %d: Encrypted (HTTPS) Connection Active. Safe Mode!\n", SECURE);
            break;
        case ATTACKED:
            printf("ALERT! Status Code %d: Port under DDoS Attack!\n", ATTACKED);
            break;
        default:
            printf("Unknown network state.\n");
    }

    return 0;
}
