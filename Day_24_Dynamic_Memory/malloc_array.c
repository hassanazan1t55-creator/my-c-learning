#include <stdio.h>
#include <stdlib.h> // library for dynamic memory functions like malloc and free

int main() {
    int n;
    int *arr; // pointer to hold live memory address
    
    printf("Sir Kitny Number ky Liy Live Memory chiya: ");
    scanf("%d", &n);
 
    // allocate live memory from RAM using malloc
    // (malloc use kar ke RAM se live numbers ke liye space maang li)
    arr = (int*) malloc(n * sizeof(int));
 
    // safety check to verify if RAM is full
    // (RAM full hone par code crash hone se bachane ke liye safety door)
    if (arr == NULL) {
        printf("Error Sir Lagta Ha Ram Full Ha!");
        return 1;
    }
    
    printf("Sir Ram Sy Memory kamyabhi sy mil gai ha Sir!\n");
   
    // loop to take dynamic inputs from user
    // (User se live marks/values data input lene ke liye loop)
    for (int i = 0; i < n; i++) {
        printf("Enter Value %d ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // loop to print all dynamically allocated values
    // (Live memory se data read kar ke screen par print karne ke liye loop)
    for (int i = 0; i < n; i++) {
        printf("Value %d ha %d\n", i + 1, arr[i]);
    }
    
    // release RAM memory to prevent memory leaks
    // (Kaam khatam hone par computer ko hang hone se bachane ke liye RAM free ki)
    free(arr);  
    
    return 0;
}
