#include <stdio.h>
#include <stdlib.h>

// Node structure for student roll numbers
struct StudentNode {
    int roll_no;
    struct StudentNode *next;
};

int main() {
    // Setup initial student list: 10 -> 20 -> 30
    struct StudentNode *head = (struct StudentNode *)malloc(sizeof(struct StudentNode));
    struct StudentNode *s2 = (struct StudentNode *)malloc(sizeof(struct StudentNode));
    struct StudentNode *s3 = (struct StudentNode *)malloc(sizeof(struct StudentNode));

    head->roll_no = 10;
    head->next = s2;

    s2->roll_no = 20;
    s2->next = s3;

    s3->roll_no = 30;
    s3->next = NULL;

    // Display initial list
    struct StudentNode *printPtr = head;
    printf("Initial Student List:\n");
    while (printPtr != NULL) {
        printf("Roll No: %d -> ", printPtr->roll_no);
        printPtr = printPtr->next;
    }
    printf("NULL\n\n");

    // Delete first student
    struct StudentNode *temp = head; // Keep track of current head node
    head = head->next;               // Shift head pointer to next node
    free(temp);                      // Free first student node memory

    // Display updated list
    printPtr = head;
    printf("List After Deleting First Student:\n");
    while (printPtr != NULL) {
        printf("Roll No: %d -> ", printPtr->roll_no);
        printPtr = printPtr->next;
    }
    printf("NULL\n");

    // Clean up remaining memory
    free(s2);
    free(s3);

    return 0;
}
