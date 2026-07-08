#include <stdio.h>
#include <stdlib.h>

// Professional Node Structure for Subject Marks
struct SubjectNode {
    int marks;
    struct SubjectNode *next;
};

int main() {
    // --- CREATING 4 NODES FOR 4 SUBJECTS ---
    struct SubjectNode *math = (struct SubjectNode *)malloc(sizeof(struct SubjectNode));
    struct SubjectNode *english = (struct SubjectNode *)malloc(sizeof(struct SubjectNode));
    struct SubjectNode *science = (struct SubjectNode *)malloc(sizeof(struct SubjectNode));
    struct SubjectNode *computer = (struct SubjectNode *)malloc(sizeof(struct SubjectNode));

    // Assigning marks and linking the nodes
    math->marks = 85;
    math->next = english;

    english->marks = 90;
    english->next = science;

    science->marks = 78;
    science->next = computer;

    computer->marks = 95;
    computer->next = NULL; // End of the student record

    // --- TRAVERSING AND CALCULATING TOTAL ---
    struct SubjectNode *temp = math; // Temporary pointer starting at the first subject
    int total_marks = 0;
    int subject_count = 1;

    printf("--- STUDENT ACADEMIC MARKS TRACKER ---\n\n");

    // Loop through the linked list
    while (temp != NULL) {
        printf("Subject %d Marks: %d\n", subject_count, temp->marks);
        total_marks += temp->marks; // Accumulating total marks
        subject_count++;            // Incrementing subject counter
        temp = temp->next;          // Moving to the next subject node
    }

    printf("\n-----------------------------------\n");
    printf("Total Calculated Marks: %d / 400\n", total_marks);
    printf("-----------------------------------\n");

    // Freeing allocated memory
    free(math);
    free(english);
    free(science);
    free(computer);

    return 0;
}
