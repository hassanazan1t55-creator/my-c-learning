# Day 34: Linked List Traversal & Data Processing

Today I practiced traversing through dynamic linked list structures using iteration loops to read, process, and search data across linked memory addresses.

## What I Learnt:
* **Temporary Pointer Traversal:** Learned how to create a temporary reference pointer (`struct Node *temp = head`) to safely step through a linked list without losing track of the head node address.
* **Dynamic Data Aggregation:** Practiced performing calculations (accumulating total student marks) dynamically during traversal, showing that processing works regardless of total chain length.
* **Target Search Logic:** Implemented searching operations using conditional checks inside traversal loops, leveraging the `break` keyword to exit early when a match is detected.

## Files in this Folder:
1. `linked_list_traversal.c` -> Foundational script demonstrating simple sequence printing across three linked nodes.
2. `student_marks_tracker.c` -> Practical academic system calculating cumulative grade totals across subject nodes during traversal.
3. `port_search_engine.c` -> Target search script checking network port addresses across dynamic node pointers with optimized loop breaks.
