#include <stdio.h>

int main() {
  // Create an array of 3 floats.
  float prices[3];

  // Get the prices of 3 items.
  for (int i = 0; i < 3; i++) {
    printf("Enter the price of item %d: ", i + 1);
    scanf("%f", &prices[i]);  // Store the price in the array.
  }
  // Display the prices of the items.
  for (int i = 0; i < 3; i++) {
    printf("The price of item %d is %.2f\n", i + 1, prices[i]);
  }

  return 0;
}
