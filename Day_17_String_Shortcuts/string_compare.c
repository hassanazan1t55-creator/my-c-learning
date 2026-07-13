#include <stdio.h>
#include <string.h>

int main() {
  char save_password[] = "admin1234";
  char user_password[20];

  // Input Password From User.
  printf("Enter Password: ");
  scanf("%s", user_password);

  // Checking Password.
  if (strcmp(user_password, save_password) == 0) {
    printf("Access Granted !\n");
  } else {
    printf("Access Denied !\n");
  }

  return 0;
}
