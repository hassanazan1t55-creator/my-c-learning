# Day 37: Inserting a Node at a Specific Position

Today I learned how to insert a new node into any specific position inside a linked list by updating pointer links correctly.

## What I Learnt:
* **Linking Order Matters:** Pointing the new node to the next item first prevents losing the rest of the list in memory.
* **Stopping Before Target:** The loop needs to stop at `position - 1` so you are standing on the node right before where the new item goes.
* **Memory Leak Prevention:** Updating links in the wrong order breaks the chain and loses references to remaining nodes.

## Files in this Folder:
1. `insert_at_position_basic.c` -> Basic example showing how to insert node 20 between 10 and 30.
2. `game_leaderboard.c` -> Practice program that places a score of 90 into rank 2 on a leaderboard.
3. `employee_id_insertion.c` -> Real-world style program inserting missing employee ID 102 into sequence.
