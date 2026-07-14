# Day 22: Structure Pointers and Arrow Operator

Today I learned how to create pointers to structures and access or modify structure members directly using the arrow operator (`->`).

## What I Learnt:
* **Structure Pointers:** Stored the memory address of a structure variable using pointer types (`struct Type *ptr`).
* **Arrow Operator (`->`):** Used the arrow operator as a shortcut to dereference and access structure fields (`ptr->field`).
* **Structures in Functions:** Passed structure memory addresses to functions via call-by-reference to modify original structure data efficiently.

## Files in this Folder:
1. `pointer_structure.c` -> Program demonstrating structure pointer creation and accessing attributes using the `->` operator.
2. `structure_modification.c` -> Program updating structure values directly in memory through structure pointers.
3. `structure_with_function.c` -> Program passing structure addresses to functions to alter values using call-by-reference.
