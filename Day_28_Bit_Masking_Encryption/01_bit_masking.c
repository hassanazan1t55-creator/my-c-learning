#include <stdio.h>

int main() {
    unsigned int flags = 5; // Binary: 00000101
    printf("Original Flags: %u\n\n", flags);

    // Set the 2nd bit to ON using OR
    unsigned int mask_on = 1 << 1; 
    flags = flags | mask_on; 
    printf("After setting 2nd bit: %u\n", flags);

    // Clear the 0th bit to OFF using AND NOT
    unsigned int mask_off = ~(1 << 0);
    flags = flags & mask_off; 
    printf("After clearing 0th bit: %u\n", flags);

    return 0;
}
