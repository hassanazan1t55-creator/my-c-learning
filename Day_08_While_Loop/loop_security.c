#include <stdio.h>

int main() {
    // start with 0 to avoid garbage value bug
    // (Shuru mein 0 diya taake fuzool value ka bug na aaye)
    int number = 0;
 
    // loop run until user type 99
    // (Loop tab tak chalega jab tak user 99 nahi likhta)
    while (number != 99) {
        printf("Apna Number like or Enter kary {Agar program ko band karna ha to 99 dabay}: ");
        scanf("%d", &number);
    }
 
    // print message when loop close
    // (Jawab dikhana jab loop band ho jaye)
    printf("Correct Code! Access Granted.\n");
    printf("Program band ho raha ha...\n");
    
    return 0;
}
