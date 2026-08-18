#include <stdio.h>

int main() { 
    int a = 43523;
    int count = 0;

    // Loop through each digit until 'a' becomes 0
    while (a != 0) {
        count++;
        a /= 10;
    }
    
    printf("The total number of digits in variable: %d\n", count);

    return 0;
}
