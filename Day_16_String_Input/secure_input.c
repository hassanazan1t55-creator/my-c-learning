#include <stdio.h>

int main() {
  // Declaring Variables.
  char status[10];

  // Input From User Asking For Status.
  printf("Sir Apna Aj ka Status Likhe: ");
  fgets(status, sizeof(status), stdin);

  // Displaying Output.
  printf("Welcome Sir Today Your Status is: %s\n", status);

  return 0;
}
