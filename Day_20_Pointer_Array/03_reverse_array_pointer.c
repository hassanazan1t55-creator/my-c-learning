#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 15, 20 ,25};
    int *ptr = arr;

    printf("Array in Reverse Order:\n");
    // Reverse Array Using Pointer.
    for (int i = 4; i >= 0; i--) {
        printf("Index %d -> Value: %d\n", i, *(ptr + i));
    }

    return 0;
}
