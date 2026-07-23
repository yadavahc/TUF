# If Else Statements

> **Source:** [https://practice.geeksforgeeks.org/problems/c-if-else-decision-making/1](https://practice.geeksforgeeks.org/problems/c-if-else-decision-making/1)
> **Topic:** Step 1: Learn the Basics — Things to Know in C++ - The Basics
> **Difficulty:** Easy

## Intuition

We only need to determine whether a number is even or odd. The least-significant bit of an integer encodes its parity: if it’s 0 the number is even, if it’s 1 the number is odd. Using a bitwise check avoids any concerns with negative modulo behavior and is O(1).

## Approach

Use a single if-else with a bitwise parity check: n & 1 is 1 for odd numbers and 0 for even numbers. A modulo-based check (n % 2) is equally correct but bitwise is the simplest constant-time operation here.

## Algorithm

1. Read/receive the integer n.
2. If (n & 1) is non-zero, classify as "Odd".
3. Else classify as "Even".
4. Output the classification.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(1): A single constant-time bitwise operation and comparison. |
| **Space** | O(1): No auxiliary data structures used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
