#include <stdio.h>

int main() {
    int marks[4] = {12, 32, 41, 53};
    int *p;
 
    // array name itself is address so no need & sign
    // (Array ka naam khud address hota hai isliye & nahi lagaya)
    p = marks;
 
    // loop runs 4 times to print all elements using pointer jump
    // (Pointer jump ke zariye saare elements print karne ke liye loop)
    for(int i = 0; i < 4; i++) {
        // print value using pointer star *
        // (Index par jo value hai use pointer se print kiya)
        printf("Index %d par value ha: %d\n", i, *p);
 
        // pointer ++ moves spy to next memory block directly
        // (p++ jasoos ko seedha agle memory block par bhej deta hai)
        p++;
    }
    
    return 0;
}
