# Day 33: Transitioning to Data Structures - Linked Lists Introduction

Today I advanced from Phase 1 into Phase 2, moving away from static arrays to learn how data blocks link up dynamically across memory spaces.

## What I Learnt:
* **Array Limitations:** Static arrays lock memory boundaries upon compilation, leading to size limit overflows or unutilized memory leakage risks.
* **The Train Compartment Concept:** A Linked List node separates structural space into an active data payload slot and a dynamic location pointer address block.
* **The Magic Line Breakdown:** Evaluated `struct Node *head = (struct Node *)malloc(sizeof(struct Node));` to parse byte calculations, dynamic runtime initialization blocks, and casting models.
* **Dynamic Linking Advantages:** Linking nodes together creates an infinite data chain layout where inserting elements or scaling data sizes requires zero element-shifting overhead.

## Files in this Folder:
1. `linked_list_intro.c` -> Foundational setup testing dynamic allocations and parsing single node initializations.
2. `practice_player_node.c` -> Practice template allocating custom structural attributes inside memory maps.
3. `practice_two_nodes.c` -> Connecting two independent node addresses using matching address pointer variables.
