# Day 30: Structure Padding and Packing in C

Today I explored how the compiler manages memory allocation for structures and how data alignment can impact the final size of an application.

## What I Learnt:
* **Structure Padding:** Discovered that the compiler automatically inserts empty bytes (padding) to align variables with the processor's word boundaries. A structure that mathematically should take 5 bytes can end up taking 8 or 12 bytes.
* **Compiler Directives (`#pragma pack`):** Learnt how to use `#pragma pack(push, 1)` and `#pragma pack(pop)` to safely disable padding for specific structures, forcing the compiler to align variables back-to-back.
* **Manual Optimization:** Realized that simply reordering structure members from largest to smallest data type can naturally reduce memory waste without sacrificing CPU performance.
* **Best Practices:** Practiced using the correct `%zu` format specifier to handle `size_t` values returned by the `sizeof` operator.

## Files in this Folder:
1. `01_padding_intro.c` -> Demonstrating how default compiler alignment introduces padding bytes.
2. `02_structure_packing.c` -> Forcing 1-byte alignment using compiler pragmas to minimize size.
3. `03_manual_optimization.c` -> Optimizing memory footprints manually by reordering struct members.
4. `04_sensor_data_practice.c` -> A real-world smartwatch sensor simulation comparing raw vs. optimized structures.
