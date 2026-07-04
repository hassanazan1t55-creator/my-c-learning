#include <stdio.h>

// define structure design outside main function
// (main function se baahar structure ka sancha/design banaya)
struct Enemy {
    int health;
    int damage;
};

int main() {
    // create a box named boss using struct design
    // (struct design use kar ke 'boss' naam ka asli dabba banaya)
    struct Enemy boss;
 
    // set health value inside boss container using dot operator
    // (Dot operator use kar ke boss ke andar health set ki)
    boss.health = 100;
 
    // print boss health value
    // (Boss ki health screen par print karwai)
    printf("Sir Ap ki Health ha %d\n", boss.health);
 
    return 0;
}
