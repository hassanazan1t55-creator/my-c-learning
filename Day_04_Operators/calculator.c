#include <stdio.h>

int main() {
    int number1, number2, total;
    
    // Asking user for the first number
    // (User se pehla number maangna)
    printf("Sir, enter the first number: ");
    scanf("%d", &number1);
    
    // Asking user for the second number
    // (User se doosra number maangna)
    printf("Sir, enter the second number: ");
    scanf("%d", &number2);
    
    // Multiplying both numbers and storing the result
    // (Dono numbers ko multiply kar ke total mein save karna)
    total = number1 * number2;
    
    // Displaying the final answer
    // (Aakhri jawab screen par print karna)
    printf("Sir, after multiplying both numbers, the answer is: %d\n", total);
    
    return 0;
}
