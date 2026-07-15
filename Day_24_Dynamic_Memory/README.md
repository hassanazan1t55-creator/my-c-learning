# Day 24: Dynamic Memory Allocation

Today I learned how to allocate, expand, and manage memory dynamically at runtime using heap memory functions in C.

## What I Learnt:
* **Dynamic Allocation (`malloc`):** Allocated memory on the heap dynamically at runtime based on compile-time and user-defined inputs.
* **Array Resizing (`realloc`):** Expanded existing allocated memory to store additional elements without losing or overwriting previous data.
* **Memory Cleanup (`free`):** Used `free()` to release heap memory after execution to prevent memory leaks and keep system memory safe.
* **Safety Checks:** Verified pointer validity against `NULL` to ensure successful memory allocation before accessing elements.

## Files in this Folder:
1. `01_malloc_example.c` -> Program allocating dynamic memory for fixed elements using `malloc()`.
2. `02_user_input_dma.c` -> Program taking custom size from the user at runtime to allocate dynamic memory.
3. `03_realloc_example.c` -> Program expanding an existing allocated memory size using `realloc()` to append new data.
