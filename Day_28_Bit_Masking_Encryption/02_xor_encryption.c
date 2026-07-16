#include <stdio.h>

int main() {
    unsigned int original_data = 44; // Binary: 00101100
    unsigned int secret_key = 173;   // Binary: 10101101

    printf("Original Data: %u\n", original_data);
    printf("Secret Key   : %u\n\n", secret_key);

    // Encrypt data using XOR
    unsigned int encrypted_data = original_data ^ secret_key;
    printf("Encrypted Cipher Text: %u\n", encrypted_data);

    // Decrypt data using same XOR key
    unsigned int decrypted_data = encrypted_data ^ secret_key;
    printf("Decrypted Original Data: %u\n", decrypted_data);

    return 0;
}
