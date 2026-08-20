# Largest Element in an Array

> **Source:** [https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

Scan the array once, maintaining the best (maximum) value seen so far. Initialize the running maximum to the first element to avoid special casing negatives. Each new element can only increase or leave the maximum unchanged, so a single pass suffices. Sorting would be wasteful; we only need the max, not order.

## Approach

Do a single linear pass keeping a variable maxVal updated with max(maxVal, current). Brute force via sorting is O(n log n), but a one-pass scan is optimal O(n).

## Algorithm

1. If the array is non-empty, set maxVal to the first element.
2. For each element x in the array:
   - Update maxVal = max(maxVal, x).
3. Return maxVal.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n): each element is visited once. |
| **Space** | O(1): only a constant number of extra variables are used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
