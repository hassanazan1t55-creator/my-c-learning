# Day 41: Searching a Node in a Linked List

Today I learned how to scan linear singly linked lists dynamically using conditional pointer traversal to search for specific elements in $O(n)$ time complexity.

## What I Learnt:
* **Linear Value Searching:** Implemented element comparison conditions while advancing pointers through consecutive list components.
* **Early Loop Termination:** Used boolean state flags and `break` statements to stop scanning processes immediately once target items are successfully matched.
* **List Exhaustion Validation:** Configured boundary checks terminating operations safely when pointers evaluate to `NULL` if target records do not exist.

## Files in this Folder:
1. `searching_list_basic.c` -> Standard sequential searching operation tracking integers within basic data structures.
2. `attendance_finder.c` -> Classroom record manager searching database logs for specific tracking numbers.
3. `inventory_search.c` -> E-commerce stock application processing query items to verify stock availability.
