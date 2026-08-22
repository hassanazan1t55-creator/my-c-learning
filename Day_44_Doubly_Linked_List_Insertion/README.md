# Day 44: Doubly Linked List Insertion

Today I learned how to insert nodes into a Doubly Linked List (DLL). The basic logic is very similar to a singly linked list, but the main change is that we have to handle both forward (next) and backward (prev) pointer hooks to keep the chain unbroken.

## What I Learnt:
* **Insert at Head:** Learned how to add a node at the front by pointing its next field to the old head and updating the old head's prev field back to it.
* **Insert at End:** Learned how to traverse to the very last node and append a new one while securely mapping its backward link.
* **Insert at Position (Middle):** Learned how to place a node between two existing items by matching a set of four distinct pointer changes without losing the rest of the list.

