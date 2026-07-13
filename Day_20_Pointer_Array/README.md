# Day 20: Pointers and Arrays Relationship

Today I learned how array names decay into pointers pointing to the first memory block, and how to traverse arrays using pointer arithmetic.

## What I Learnt:
* **Array Decay to Pointers:** Understood that an array name acts as a constant pointer to its first element `&arr[0]`.
* **Pointer Traversal:** Used `*(ptr + i)` notation to access contiguous memory blocks directly without using array index brackets `arr[i]`.
* **Array Manipulations:** Calculated array element sums and performed reverse traversals using offset pointer arithmetic.

## Files in this Folder:
1. `pointer_array.c` -> Program demonstrating array indexing versus pointer offset traversal with memory addresses.
2. `array_sum_pointer.c` -> Script calculating the sum of array elements using pointer arithmetic inside a loop.
3. `reverse_array_pointer.c` -> Program printing array values in reverse order by offsetting pointers backwards.
