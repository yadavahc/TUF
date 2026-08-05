# Sum of First N Numbers Using Recursion

> **Source:** [https://takeuforward.org/recursion/sum-of-first-n-numbers/](https://takeuforward.org/recursion/sum-of-first-n-numbers/)
> **Topic:** Step 1: Learn the Basics — Learn Basic Recursion
> **Difficulty:** Easy

## Intuition

Use the definition of the sum recursively: the sum up to n is n plus the sum up to n−1. The recursion bottoms out at 0, where the sum is 0. This mirrors the mathematical recurrence and keeps the code minimal. Use 64-bit integers to avoid overflow for larger n.

## Approach

The optimal recursive approach defines a base case (n <= 0 -> 0) and a relation sum(n) = n + sum(n-1). Although a constant-time formula exists, the task explicitly requires recursion; the loop-based method is equivalent in time but doesn't satisfy the requirement.

## Algorithm

1. If n <= 0, return 0.
2. Otherwise, return n + sum(n - 1).
3. Use long long to store and return the result.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n) — one recursive call per integer from n down to 0. |
| **Space** | O(n) — recursion stack depth up to n (tail-call elimination is not guaranteed in C++). |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
