#include <stdio.h>

int main() {
    char data = 'A';    // Original char data (ASCII: 65)
    char key = 64;      // Secret Hacker Key (Binary: 01000000)
 
    // Encryption Phase: XORing data with key
    // Rule: Opposite bits give 1, same bits give 0. 65 ^ 64 becomes 1.
    char encrypted = data ^ key;
 
    // Decryption Phase: XORing encrypted data again with the same key
    // Rule: Reversible feature of XOR restores the original 65 ('A')
    char decrypted = encrypted ^ key;
 
    // Printing execution results (Encryption aur Decryption ke results print ho rahe hain)
    printf("Original Data: %c\n", data);
    printf("Encrypted (Hacker Cipher): %c (As integer: %d)\n", encrypted, encrypted);
    printf("Decrypted Data Back: %c\n", decrypted);
 
    return 0;
}
