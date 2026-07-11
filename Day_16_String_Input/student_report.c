#include <stdio.h>

int main() {
  // Initializing Variables.
  int i;
  int english;
  int math;
  char name[50];

  // Using For Loop.
  for (i = 0; i < 2; i++) {
    printf("==========================================\n");

    // Input From User Asking For Student Name, English, Math Marks.
    printf("Enter Student Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Your English Marks: ");
    scanf("%d", &english);

    printf("Enter Your Math Marks:");
    scanf("%d", &math);

    // Clearing Buffer.
    while ((getchar()) != '\n');

    // Calculating Total Marks.
    int grand_total = math + english;

    // Displaying Output.
    printf("\n Student Name is: %s", name);
    printf("\n Your English Makrs is: %d \n", english);
    printf("\n Your Math Marks is: %d\n", math);
    printf("\n %s Total Marks: %d\n", name, grand_total);
    printf("==========================================\n");

    // Checking Condition.
    if (grand_total >= 50) {
      printf("Congrats You are Passed\n");
    } else {
      printf("Sorry You are Failed\n");
    }
  }

  return 0;
}
