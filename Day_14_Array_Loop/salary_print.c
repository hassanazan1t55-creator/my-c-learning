#include <stdio.h>

int main() {
    // array for store 3 salaries
    // (3 tankhwah save karne ke liye array)
    int salaries[3] = {50000, 60000, 70000};
    int s;
 
    // loop run 3 times to print all salaries
    // (Saari salaries print karne ke liye loop 3 dafa chalega)
    for (s = 0; s < 3; s++) {
        // print salary with Rs text
        // (Rs text ke sath salary print karna)
        printf("Salary %d: Rs. %d\n", s, salaries[s]);
    }
    
    return 0;
}
