#include <stdio.h>
#include <string.h>

// Defining a Union where all members share the exact same memory space
union Packer {
    int full_data; // 4 Bytes (Interprets the entire space as a single large number)
    char text[4];  // 4 Bytes (Interprets the exact same space as 4 separate characters)
};

int main() {
    union Packer p;

    // 1. Array (Text) mein data daala
    p.text[0] = 'A'; // ASCII 65 (Binary: 01000001)
    p.text[1] = 'B'; // ASCII 66 (Binary: 01000010)
    p.text[2] = 'C'; // ASCII 67 (Binary: 01000011)
    p.text[3] = '\0';// String end marker (Binary: 00000000)

    // Printing string format to confirm normal array behavior
    printf("Sir, Text Array mein ha: %s\n", p.text);

    // 2. Reading the fused memory representation via Integer view
    // Rule: Computer merges the binary paths into a single big number due to Little Endian architecture
    printf("Sir, usi memory ko jab Integer ne parha toh number bana: %d\n", p.full_data);

    return 0;
}
