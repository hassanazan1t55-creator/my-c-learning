#include <stdio.h>

// my own function for alert
// (Apna function alert ke liye)
void cyber_alert() {
    printf("Warning: Security Breach Detected!\n");
}

int main() {
    // call function first time
    // (Pehli dafa function ko chalana)
    cyber_alert();
    
    // call function second time
    // (Doosri dafa function ko chalana)
    cyber_alert();
    
    printf("Sir Mubarak ho Code sahi chal gaya ha or hum ny function banana seekh liya ha\n");
    
    return 0;
}
