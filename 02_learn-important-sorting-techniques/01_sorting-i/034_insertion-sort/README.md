# Insertion Sort

> **Source:** [https://practice.geeksforgeeks.org/problems/insertion-sort/1](https://practice.geeksforgeeks.org/problems/insertion-sort/1)
> **Topic:** Step 2: Learn Important Sorting Techniques — Sorting-I
> **Difficulty:** Easy

## Intuition

Insertion sort builds the array’s sorted prefix one element at a time. For each element, shift larger elements in the sorted prefix to the right and place the current element (“key”) into its correct position. This is stable, in-place, and very fast for nearly sorted arrays. It’s a natural algorithm that mirrors how we sort cards by hand.

## Approach

Iterate from left to right; for each index i, store arr[i] as key and move leftwards through the already-sorted prefix, shifting elements greater than key one position to the right. Insert key at the first position where it’s not smaller than the element to its left. Brute-force ideas like repeated adjacent swaps (bubble sort) are less efficient in practice due to more writes.

## Algorithm

1. Let n be the array size. If n <= 1, return.
2. For i from 1 to n-1:
   - key = arr[i], j = i - 1.
   - While j >= 0 and arr[j] > key:
     - arr[j + 1] = arr[j] (shift right), j--.
   - Set arr[j + 1] = key.
3. The array is sorted in non-decreasing order.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n^2) in the worst/average case due to the nested scan-and-shift for each element; O(n) in the best case (already sorted). |
| **Space** | O(1), sorting is done in-place using only a constant extra variable for the key. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
