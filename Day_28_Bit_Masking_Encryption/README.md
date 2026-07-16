# Day 28: Bit Masking and XOR Encryption

Today I dived deep into systems-level data manipulation, hardware flags management, and custom symmetric-key cryptography using bitwise operations in C.

## What I Learnt:
* **Bit Masking Principles:** Mastered dynamic status manipulation by leveraging Bitwise OR (`|`) to set (turn ON) specific bits and Bitwise AND with NOT (`& ~`) to clear (turn OFF) targeted bit boundaries.
* **Symmetric XOR Cryptography:** Explored the unique mathematical involution property of the Bitwise XOR (`^`) operator, where applying the same key twice fully encrypts and subsequently decrypts an unsigned integer.
* **Stream Buffer Encryption:** Scaled bitwise encryption architectures by engineering a loop sequence that parses memory array strings, performing localized sequential modifications on individual character ASCII values.

## Files in this Folder:
1. `01_bit_masking.c` -> Low-level bit flag control script demonstrating atomic setting and clearing algorithms.
2. `02_xor_encryption.c` -> Numerical data protection algorithm demonstrating fundamental key inversion math.
3. `03_string_encryption.c` -> Complete text buffer encryption tool performing character-by-character string encoding.
