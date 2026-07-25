#include <stdio.h>

// Function Declaration.
void cyber_alert() {
    printf("========================================\n");
    printf("Warning: Security Breach Detected!\n");
    printf("========================================\n");
}

int main() {
    cyber_alert();  // Function Calling.
    printf("\n");
    cyber_alert(); // Function Calling.
    
    printf("Sir Congratulations Cyber Alert Activated!\n");
    return 0;
}
