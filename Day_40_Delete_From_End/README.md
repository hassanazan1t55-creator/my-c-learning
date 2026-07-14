# Day 40: Deleting the Last Node (Delete from End)

Today I learned how to traverse a singly linked list to find the second-last node using lookahead conditions and terminate the sequence by clearing the trailing node from RAM.

## What I Learnt:
* **Lookahead Traversal Condition:** Used `while (temp->next->next != NULL)` to traverse directly to the second-last node.
* **Sequence Termination:** Pointed `second_last->next = NULL` to make it the official end of the list.
* **End Node Cleanup:** Isolated the last node using a secondary pointer reference and released memory using `free()`.

## Files in this Folder:
1. `delete_end_basic.c` -> Program removing the final element from a basic 3-node linked list structure.
2. `shopping_list.c` -> Application tracking item cancellations by purging the tail node.
3. `leaderboard_scores.c` -> Scoreboard system removing the lowest final score dynamically.
