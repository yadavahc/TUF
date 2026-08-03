# Print 1 to N Using Recursion

> **Source:** [https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops/1](https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops/1)
> **Topic:** Step 1: Learn the Basics — Learn Basic Recursion
> **Difficulty:** Easy

## Intuition

Use recursion to simulate a loop: either build the sequence during the descent (pre-order) or print after returning from deeper calls (post-order). For 1..N in increasing order, pass a current index starting at 1 and print it before recursing to i+1. The call stack implicitly handles progression and termination.

## Approach

Define a helper f(i, n) that stops when i > n. Otherwise, print i and recursively call f(i+1, n). This is tail-recursive and directly yields increasing order. (A post-order variant prints after f(i+1, n), but both are O(n).)

## Algorithm

1. If n <= 0, do nothing (empty output).
2. Define recursive function f(i, n):
   - If i > n, return.
   - Print i (and a space if i < n).
   - Recurse: f(i + 1, n).
3. Call f(1, n).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), as each number from 1 to n is processed exactly once. |
| **Space** | O(n), due to the recursion call stack depth up to n. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
