#include <stdio.h>

int main() {
    int pin; // variable without value because do-while run first
             // (Variable bina value ke banaya kyunki do-while pehle chalta hai)

    do {
        // ask user for pin code
        // (User se pin code maangna)
        printf("Sir, apna 4-digits ka ATM PIN likhein: ");
        scanf("%d", &pin);
        
    } while (pin != 1234); // check condition at the end with semicolon ;
                           // (Aakhir mein condition check karna semicolon ke sath)

    // print when pin is correct
    // (Sahi pin lagne par message dikhana)
    printf("Zabardast! Sahi PIN hai. Access Granted.\n");

    return 0;
}
