#include <stdio.h>

int main() {
    float hight;
    
    // Step 1: Asking the user to input their height
    // (User se unki height poochhna)
    printf("Please Sir, enter your height here (e.g., 5.9): ");
    
    // Step 2: Taking input and storing it in the 'hight' variable
    // (User ka input lena aur use 'hight' ke dabbe mein save karna)
    scanf("%f", &hight);
    
    // Step 3: Displaying the height on screen using %.1f to avoid extra zeros
    // (Height ko screen par dikhana aur %.1f se faltu zero hatana)
    printf("Sir, your height is: %.1f\n", hight);
    
    return 0;
}
