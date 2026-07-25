#include <stdio.h>

int main() {
  // Variable to store the speed of the car.
  int speed_checker;

  // Prompt the user to enter the speed of the car.
  printf("Enter the speed of the car (in km/h): ");
  scanf("%d", &speed_checker);

  // Check the speed and print the oppropriate message based on the speed.
  if (speed_checker >= 120) {
    printf("You are driving too fast, please slow down!\n");
  } else if (speed_checker >= 80) {
    printf("You are driving at a normal speed.\n");
  } else {
    printf("You are driving too slow.\n");
  }
  return 0;
}
