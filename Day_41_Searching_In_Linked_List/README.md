# Day 41: Searching a Node in a Singly Linked List

This folder contains practical implementations demonstrating how to perform sequential lookup and element searching inside a Singly Linked List using dynamic pointers in C.

## What I Learnt:
* **Linked List Linear Search:** Scanned through custom node structures from the `head` to check for targeted data values.
* **Early Loop Termination:** Integrated boolean condition flags (`true`/`false`) along with `break` statements to stop pointer traversal immediately once the target node is found.
* **Boundary Validation:** Handled list exhaustion conditions safely, returning structural feedback if the pointer hits `NULL` without finding the element.

## Files in this Folder:
1. `searching_list_basic.c` -> Core logic implementing lookups for specific numbers within a 3-node linked list.
2. `attendance_finder.c` -> Real-world simulation of an academic attendance register checking if a student's Roll Number exists in the sequence.
3. `inventory_search.c` -> E-commerce inventory management tracking system checking if a unique Product ID is currently in stock or out of stock.
