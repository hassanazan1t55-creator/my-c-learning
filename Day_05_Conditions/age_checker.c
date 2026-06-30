#include <stdio.h>

int main() {
    int age_checker;
   
    // ask user age
    // (User se umer poochna)
    printf("Enter your age: ");
    scanf("%d", &age_checker);
   
    // check if age is 18 or big
    // (Check karna umer 18 ya badi hai)
    if (age_checker >= 18) {
        printf("You can make CNIC and License\n");
    }    
    else {
        printf("You are small boy now\n");
    }
       
    return 0;    
}
