#include <stdio.h>

int main() {
    int age = 20;
    int *ptr = &age;  // Pointer variable to store address. 

    // Displaying the values.
    printf("Age Value: %d\n", age);
    printf("Age Address in memory: %p\n", &age); 
    printf("Pointer Variable Stored Address (ptr): %p\n", ptr);
    printf("Pointer Variable Stored Value: %d\n", *ptr);

    return 0;
}
