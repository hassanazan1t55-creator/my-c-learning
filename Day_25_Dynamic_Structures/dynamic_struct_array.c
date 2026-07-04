#include <stdio.h>
#include <stdlib.h> // mandatory library for malloc and free

// define structure template for student profile
struct Student {
    int roll_num;
    int marks;
};
 
int main () {
    struct Student *s; // pointer to structure array
    int n;
    
    printf("Sir Kitny Student ka Data Enter Karna Ha: ");
    scanf("%d", &n);
 
    // allocate live memory for n students inside RAM
    // (malloc use kar ke n students ke liye dynamic blocks le liye)
    s = (struct Student*) malloc(n * sizeof(struct Student));
    
    // safety wall to check if computer RAM allocated space successfully
    if (s == NULL) {
        printf("Error Sir Ram Full Ha!");
        return 1;
    }
    
    // input loop using array index syntax with dot operator (.)
    // (Array index s[i] use ho raha hai isliye dot operator lagaya)
    for (int i = 0; i < n; i++) {
        printf("Student %d ka Roll Num Likhe: ", i + 1);
        scanf("%d", &s[i].roll_num);
        printf("Student %d ky Marks Enter kary: ", i + 1);
        scanf("%d", &s[i].marks);
    }
 
    // display output loop
    for (int i = 0; i < n; i++) {
        printf("Sir Student %d Ka Roll Num Ha %d\n", i + 1, s[i].roll_num);
        printf("Sir Student %d ky Marks Ha: %d\n", i + 1, s[i].marks);
    }
    
    // free dynamic block memory safely
    // (Kaam khatam ho gaya toh RAM ko wapas azaad kar diya)
    free(s);
    
    return 0;
}
