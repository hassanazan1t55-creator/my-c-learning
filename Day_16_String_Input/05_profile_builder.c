#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[30];
    char lastName[30];
    char fullName[60] = ""; // Initialize fullName to an empty string.
    char backupName[60];

    // Prompt the user for their first name and last name.
    printf("Enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0; // Remove the newline character from the first name.

    printf("Enter your last name: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = 0; // Remove the newline character from the last name.

    // Joining the string using strcat() function.
    strcat(fullName, firstName);
    strcat(fullName, " "); // Add a space between first and last name.
    strcat(fullName, lastName);

    // Copy string using strcpy() function.
    strcpy(backupName, fullName);

    // Checking length of the full name using strlen() function.
    size_t length = strlen(fullName);

    // Display the full name and its length.
    printf("===========================\n");
    printf("Full Name: %s\n", fullName);
    printf("Length of Full Name: %zu\n", length);
    printf("Backup Name: %s\n", backupName);
    printf("===========================\n");

    return 0;
}
