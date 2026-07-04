#include <stdio.h>

// define structure for student report card
// (Student data ke liye structure design banaya)
struct Student {
    int roll_num;
    int marks;
};

int main() {
    int n;
    printf("Sir Kitny Student Ka Data Enter Karna Ha: ");
    scanf("%d", &n);
    
    struct Student data[n]; // dynamic structure array
 
    FILE *f; // file pointer variable
    
    // open file in write mode "w"
    // (File ko write mode mein open kiya)
    f = fopen("students_report.txt", "w");
    
    // safety check to prevent crash if file error
    // (File open na ho to crash se bachane ke liye safety door)
    if (f == NULL) {
        printf("Error Sir File Nahi Khuli!\n");
        return 1;
    }
 
    // loop to take input and write directly to hard drive
    // (Input lene aur sath hi direct file mein save karne ke liye loop)
    for (int i = 0; i < n; i++) {
        printf("==========================================\n");  
        printf("Sir Student %d Ky Marks Likhe: ", i + 1);
        scanf("%d", &data[i].marks);
        printf("Sir Student %d Ka Roll Number Likhe: ", i + 1);
        scanf("%d", &data[i].roll_num);
        printf("==========================================\n");
 
        // write data to text file
        // (Hard drive par file ke andar data daal diya)
        fprintf(f, "Roll Num: %d Marks: %d\n", data[i].roll_num, data[i].marks);
        printf("Sir Roll Num: %d Ky Marks Ha: %d\n", data[i].roll_num, data[i].marks);
    }
    
    // close file handler safely
    // (Kaam khatam kar ke file pointer safe band kiya)
    fclose(f);
    
    return 0;
}
