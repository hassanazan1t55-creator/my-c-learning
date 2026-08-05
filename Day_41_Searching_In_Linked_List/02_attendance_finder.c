#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure for Student Records
struct StudentNode {
    int roll_no;
    struct StudentNode *next;
};

int main() {
    // Class Roll Numbers: 101 -> 105 -> 108 -> NULL
    struct StudentNode *s1 = (struct StudentNode *)malloc(sizeof(struct StudentNode));
    struct StudentNode *s2 = (struct StudentNode *)malloc(sizeof(struct StudentNode));
    struct StudentNode *s3 = (struct StudentNode *)malloc(sizeof(struct StudentNode));

    s1->roll_no = 101; 
    s1->next = s2;

    s2->roll_no = 105; 
    s2->next = s3;

    s3->roll_no = 108; 
    s3->next = NULL;

    // Roll Number Search
    int targetRoll = 108;
    struct StudentNode *temp = s1;
    bool isPresent = false;

    while (temp != NULL) {
        if (temp->roll_no == targetRoll) {
            isPresent = true;
            break;
        }
        temp = temp->next;
    }

    // Attendance Log Output
    printf("--- ATTENDANCE REGISTER ---\n");
    if (isPresent) {
        printf("Roll Number %d is PRESENT!\n", targetRoll);
    } else {
        printf("Roll Number %d is ABSENT!\n", targetRoll);
    }

    // Free memory
    free(s1); 
    free(s2); 
    free(s3);

    return 0;
}
