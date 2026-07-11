# Day 16: Secure String Input (fgets)

Today I practiced capturing safe string inputs in C using `fgets` to prevent buffer overflow issues and handle multi-word inputs containing spaces correctly.

## What I Learnt:
* **Safe String Scanning:** Learned why `fgets` is preferred over `scanf` for reading strings with spaces safely.
* **Size Boundary Control:** Used `sizeof()` inside `fgets` to automatically match character array capacity and prevent buffer overflow.
* **Input Buffer Flushing:** Mastered clearing leftover newline characters from the buffer using `while (getchar() != '\n');` when combining `scanf` and `fgets` inside loops.

## Files in this Folder:
1. `fgets_string_input.c` -> A basic program taking full name input using `fgets` to read complete text strings with spaces.
2. `secure_input.c` -> A status reporting script testing fixed array boundaries with `fgets` input.
3. `student_report.c` -> A student report system combining loops, mark calculations, buffer clearing, and pass/fail conditions.
