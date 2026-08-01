# Understand Recursion by Printing Something N Times

> **Source:** [https://www.geeksforgeeks.org/problems/print-gfg-n-times/1](https://www.geeksforgeeks.org/problems/print-gfg-n-times/1)
> **Topic:** Step 1: Learn the Basics — Learn Basic Recursion
> **Difficulty:** Easy

## Intuition

Recursion relies on two pillars: a base case to stop and a recursive call that moves toward it. To print something N times, reduce the problem from N to N-1 until it reaches zero. Decide whether to print before or after the recursive call depending on desired order. Here we print before the call (tail style) for straightforward logic.

## Approach

Use a simple recursive function with base case n <= 0 returning immediately; otherwise print once and recurse with n-1. An iterative loop is the trivial alternative, but this exercise builds recursion intuition.

## Algorithm

1. Define a function printNTimes(n, s).
2. If n <= 0, return (base case).
3. Print string s.
4. Call printNTimes(n-1, s).
5. In main(), call the function for a few sample (n, s) pairs and print outputs.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), because exactly n prints and n recursive calls are made. |
| **Space** | O(n), due to recursion stack depth up to n (no guaranteed tail-call elimination in C++). |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
