#include <stdio.h>

// 1. Normal Structure with Padding (Isme computer beech mein khali jagah dalega)
struct NormalStruct {
    char a;
    int b;
};

// 2. Packed Structure without Padding (Isme hum ne compiler ko bola ke jagah mat chhoro)
#pragma pack(push, 1) // Compiler ko instruction: 1-byte alignment karo (No padding!)
struct PackedStruct {
    char a;
    int b;
};
#pragma pack(pop) // Resetting compiler settings to normal

int main() {
    // Printing size reports (Structures ka size check ho raha ha)
    printf("Sir, Normal Structure ka size ha: %d bytes (Beech mein padding ha)\n", (int)sizeof(struct NormalStruct));
    printf("Sir, Packed Structure ka size ha: %d bytes (No padding, data packed ha!)\n", (int)sizeof(struct PackedStruct));
    
    return 0;
}
