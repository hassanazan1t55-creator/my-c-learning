# Day 32: Enumerations (Enums) and Control Flow in C

Today I mastered Enums in C, learning how to replace cryptic integer values with human-readable names to make code cleaner, self-documenting, and less error-prone.

## What I Learnt:
* **Basic Enums:** Understood how the compiler automatically assigns zero-based sequential integers to enum constants.
* **Custom Enums:** Learnt how to assign specific custom integer values (e.g., HTTP Status Codes like 200, 404) and how auto-incrementing works from a custom starting point.
* **Enum with Switch Case:** Paired enums with `switch` statements for cleaner, fast, and structured control flow instead of messy `if-else` chains.
* **Advanced Bitmask Enums:** Explored using bitwise left-shifts (`1 << x`) inside enums to create combination flags. Learnt how to merge states using Bitwise OR (`|`) and check individual flags using Bitwise AND (`&`) with `unsigned int`.

## Files in this Folder:
1. `01_enum_intro.c` -> Introduction to basic enum states and their hidden default integer values.
2. `02_custom_enum.c` -> Implementing custom states like server response codes.
3. `03_enum_switch.c` -> Clean access control workflow pairing an enum with a switch statement.
4. `04_bitmask_enum.c` -> Advanced game-engine simulation using bitwise shifts to track multiple player states simultaneously.
