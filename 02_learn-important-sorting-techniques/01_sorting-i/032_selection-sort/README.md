# Selection Sort

> **Source:** [https://practice.geeksforgeeks.org/problems/selection-sort/1](https://practice.geeksforgeeks.org/problems/selection-sort/1)
> **Topic:** Step 2: Learn Important Sorting Techniques — Sorting-I
> **Difficulty:** Easy

## Intuition

Selection sort fixes one position at a time by selecting the smallest element from the remaining unsorted suffix and swapping it into place. It minimizes swaps (at most n−1) by doing exactly one swap per position. Though comparisons are quadratic, the algorithm is simple, in-place, and predictable. It's useful when swap cost is high but comparisons are cheap.

## Approach

Iterate i from 0 to n-2, find the index of the minimum element in [i..n-1], then swap it with a[i] if needed. Brute-force scanning for the minimum each pass is already optimal within selection sort’s framework.

## Algorithm

1. Let n be the array size. If n ≤ 1, return.
2. For i from 0 to n-2:
   - Set minIdx = i.
   - For j from i+1 to n-1, if a[j] < a[minIdx], update minIdx = j.
   - If minIdx != i, swap a[i] and a[minIdx].
3. The array is sorted in non-decreasing order.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n^2), because for each i we linearly scan the remaining elements to find the minimum. |
| **Space** | O(1), sorting is done in-place with a few variables. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
