# Day 26: Bitwise Operators

Today I mastered low-level bit manipulation in C by learning how to interact directly with individual bits (0s and 1s) of data using bitwise logical, shift, and practical comparison operators.

## What I Learnt:
* **Bitwise Logical Operators:** Used `&` (AND), `|` (OR), and `^` (XOR) to perform bit-by-bit operations on numerical values.
* **Bitwise NOT (`~`):** Explored unary bitwise inversion and understood how the system calculates the result using the formula `~x = -(x + 1)`.
* **Bitwise Shifts (`<<` & `>>`):** Shifted bits left and right for lightning-fast multiplication and division by powers of 2.
* **Bitwise Optimization (Even/Odd Check):** Implemented an elite-level optimization using `num & 1` to check for even or odd numbers by inspecting the Least Significant Bit (LSB) instead of using the traditional modulo (`%`) operator.

## Files in this Folder:
1. `01_bitwise_basics.c` -> Program demonstrating basic bitwise operations including AND, OR, XOR, and NOT.
2. `02_bitwise_shifts.c` -> Program utilizing Bitwise Left Shift and Right Shift operators for rapid mathematical bit manipulation.
3. `03_bitwise_even_odd.c` -> Program optimizing an Even/Odd number check using the Bitwise AND (`&`) operator.
