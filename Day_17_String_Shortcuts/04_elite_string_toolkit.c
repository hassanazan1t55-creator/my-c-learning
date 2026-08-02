#include <stdio.h>
#include <string.h>

int main()
{
    char command[50];
    char databaseText[] = "User Role: ADMIN_ACCESS_GRANTED - System Operational";

    // Input command from the user.
    printf("Enter system Command (e.g., 'EXIT' or 'ADMIN_CHECK'): ");
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = 0; // Remove the newline character from the command.

    // Exact comparison using strcmp() function.
    if (strcmp(command, "EXIT") == 0) {
        printf("Exiting the system...\n");
        return 0;
    }

    // Prefix / Partial check using strncmp() function.
    if (strncmp(command, "ADMIN", 5) == 0) {
        printf("Admin command detected. Checking access...\n");
    }
    else {
        printf("Standard command detected. Proceeding with normal operations...\n");
    }

    // Substring search using strstr() function.
    char searchWord[] = "GRANTED";
    if (strstr(databaseText, searchWord) != NULL) {
        printf("Security Verification: Found keyword '%s' inside system logs!\n", searchWord);
    } 
    else {
        printf("Security Alert: Keyword '%s' not found in system logs!\n", searchWord);
    }

    return 0;
}   
