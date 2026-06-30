#include <stdio.h>

int main() {
    int number1, number2, total;
    
    // ask user for first number
    // (Pehla number maangna)
    printf("Enter number 1: ");
    scanf("%d", &number1);
    
    // ask user for second number
    // (Doosra number maangna)
    printf("Enter number 2: ");
    scanf("%d", &number2);
    
    // multiply both numbers
    // (Dono ko multiply karna)
    total = number1 * number2;
    
    // show final answer
    // (Aakhri jawab dikhana)
    printf("Your multiply answer is: %d\n", total);
    
    return 0;
}
