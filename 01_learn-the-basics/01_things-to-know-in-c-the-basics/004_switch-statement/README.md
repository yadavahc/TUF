# Switch Statement

> **Source:** [https://www.geeksforgeeks.org/problems/switch-case-statement/1](https://www.geeksforgeeks.org/problems/switch-case-statement/1)
> **Topic:** Step 1: Learn the Basics — Things to Know in C++ - The Basics
> **Difficulty:** Easy

## Intuition

Use a switch to dispatch based on the user’s choice to compute different formulas. This avoids multiple if-else checks and makes the intent clear and constant-time. Each case directly computes and returns its respective result.

## Approach

Use a switch on the integer choice: for 1 compute area of a circle (πr²), for 2 compute area of a rectangle (l×b), otherwise handle invalid choice. Keep everything O(1) with simple arithmetic.

## Algorithm

1. Read/receive three values: choice, a, b (b is ignored for circle).
2. Switch on choice:
   - Case 1: return π * a * a (a is radius).
   - Case 2: return a * b (a and b are length and breadth).
   - Default: return a sentinel (e.g., -1) to indicate invalid choice.
3. Print results with a consistent precision for floating outputs.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(1): Constant-time arithmetic and a single switch dispatch. |
| **Space** | O(1): Only a few variables are used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
