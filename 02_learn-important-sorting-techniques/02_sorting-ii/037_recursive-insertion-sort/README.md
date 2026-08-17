# Recursive Insertion Sort

> **Source:** [https://www.geeksforgeeks.org/recursive-insertion-sort/](https://www.geeksforgeeks.org/recursive-insertion-sort/)
> **Topic:** Step 2: Learn Important Sorting Techniques — Sorting-II
> **Difficulty:** Easy

## Intuition

Insertion sort builds a sorted prefix by placing each new element where it belongs. Recursively, first sort the first n-1 elements, then insert the nth element into this already-sorted prefix. The base case is an array of size 0 or 1, which is already sorted. Using recursion to shift larger elements right maintains stability and in-place behavior.

## Approach

Use two recursive routines: one to sort the first n-1 elements, and another to insert the last element into the correct position by recursively shifting elements greater than it. This mirrors the iterative insertion sort but leverages the call stack for the two phases.

## Algorithm

1. If n <= 1, return (array is already sorted).
2. Recursively sort the first n-1 elements.
3. Let key = a[n-1]. Recursively shift elements greater than key to the right until the correct spot is found:
   - If j < 0 or a[j] <= key, place key at a[j+1] and return.
   - Else move a[j] to a[j+1] and recurse with j-1.
4. The array is sorted after inserting the nth element.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n^2) in the average and worst case, because each element may traverse back through the already-sorted prefix, summing to 1 + 2 + ... + (n-1). |
| **Space** | O(n) auxiliary stack space due to recursion depth (sort plus insert recursion), in-place array modifications. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
