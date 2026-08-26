#include <stdio.h>

void countCalls() {
    static int count = 0; // Retains its value across function calls
    count++;
    printf("Total calls: %d\n", count);
}

int main() {
    countCalls();
    countCalls();
    countCalls();
    return 0;
}
