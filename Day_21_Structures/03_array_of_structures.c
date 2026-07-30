#include <stdio.h>

// Defining a structure to store car details.
struct Car {
  int modelYear;
  float price;
};

int main() {
  struct Car garage[2];  // Declaring a structure array to store car details.

  // Inputting Car Details From User.
  for (int i = 0; i < 2; i++) {
    printf("Enter the Car Details for Car %d:\n", i + 1);

    printf("Model Year: ");
    scanf("%d", &garage[i].modelYear);

    printf("Price: ");
    scanf("%f", &garage[i].price);
  }

  // Displaying Car Details.
  for (int i = 0; i < 2; i++) {
    printf("Car %d -> Model Year: %d, Price: %.2f\n", i + 1, garage[i].modelYear, garage[i].price);
  }

  return 0;
}
