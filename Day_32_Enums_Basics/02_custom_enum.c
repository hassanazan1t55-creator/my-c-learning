#include <stdio.h>

// Creating an enum with Custom assigned values.
enum StatusCode { 
    Success = 200,
    Bad_Request = 400,
    Not_Found = 404,
    Server_Error = 500 
};
int main() {
  enum StatusCode api_response = Not_Found;

  if (api_response == Not_Found) {
    printf("Error: The requested page or resource could not be found.\n");
  }

  // Let's print the custom number to verify.
  printf("\n---- SYSTEM STATUS CODES ----\n");
  printf("Success Code: %d\n", Success);
  printf("Not Found Code: %d\n", Not_Found);
  printf("Server Error Code: %d\n", Server_Error);
  return 0;
}
