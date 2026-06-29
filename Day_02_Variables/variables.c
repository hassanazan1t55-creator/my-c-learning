#include <stdio.h>

int main() {
  // Step 1: Creating variables to store user data
  // (User ka data store karne ke liye variables banana)
  int umer = 18;      // Stores age as an integer (Poora number)
  float hight = 1.5;  // Stores height as a decimal value (Point wala number)
  char grade = 'A';   // Stores a single character grade (Ek letter)

  // Step 2: Displaying the stored data on screen
  // (Variables mein save data ko screen par print karna)
  printf("My age is %d.\n", umer);

  // Using %.1f to show only 1 number after the decimal point
  // (%.1f use kiya taake point ke baad faltu zero na aayein)
  printf("My height is %.1f.\n", hight);

  printf("My grade is %c.\n", grade);

  return 0;
}
