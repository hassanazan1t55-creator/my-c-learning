#include <stdio.h>

// Activating Logging Mode (Is line ko band ya chalu kar ke magic dekhna)
#define LOG_MODE 

int main() {
    // 1. Trying to open a file (File open karne ki koshish)
    FILE *file = fopen("hacker_log.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // First check: temporary log instruction for compilation
    // (Pehli dafa check kiya - text logging active hone par chala)
#ifdef LOG_MODE
    printf("[DEBUG] File 'hacker_log.txt' successfully created!\n");
#endif

    // 2. Writing data to the file (File mein data likha ja raha ha)
    fprintf(file, "Azan bhai ka secure data yahan save ha.\n");

    // Second check: track file writing phase
    // (Doosri dafa check kiya - memory operation trace kiya)
#ifdef LOG_MODE
    printf("[DEBUG] Secure data has been written to the file.\n");
#endif

    // 3. Closing the file (File band ki ja rahi ha)
    fclose(file);

    // Third check: confirm stream shutdown safely
    // (Teesri dafa check kiya - buffer clearance confirm kiya)
#ifdef LOG_MODE
    printf("[DEBUG] File closed safely. Mission Successful!\n");
#endif

    printf("Program Execution Finished.\n");
    return 0;
}
