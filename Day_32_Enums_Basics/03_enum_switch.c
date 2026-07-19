#include <stdio.h>

// Creating an Enum for User Roles
enum UserRole { ADMIN, MODERATOR, GUEST };

int main() {
  enum UserRole current_user = MODERATOR;

  // Using Switch Case with our Enum
  switch (current_user) {
    case ADMIN:
      printf("Welcome Admin! You have full control over the system.\n");
      break;

    case MODERATOR:
      printf("Welcome Moderator! You can manage posts and comments.\n");
      break;

    case GUEST:
      printf("Welcome Guest! You only have read-only access.\n");
      break;

    default:
      printf("Unknown Role! Access Denied.\n");
  }

  return 0;
}
