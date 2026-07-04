#include <stdio.h>

// define structure for vip members
// (VIP members ke liye structure design banaya)
struct VIP {
    int code;
    int level;
};

int main() {
    struct VIP v1;    // normal structure variable
    struct VIP *p;   // structure pointer variable (jasoos)
 
    // give address of v1 to pointer p
    // (v1 ka memory address pointer p ko de diya)
    p = &v1;
 
    // use arrow operator -> because p is a pointer
    // (Pointer ke zariye structure compartments mein value daalna)
    p->code = 1234;
    p->level = 9;
 
    // print values using arrow operator
    // (Arrow operator use kar ke values screen par print karwain)
    printf("Sir Code ha %d\n", p->code);
    printf("Sir Level ha %d\n", p->level);
 
    return 0;
}
