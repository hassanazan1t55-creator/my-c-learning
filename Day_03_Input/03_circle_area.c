#include <stdio.h>

int main() {
  float a = 9.0;
  int b = 2;
  float c = a / b;

  // K is int it cannot store the float value
  int k = 3.0 / 9;

  // Display the value of c
  printf("The value of a/b is: %f\n", c);
  // so answer is 0 because the int demoted 3.0/9 to 0
  printf("The Value of k is: %d", k);

  return 0;
}
