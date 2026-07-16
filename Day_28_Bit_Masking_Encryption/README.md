# Day 28: Bit Masking and XOR Encryption

Today I worked on low-level data manipulation and basic encryption using bitwise operations in C.

## What I Learnt:
* **Bit Masking:** Learnt how to use the OR (`|`) operator to turn a specific bit ON, and the AND NOT (`& ~`) combination to turn a bit OFF without affecting other bits.
* **XOR Encryption:** Explored how the XOR (`^`) operator works for data security. If you XOR data with a secret key, it scrambles the value. Doing it a second time with the same key recovers the original data.
* **String Encryption:** Applied the XOR logic to a loop that processes a text message character by character. It modifies the ASCII values to secure the text and decodes it back to normal.

## Files in this Folder:
1. `01_bit_masking.c` -> Script demonstrating how to turn bit flags ON and OFF safely.
2. `02_xor_encryption.c` -> Program showing how to encrypt and decrypt a number using a secret key.
3. `03_string_encryption.c` -> A basic tool that encrypts a text string and decodes it back.
