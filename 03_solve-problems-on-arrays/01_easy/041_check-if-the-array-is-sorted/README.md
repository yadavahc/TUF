# Check if the Array is Sorted

> **Source:** [https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted-0701/1](https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted-0701/1)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

An array is sorted in non-decreasing order if each element is at least as large as the previous one. So, it suffices to compare each pair of consecutive elements once. Early exit on the first violation yields optimal efficiency.

## Approach

Traverse the array once and verify a[i] >= a[i-1] for all i from 1 to n-1; return false on the first failure, else true. (A naive thought is to compare all pairs or sort and compare, but single-pass adjacency checks are optimal.)

## Algorithm

1. If the array size is 0 or 1, return true.
2. For i from 1 to n-1:
   - If a[i] < a[i-1], return false.
3. After the loop, return true.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), since we make a single pass through the array. |
| **Space** | O(1), using only constant extra space. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
