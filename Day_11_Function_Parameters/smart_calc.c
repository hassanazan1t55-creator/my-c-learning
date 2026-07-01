#include <stdio.h>

// function for add numbers
// (Numbers ko plus karne ka function)
void add_karo(int a, int b) {
    int result = a + b;
    printf("In ko Add karne ka result hai: %d\n", result);
}

// function for multiply numbers
// (Numbers ko multiply karne ka function)
void multiply_karo(int a, int b) {
    int result = a * b;
    printf("In ko Multiply karne ka result hai: %d\n", result);
}

int main() {
    printf("Phela dafa function call kar rahe hain\n");
    
    // send numbers to add function
    // (Add wale function ko numbers bhejna)
    add_karo(5, 32);
    
    // send numbers to multiply function
    // (Multiply wale function ko numbers bhejna)
    multiply_karo(5, 12);
    
    return 0;
}
