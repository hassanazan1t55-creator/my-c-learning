# Day 30: Structure Padding & Memory Alignment

Today I explored the internal behavior of memory alignment inside RAM and learned how to bypass structural padding using compiler directives.

## What I Learnt:
* **Structure Padding Scam:** Understood how the compiler automatically inserts empty bytes (padding) to align data variables with 4-byte or 8-byte CPU word boundaries for faster data fetching.
  > Processor speed badhane ke liye computer jo khali memory blocks chhorta hai, use detail se samjha.
* **Compiler Directives (`#pragma pack`):** Mastered the use of `#pragma pack(push, 1)` to disable default spacing padding and force structures to pack variables tightly.
  > Padding ko temporarily disable kar ke structures ka zero-waste packing layout seekha.
* **Restoring Configuration:** Implemented `#pragma pack(pop)` statements to reset memory boundary definitions safely after defining the required packed struct.
  > Task khatam hone par structural settings ko baseline par reset karne ka professional syntax process check kiya.
* **Console Verification:** Used the `sizeof` operator to evaluate the byte differences directly via console logs.
  > `sizeof` ke zariye 8 bytes (padded) aur 5 bytes (packed) memory block structures ka active footprint test kiya.

## Files in this Folder:
1. `practice_padding_basic.c` -> Introductory setup demonstrating basic normal vs. packed size structures.
2. `structure_padding.c` -> Main implementation logging out structured performance differences inside the memory stack.
