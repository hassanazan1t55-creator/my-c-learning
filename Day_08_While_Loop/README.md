# Day 08: While Loops & Memory Safety

Today I practiced loops to handle repetitive executions when the ending point depends entirely on active dynamic user inputs.

## What I Learnt:
* **While Loop Control:** Learned how to deploy conditional loops to keep scripts running dynamically until a clear termination condition is met.
* **Garbage Value Fixes:** Practiced tracking how variables behave in memory blocks and fixed structural bugs by explicitly initializing entry variables to `0`.
* **Reverse State Iterations:** Implemented decrement steps (`i--`) to scale down an integer input sequentially to produce a clean terminal countdown layout.
* **Conditional Data Filtering:** Combined standard modulo logic (`i % 2 == 0`) inside an active loop sequence to categorize values as even or odd dynamically up to a specified user threshold.

## Files in this Folder:
1. `01_while_loop_basics.c` -> Basic introduction to while loops by repeating a message using a counter variable.
2. `02_while_loop_filter.c` -> Program using a while loop with an if condition to print numbers only within a specific range (10 to 20).
3. `03_factorial_calculator.c` -> Program to calculate the factorial of a number using a while loop and cumulative multiplication.
4. `04_loop_security.c` -> A secure validation style script that remains locked inside a loop until a specific passkey code is entered.
4. `04_reverse_countdown.c` -> An interactive script collecting custom numbers to run a controlled reverse numeric countdown ending with a terminal announcement.
5. `05_even_odd_filter.c` -> A calculation processing utility that loops through a set range of integers to isolate even numbers from odd numbers sequentially.
