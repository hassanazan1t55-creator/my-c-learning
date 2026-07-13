# Day 39: Deleting Node from Middle (Specific Position)

Today I mastered deleting a node from a specific middle position in a singly linked list through reference bypassing and explicit dynamic memory cleanup.

## What I Learnt:
* **Node Traversal to Target:** Navigated pointer references to stop exactly one node prior to the intended position.
* **Link Bypass Mechanism:** Reconnected `previous->next` directly to `target->next` to unlink the target node from the structure.
* **Memory Deallocation:** Used `free()` on the unlinked target node to permanently remove it from RAM and avoid memory leaks.

## Files in this Folder:
1. `delete_middle_basic.c` -> Positional deletion in a 3-element linked list using loop traversal.
2. `delete_middle_direct.c` -> Direct pointer re-linking and memory deallocation without extra loops.
3. `music_playlist.c` -> Real-world simulation of deleting a specific middle song record from a media playlist.
