# Day 25: Dynamic Structures

Today I learned how to combine Structures with Dynamic Memory Allocation (DMA) and File Handling to manage complex custom data types dynamically and persist them to permanent storage.

## What I Learnt:
* **Dynamic Structure Allocation:** Allocated heap memory for single structure instances and accessed members via the arrow (`->`) operator.
* **Dynamic Structure Arrays:** Allocated contiguous memory for an array of structures based on runtime user input using `malloc()`.
* **Array notation vs Pointer syntax:** Used the dot (`.`) operator when accessing dynamic structure elements through array indexing (e.g., `ptr[i].member`).
* **DMA + File Handling Integration:** Combined dynamic arrays with file operations (`fopen`, `fprintf`) to permanently save runtime-allocated structure logs into text files.

## Files in this Folder:
1. `01_dynamic_struct.c` -> Program allocating dynamic heap memory for a single structure instance.
2. `02_dynamic_struct_array.c` -> Program creating a dynamic array of structures based on user-defined counts.
3. `03_dynamic_struct_file.c` -> Program saving a dynamically allocated array of structures directly into an external text file.
