# Day 29: Preprocessor Macros in C

Today I learned about preprocessor macros in C and how they allow us to manipulate code before the actual compilation stage.

## What I Learnt:
* **Basic Constants:** Learnt how to use `#define` to create constant numbers and text shortcuts. These don't take up any RAM memory and help the program run faster.
* **Function-like Macros:** Created shortcut macros that take arguments just like functions. They are highly efficient for quick calculations because they avoid the overhead of traditional function calls.
* **Conditional Compilation:** Mastered the use of `#ifdef` and `#endif` to easily turn blocks of code ON or OFF. This is incredibly useful for hiding debug logs in the final version of a software.

## Files in this Folder:
1. `01_basic_constants.c` -> Using simple macros to replace hardcoded values and save memory.
2. `02_function_macros.c` -> Implementing fast, argument-based macros for operations like squaring numbers.
3. `03_conditional_macros.c` -> Controlling code execution dynamically using debug flags.
