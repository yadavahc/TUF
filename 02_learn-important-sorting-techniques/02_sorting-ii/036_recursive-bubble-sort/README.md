# Recursive Bubble Sort

> **Source:** [https://www.geeksforgeeks.org/recursive-bubble-sort/](https://www.geeksforgeeks.org/recursive-bubble-sort/)
> **Topic:** Step 2: Learn Important Sorting Techniques — Sorting-II
> **Difficulty:** Easy

## Intuition

Think of bubble sort as repeatedly pushing the largest remaining element to the end. Recursively, one call performs a single pass to bubble the max to position n-1, and the next call sorts the remaining n-1 prefix. An early stop is possible if a full pass makes no swaps.

## Approach

Use two recursive functions: one (pass) to perform a single left-to-right sweep with swaps, and another (sort) to reduce the problem size by one after each pass. Track whether any swap occurred to allow early termination when the array is already sorted.

## Algorithm

1. Base case: if n <= 1, return (array of size 0/1 is sorted).
2. Define a helper pass(a, j, n, swapped):
   - If j == n - 1, return.
   - If a[j] > a[j+1], swap them and set swapped = true.
   - Recurse with j + 1 to continue the pass.
3. In sort(a, n):
   - Initialize swapped = false.
   - Call pass(a, 0, n, swapped) to bubble the maximum to index n - 1.
   - If swapped is false, return (array sorted).
   - Else recurse with sort(a, n - 1).
4. Call sort(a, a.size()) on the input array.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n^2), because there are O(n) passes and each pass takes O(n) comparisons in the worst case. |
| **Space** | O(n), due to recursion depth across the outer recursion and the inner pass. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
