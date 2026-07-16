#include <stdio.h>

int main() {
    char message[] = "Hello"; 
    unsigned char key = 77;   

    printf("Original Message: %s\n\n", message);

    // Encrypting the string character by character
    for (int i = 0; message[i] != '\0'; i++) {
        message[i] = message[i] ^ key; 
    }
    printf("Encrypted Message (Garbage Text): %s\n\n", message);

    // Decrypting the string back to original
    for (int i = 0; message[i] != '\0'; i++) {
        message[i] = message[i] ^ key; 
    }
    printf("Decrypted Message: %s\n", message);

    return 0;
}
