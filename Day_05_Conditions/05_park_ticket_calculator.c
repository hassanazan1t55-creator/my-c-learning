#include <stdio.h>

int main() {
  // Declaring Variables.
  int age;
  float ticket_price;

  // Input from user to enter age.
  printf("Enter your age: ");
  scanf("%d", &age);

  // Checking conditions and calculate ticket price.
  if (age >= 60) {
    ticket_price = 1000 * 0.50;
    printf("Ticket Price: %.1f", ticket_price);
  } else if (age >= 13) {
    ticket_price = 1000;
    printf("Ticket Price: %.1f", ticket_price);
  } else if (age >= 5) {
    ticket_price = 500;
    printf("Ticket Price: %.1f", ticket_price);
  } else if (age >= 0) {
    ticket_price = 0;
    printf("Ticket Price: %.1f", ticket_price);
  } else {
    printf("Invalid Age Entered.");
    return 1;
  }

  return 0;
}
