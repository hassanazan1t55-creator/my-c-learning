#include <stdio.h>

struct Car {
  int modelYear;
  float price;
};

int main() {
  struct Car car1;

  // Input From User to store Car Information.
  printf("Enter Car Model Year: ");
  scanf("%d", &car1.modelYear);
  printf("Enter Car Price: ");
  scanf("%f", &car1.price);

  // Displaying Car Information.
  printf("\nModel Year: %d\n", car1.modelYear);
  printf("Price: %.2f\n", car1.price);

  return 0;
}
