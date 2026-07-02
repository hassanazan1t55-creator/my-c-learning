// Standard Input & Output Library
#include <stdio.h>

int main() {
    // make text variable with size 10
    // (10 size wala text variable banaya)
    char status[10];
 
    // ask user for input status
    // (User se status poochna)
    printf("Sir Apna Aj ka Status Likhe: ");
    
    // use fgets for secure input with space
    // (Space ke sath safe input lene ke liye fgets use kiya)
    fgets(status, sizeof(status), stdin);
 
    // show user input text on screen
    // (User ka input screen par dikhana)
    printf("Welcome Sir Ap ka Ag ka Status ha: %s\n", status);
 
    return 0;
}
