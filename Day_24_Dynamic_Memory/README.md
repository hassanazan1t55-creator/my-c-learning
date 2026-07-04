### Day 24: Dynamic Memory Allocation (Live RAM Request)
* **Folder:** `Day_24_Dynamic_Memory`
* **File:** `malloc_array.c`
* **What I Learnt:**
  * Include `stdlib.h` header to use professional memory management utilities.
    > Dynamic memory allocation features use karne ke liye `stdlib.h` include kiya.
  * Use `malloc()` function to request live runtime data blocks from system RAM.
    > Program chaltay waqt RAM se live storage mangne ke liye `malloc` ka use seekha.
  * Apply `sizeof()` keyword to safely calculate type byte count automatically across different architectures.
    > Har computer type par automatically byte size match karne ke liye `sizeof` samjha.
  * Use `free()` command at the end to clean raw blocks and prevent severe Memory Leaks.
    > Memory leak se computer hang hone se bachane ke liye memory free karna seekha.
