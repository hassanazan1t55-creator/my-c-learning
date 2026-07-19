# Day 33: Introduction to Linked Lists in C

Today I stepped into the world of Data Structures and Algorithms (DSA) by learning about Linked Lists, dynamic node creation, and pointer-based manipulation in C.

## What I Learnt:
* **Linked List Architecture:** Understood how a linked list differs from arrays by using independent nodes connected via pointers scattered across RAM.
* **Dynamic Node Allocation:** Practiced allocating memory dynamically for structures at runtime using `malloc()`.
* **Modular Code Flow:** Implemented a clean, reusable `printList()` function to traverse and print the nodes instead of writing loops inside `main`.
* **Head Insertion Logic:** Mastered how to dynamically prepend data to a list using an `insertAtFirst()` function, rewriting pointer links seamlessly.
* **Memory Management:** Practiced explicitly freeing dynamically allocated structures using `free()` to prevent leaks.

## Files in this Folder:
1. `01_node_creation.c` -> Allocating and defining a single standalone node using pointers.
2. `02_multiple_nodes.c` -> Linking 3 separate nodes together sequentially.
3. `03_traversal_function.c` -> Moving traversal logic out of main into a dedicated printing function.
4. `04_insert_at_start.c` -> Dynamic insertion function to add new elements at the head of the list.
