# Day 31: Unions and Shared Memory in C

Today I explored Unions in C, understanding how they differ from Structures by sharing a single memory location among all their members to optimize RAM usage.

## What I Learnt:
* **Shared Memory Concept:** Learnt that a Union allocates memory equal only to its largest member. Modifying one member overwrites the others, making it a great tool for memory-constrained systems.
* **Safe Union Management:** Practiced tracking the active member of a union using flag variables (`data_type`) to prevent reading invalid or corrupted data.
* **Anonymous Unions in Structs:** Implemented a professional design pattern by nesting an anonymous union inside a structure. This allows memory reuse while keeping the variable access syntax completely clean.
* **Safe String Formatting (`snprintf`):** Mastered using `snprintf` instead of unsafe functions like `strcpy` to format and copy string text safely with explicit size boundaries.

## Files in this Folder:
1. `01_union_intro.c` -> Basic union syntax demonstrating shared memory and data overwriting behavior.
2. `02_safe_union.c` -> Implementing a manual tracker state to safely access active union members.
3. `03_struct_union_combo.c` -> Advanced game-inventory simulation using anonymous unions inside a structure.
