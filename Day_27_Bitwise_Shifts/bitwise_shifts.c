#include <stdio.h>

int main() {
    int number1 = 5;  // Binary: 00000101
    int number2 = 12; // Binary: 00001100
 
    // Left Shift Operation: Shifting bits to the left by 1 position
    // Rule: Each left shift multiplies the number by 2
    int left_result = number1 << 1;
 
    // Right Shift Operation: Shifting bits to the right by 1 position
    // Rule: Each right shift divides the number by 2
    int right_result = number2 >> 1;
 
    // Printing final shift execution reports (Shifting ke results print ho rahe hain)
    printf("Sir, 5 << 1 ka final jawab ha: %d\n", left_result);
    printf("Sir, 12 >> 1 ka final jawab ha: %d\n", right_result);
 
    return 0;
}
