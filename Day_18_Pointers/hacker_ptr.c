#include <stdio.h>

int main() {
    int marks = 100; // normal variable
    int *p;          // pointer spy variable
                     // (Jasoos variable banaya)
 
    // save address of marks into pointer p
    // (marks ka memory address p ko de diya)
    p = &marks;
   
    // print value using pointer star *
    // (Star use kar ke address ke andar ki value print ki)
    printf("Sir Marks ha: %d\n", *p);
    
    // print address only using p without star
    // (Bina star ke sirf address print kiya)
    printf("Sir pointer ky andar Adress save ha: %p\n", p);
    
    return 0;
}
