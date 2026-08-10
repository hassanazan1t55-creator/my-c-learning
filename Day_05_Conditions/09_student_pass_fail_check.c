#include <stdio.h>

int main() {
    int marks1, marks2, marks3;

    // Taking marks input
    printf("Enter Marks 1: ");
    scanf("%d", &marks1);

    printf("Enter Marks 2: ");
    scanf("%d", &marks2);

    printf("Enter Marks 3: ");
    scanf("%d", &marks3);

    // Displaying marks
    printf("The marks are %d, %d and %d\n", marks1, marks2, marks3);

    // Checking individual subject failure (less than 30)
    if (marks1 < 30 || marks2 < 30 || marks3 < 30) {
        printf("You failed due to low marks in individual subject(s).\n");
    }
    // Checking total percentage failure (less than 40%) using 3.0 for exact precision
    else if ((marks1 + marks2 + marks3) / 3.0 < 40) {
        printf("You failed due to overall low percentage.\n");
    } 
    else {
        printf("Congratulations, You Passed!\n");
    }

    return 0;
}
