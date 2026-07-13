# Day 38: Deleting the First Node (Delete at Head)

Today I learned how to safely remove the first node of a linked list in $O(1)$ constant time while managing dynamic memory correctly.

## What I Learnt:
* **Temporary Pointer Tracking:** Learned to store the address of the first node in a temporary pointer before moving the head reference.
* **Head Pointer Shift:** Understood how shifting `head = head->next` reassigns the starting point of the list to the second node.
* **Dynamic Memory Deallocation:** Practiced using `free()` to release deleted node memory from RAM and avoid memory leak issues.

## Files in this Folder:
1. `delete_from_beginning_basic.c` -> A foundational script demonstrating how to delete the head node in a 3-element list.
2. `bank_queue.c` -> A real-world queue system simulation removing processed customers from the front of the line.
3. `delete_student_roll.c` -> A student roll number manager deleting the first record from dynamic memory.
