#include <stdio.h>

int main() {
    // Reverse loop using non-zero condition truthiness
    for (int i = 5; i; i--) {
        printf("%d\n", i);
    }

    return 0;
}
