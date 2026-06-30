#include <stdio.h>

int main() {
    int speed_checker;
 
    // ask user for car speed
    // (User se gari ki speed poochna)
    printf("Please enter the speed of the car: ");
    scanf("%d", &speed_checker);
 
    // check if speed is 120 or more
    // (Check karna agar speed 120 ya zyada hai)
    if (speed_checker >= 120) {
        printf("Challan ho gaya! Boht tez hain aap.\n");
    }
    // check if speed is 80 or more
    // (Check karna agar speed 80 ya zyada hai)
    else if (speed_checker >= 80) {
        printf("Speed normal hai, safe rahein.\n");
    }    
    // if speed is low
    // (Agar speed kam hai)
    else {
        printf("Aap boht sakoon se chala rahe hain.\n");
    }

    return 0;
}
