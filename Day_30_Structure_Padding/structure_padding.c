#include <stdio.h>

// --- NORMAL STRUCTURE (Isme computer khud padding daalega) --
struct NormalStruct {
    char a;    // 1 Byte
    int b;     // 4 Bytes (Takes another block of 4 bytes due to padding)
};

// --- PACKED STRUCTURE (Isme hum padding ko block kar rahe hain) --
#pragma pack(push, 1)  // Setting Change: Turn OFF padding (1-byte boundary)
struct PackedStruct {
    char a;    // 1 Byte
    int b;     // 4 Bytes (Saves right next to char without empty gaps)
};
#pragma pack(pop)      // Setting Reset: Turn ON padding again for safety

int main() {
    // Printing size reports to verify the padding layout inside RAM
    // (Terminal par dono structures ka dynamic size check ho raha ha)
    printf("Sir, Normal Structure ka size ha: %d bytes (Beech mein padding ha)\n", (int)sizeof(struct NormalStruct));
    printf("Sir, Packed Structure ka size ha: %d bytes (No padding, data packed ha!)\n", (int)sizeof(struct PackedStruct));
    
    return 0;
}
