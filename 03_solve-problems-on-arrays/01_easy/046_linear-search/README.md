# Linear Search

> **Source:** [https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1](https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

Scan the array from left to right and compare each element with the target. The first match gives the answer; if none match, the target is absent. Early exit avoids unnecessary work once the element is found.

## Approach

Use a single pass through the array, returning the index upon the first equality check success; otherwise return -1 after the loop. This brute-force scan is optimal since there’s no extra structure to exploit in an unsorted array.

## Algorithm

1. Initialize i = 0.
2. While i < n:
   - If arr[i] == x, return i.
   - Increment i.
3. If the loop ends without finding x, return -1.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), as each element is inspected at most once. |
| **Space** | O(1), using only a few variables irrespective of input size. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
