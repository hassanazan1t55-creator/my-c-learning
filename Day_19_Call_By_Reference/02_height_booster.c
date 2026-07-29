#include <stdio.h>

void boostHeight(int* h) {
    *h += 5; 
}

int main() {
  int height;

  // Input from user for height.
  printf("Enter your height: ");
  scanf("%d", &height);

  // Displaying Original Height.
  printf("Original Height is %d cm\n", height);

  // Calling boostHeight function.
  boostHeight(&height);

  // Displaying the height after boosting.
  printf("Your height after boosting is %d cm\n", height);

  return 0;
}
