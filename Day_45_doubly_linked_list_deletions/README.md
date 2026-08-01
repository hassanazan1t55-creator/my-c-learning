# Day 45: Doubly Linked List Deletion

Today I learned how to delete nodes from a doubly linked list. In a doubly linked list, deleting a node is simpler because each node already knows the address of the node before it through its prev pointer. 

## What I Learnt:
* **Delete at Head:** Learned how to remove the first node by moving the head pointer to the next node, setting the new head node's prev pointer to NULL, and freeing the old node.
* **Delete at End:** Learned how to go to the last node, find the node right before it, set its next pointer to NULL, and free the last node.
* **Delete at Position:** Learned how to find a node in the middle and link the nodes before and after it directly to each other so we can safely remove the middle node.

## Files in this Folder:
1. `day_45_delete_head.c` -> Code for removing a node from the start of a doubly linked list.
2. `day_45_delete_end.c` -> Code for removing a node from the end of a doubly linked list.
3. `day_45_delete_middle.c` -> Code for removing a node from a middle position.
4. `day_45_ultimate_deletion.c` -> Code that includes all three deletion cases together.
