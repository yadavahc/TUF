# Bubble Sort

> **Source:** [https://www.geeksforgeeks.org/problems/bubble-sort/1](https://www.geeksforgeeks.org/problems/bubble-sort/1)
> **Topic:** Step 2: Learn Important Sorting Techniques — Sorting-I
> **Difficulty:** Easy

## Intuition

Bubble sort repeatedly scans adjacent pairs and swaps out-of-order elements, pushing the current maximum to the end each pass. If a full pass makes no swaps, the array is already sorted, so we can stop early. Tracking the last swap position also shrinks the unsorted boundary and avoids redundant comparisons.

## Approach

Use the optimized bubble sort: iterate passes while maintaining an end boundary; in each pass, swap adjacent inversions and record the last swap index. If no swaps occur, break early; otherwise set the next boundary to the last swap index to skip the sorted suffix.

## Algorithm

1. Let end = n - 1.
2. While end > 0:
   - Set swapped = false and lastSwap = 0.
   - For i from 0 to end - 1:
     - If a[i] > a[i + 1], swap them; set swapped = true and lastSwap = i.
   - If not swapped, break (array is sorted).
   - Set end = lastSwap (elements after this are in correct position).
3. Return the sorted array.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n^2): nested passes in the worst/average case; early-exit makes best-case O(n). |
| **Space** | O(1): in-place swaps with constant extra memory. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
