#include <stdio.h>

int main() {
    // empty array for 3 numbers
    // (3 numbers save karne ke liye khali array)
    int lucky_number[3];
    int i;
 
    printf("--- Pehle Saare Numbers Dalein ---\n");
    
    // LOOP 1: only for take input and save in memory boxes
    // (Pehla loop sirf input lene aur memory mein save karne ke liye)
    for (i = 0; i < 3; i++) {
        printf("%d lucky number dalein: ", i + 1);
        scanf("%d", &lucky_number[i]); 
    }
 
    printf("\n--- Ab Saare Numbers Ek Sath Print Honge ---\n");
    
    // LOOP 2: only for print data from array boxes
    // (Doosra loop array se data nikal kar print karne ke liye)
    for (i = 0; i < 3; i++) {
        printf("Lucky Number %d hai: %d\n", i + 1, lucky_number[i]);
    }
    
    return 0;
}
