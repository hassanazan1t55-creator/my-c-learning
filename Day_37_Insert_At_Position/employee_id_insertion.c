#include <stdio.h>
#include <stdlib.h>

// Node structure for employee list
struct EmployeeNode {
    int emp_id;
    struct EmployeeNode *next;
};

int main() {
    // 1. Setup initial employee list: 101 -> 103
    struct EmployeeNode *emp1 = (struct EmployeeNode *)malloc(sizeof(struct EmployeeNode));
    struct EmployeeNode *emp3 = (struct EmployeeNode *)malloc(sizeof(struct EmployeeNode));

    emp1->emp_id = 101;
    emp1->next = emp3;

    emp3->emp_id = 103;
    emp3->next = NULL;

    // 2. Create new employee 102 to insert at position 2
    struct EmployeeNode *emp2 = (struct EmployeeNode *)malloc(sizeof(struct EmployeeNode));
    emp2->emp_id = 102;

    // 3. Move to position 1
    struct EmployeeNode *temp = emp1;
    int target_position = 2;

    for (int i = 1; i < target_position - 1; i++) {
        temp = temp->next;
    }

    // 4. Link 102 in the middle
    emp2->next = temp->next; // Link 102 to 103
    temp->next = emp2;       // Link 101 to 102

    // 5. Print the employee list
    struct EmployeeNode *printPtr = emp1;
    printf("--- EMPLOYEE ID LIST ---\n\n");
    while (printPtr != NULL) {
        printf("Employee ID: %d\n", printPtr->emp_id);
        printPtr = printPtr->next;
    }

    // Free memory
    free(emp1);
    free(emp2);
    free(emp3);

    return 0;
}
