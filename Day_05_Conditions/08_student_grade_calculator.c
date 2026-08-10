#include <stdio.h>

int main() {
    char grade;
    int marks = 50;

    // Checking conditions using && (AND) operator
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80 && marks < 90) {
        grade = 'B';
    } else if (marks >= 70 && marks < 80) {
        grade = 'C';
    } else if (marks >= 60 && marks < 70) {
        grade = 'D';
    } else if (marks >= 50 && marks < 60) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Displaying Grade
    printf("The Student Marks is %d\nStudent Grade is: %c\n", marks, grade);

    return 0;
}
