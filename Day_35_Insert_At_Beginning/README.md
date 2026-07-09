# Day 35: Inserting a Node at the Beginning (At Head)

Today I mastered dynamic node insertion at the start (head) of a linked list, understanding how pointer reassignment changes list ownership in $O(1)$ constant time complexity.

## What I Learnt:
* **The 3-Step Rule for Head Insertion:**
  1. Allocate dynamic RAM memory for the new node (`malloc`) and fill its data block.
  2. Point the new node's `next` pointer variable to the current `head` node address (`newNode->next = head`).
  3. Reassign the main `head` pointer to track the newly prepended node (`head = newNode`).
* **Inverted Order Sequence:** Discovered that prepending items continuously at the head position yields a reversed sequence relative to the insertion order.
* **Function Return Patterns:** Implemented functions returning updated pointer references (`struct Node*`) to maintain clean main function states during head mutations.

## Files in this Folder:
1. `insert_at_beginning_function.c` -> Standard modular implementation utilizing helper insertion functions returning updated head addresses.
2. `direct_head_insertion.c` -> Simplified inline script explaining exact raw pointer assignments during front node prepend operations.
3. `multiple_head_insertions.c` -> Sequential multi-node prepend script demonstrating building a full chain dynamically from head updates.
