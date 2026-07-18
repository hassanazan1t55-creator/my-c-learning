# Day 44: Doubly Linked List Insertion

Today I learned how to insert nodes into a Doubly Linked List (DLL). The basic logic is very similar to a singly linked list, but the main change is that we have to handle both forward (next) and backward (prev) pointer hooks to keep the chain unbroken.

## What I Learnt:
* **Insert at Head:** Learned how to add a node at the front by pointing its next field to the old head and updating the old head's prev field back to it.
* **Insert at End:** Learned how to traverse to the very last node and append a new one while securely mapping its backward link.
* **Insert at Position (Middle):** Learned how to place a node between two existing items by matching a set of four distinct pointer changes without losing the rest of the list.

## Files in this Folder:
1. `doubly_list_insertion.c` -> Basic program testing entry operations at the head and tail of the list.
2. `guest_entry_system.c` -> Simulation program using a guest lineup model to practice front and back inserts.
3. `doubly_list_mid_insertion.c` -> Core practice file targeting insertion inside specific middle index points.
4. `whatsapp_chat_pin.c` -> Real-world simulation that pins chat entries right at the head of a list.
5. `song_playlist_queue.c` -> Media player queue tracking that appends new tracks at the end of the list.
6. `game_leaderboard.c` -> Score ranking program inserting mid-tier points inside nodes.
7. `metro_bus_stations.c` -> Route alignment simulator updating bus stops inside middle coordinates.
8. `ultimate_doubly_insertion.c` -> Master combination program compiling front, back, and middle node insertions.
