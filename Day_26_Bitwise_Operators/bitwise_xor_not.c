#include <stdio.h>

int main() {
    int a = 6; // Binary: 00000110
    int b = 9; // Binary: 00001001
 
    // Bitwise XOR operation (Bits ka XOR match ho raha ha)
    // Rule: Output is 1 only if bits are opposite
    int xor_result = a ^ b;
 
    // Bitwise NOT operation (Bits ko ulta kiya ja raha ha)
    // Rule: Flips all bits, results in -(X+1) due to sign bit
    int not_result = ~a;
 
    // Printing final reports (Hacker results print ho rahe hain)
    printf("Sir, 6 ^ 9 ka final jawab ha: %d\n", xor_result);
    printf("Sir, ~6 ka final jawab ha: %d\n", not_result);
 
    return 0;
}
