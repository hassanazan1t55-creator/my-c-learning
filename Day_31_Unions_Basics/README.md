# Day 31: Introduction to Unions & Shared Memory Layout

Today I explored the core mechanics of `union` in C programming and compared it with `struct` layouts to analyze how memory registers handle overlapping variables.

## What I Learnt:
* **Shared Memory Structure:** Unlike structures where every variable gets its own isolated memory address block, a Union shares a single memory slot among all its members.
  > Union mein saare variables ek hi memory space share karte hain, jiski wajah se data overwrite hota hai.
* **Size Calculation:** The total allocated byte footprint of a Union is determined solely by its largest member variable.
  > Jo sab se bada data type hoga (jaise `int` = 4 bytes), Union ka total memory size utna hi banega.
* **Data Overwrite Rules:** Writing data into one member variable directly mutates or corrupts the binary configuration of other members on that shared lane.
  > Ek variable mein value change karne se doosre variable ki data state ASCII table ke mutabiq automatic badal jati hai.
* **Binary Merging & Architecture:** Observed how multiple array components (`char text[4]`) fuse together into a single 32-bit Integer view inside RAM due to x86/x64 Little Endian configuration (e.g., how "ABC" maps to `4407873`).
  > Computer characters ke bits ko combine kar ke ek bada single integer block kaise banata hai, us matrix logic ko samjha.

## Files in this Folder:
1. `union_crash_test.c` -> Basic memory crash testing showing immediate byte replacement rules.
2. `union_advanced.c` -> Fusing char data types into single long digits to trace low-level system layouts.
