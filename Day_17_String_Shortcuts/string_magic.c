#include <stdio.h>
#include <string.h> // include this library for string shortcuts
                    // (String ke shortcuts use karne ke liye library shamil ki)

int main() {
    char fav_coding[] = "C Language";
    char copy_coding[20]; // empty box for copy
                          // (Copy karne ke liye khali dabba)
 
    // copy fav_coding into copy_coding
    // (Data ko copy karne ka shortcut)
    strcpy(copy_coding, fav_coding);
 
    // get total letters count of string
    // (Letters ginne ka shortcut)
    int length = strlen(copy_coding);
 
    // print copy text and length size
    // (Copy hua text aur length print karna)
    printf("jo Coding Name copy hua ha wo ha: %s\n", copy_coding);
    printf("Or us Coding Name ki Length ha: %d\n", length);
 
    // Program ko Safe band karna
    return 0;
}
