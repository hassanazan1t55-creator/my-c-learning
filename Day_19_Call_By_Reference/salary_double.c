#include <stdio.h>

// function take pointer address to change original value
// (Function jo asli value badalney ke liye address leta hai)
void double_karo(int *ptr) {
    // get value from address, multiply by 2, and save back
    // (Address se value nikal kar 2 se multiply karna aur wapas save karna)
    *ptr = *ptr * 2;
}

int main() {
    int sellary = 1000;
    
    printf("Abhi Sellary ha: %d\n", sellary);
 
    // call function and send ADDRESS of sellary using &
    // (& use kar ke sellary ka ADDRESS function ko bheja)
    double_karo(&sellary);
 
    // original sellary is now changed in RAM
    // (Asli sellary ab RAM ke andar badal chuki hai)
    printf("Ab Sellary ha: %d\n", sellary);
 
    return 0;
}
