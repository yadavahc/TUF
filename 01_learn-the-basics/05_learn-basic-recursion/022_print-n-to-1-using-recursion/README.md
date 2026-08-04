# Print N to 1 Using Recursion

> **Source:** [https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1](https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1)
> **Topic:** Step 1: Learn the Basics — Learn Basic Recursion
> **Difficulty:** Easy

## Intuition

We can exploit the call stack: at each call, print the current number and recurse with n-1 until we reach 0. This naturally generates a decreasing sequence without loops. It’s tail-recursive and straightforward.

## Approach

Use a recursive function with base case n <= 0. On each call, output n, then recurse with n-1. Brute force with loops is trivial, but the goal here is to rely solely on recursion.

## Algorithm

1. If n <= 0, return.
2. Print or record n.
3. Recurse with n-1.
4. Repeat until the base case is reached.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n) — one recursion step per number printed. |
| **Space** | O(n) — recursion call stack depth is n. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
