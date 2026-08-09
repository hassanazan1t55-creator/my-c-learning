#include <stdio.h>

int main() {
    if(1) {
      printf("This if is executed!\n");
    }
    if(2342) {
      printf("This if is also executed!\n");
    }
    if(21.54) {
      printf("This if is also executed!\n");
    }
    if('s') {
      printf("This character inside if is also executed!\n");
    }
    if(0) {
      printf("I am zero - I am not executed\n");
    }
    return 0;
}
