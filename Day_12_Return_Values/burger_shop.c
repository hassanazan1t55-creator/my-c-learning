#include <stdio.h>

// int function for return number back
// (int lagaya taake function jawab wapas de sake)
int sub_karo(int a, int b) {
    int jawab = a - b;
    
    // return the answer to main program
    // (Jawab ko main program mein wapas phenkna)
    return jawab; 
}

int main() {
    int final_jawab; // empty pocket for save answer
                     // (Jawab save karne ke liye khali pocket)

    // function run and send answer back here
    // (Function chala aur jawab is variable mein save ho gaya)
    final_jawab = sub_karo(20, 8); 
    
    // print the answer from pocket
    // (Pocket se jawab nikal kar screen par dikhana)
    printf("Burger hamare hath mein aa gaya hai, yaani jawab hai: %d\n", final_jawab);
    
    return 0;
}
