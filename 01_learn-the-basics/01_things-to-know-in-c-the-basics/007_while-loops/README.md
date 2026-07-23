# While Loops

> **Source:** [https://practice.geeksforgeeks.org/problems/while-loop-print-numbers/1](https://practice.geeksforgeeks.org/problems/while-loop-print-numbers/1)
> **Topic:** Step 1: Learn the Basics — Things to Know in C++ - The Basics
> **Difficulty:** Easy

## Intuition

Use a counter that starts at 1 and repeatedly increments until it reaches N, printing each value as you go. A while loop naturally fits scenarios where you continue until a condition fails.

## Approach

Initialize a counter at 1 and iterate with a while loop while the counter is less than or equal to N, outputting each number and incrementing the counter. Brute force is simply iterating once through all numbers, which is already optimal.

## Algorithm

1. Set i = 1.
2. While i ≤ N:
   - Output i.
   - Increment i by 1.
3. Stop when i becomes N + 1.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(N), as each number from 1 to N is processed exactly once. |
| **Space** | O(1), using only a constant number of variables. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
