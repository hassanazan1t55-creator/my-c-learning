# Day 27: Advanced Bitwise Shifts

Today I explored the performance and architectural mechanics of Bitwise Shift Operators (`<<` and `>>`) in C, focusing on hardware-level math and bit overflow limits.

## What I Learnt:
* **Mathematical Equivalents:** Mastered how `num << count` performs rapid multiplication by $2^{\text{count}}$, and `num >> count` performs integer division by $2^{\text{count}}$.
* **Dynamic Bit Ingestion:** Implemented runtime input evaluation to dynamically shift bits based on user preferences.
* **Bit Overflow Limits:** Observed how shifting an `unsigned int` bit beyond the 32-bit hardware boundary causes data truncation, forcing the value to overflow back to `0`.

## Files in this Folder:
1. `01_shift_math.c` -> Basic test demonstrating hardcoded bitwise shift multiplication and division boundaries.
2. `02_dynamic_shift.c` -> Interactive tool calculating dynamic shift outcomes using runtime variables.
3. `03_shift_overflow.c` -> Diagnostic script utilizing a sequence loop to intentionally trigger bit overflow boundaries.
