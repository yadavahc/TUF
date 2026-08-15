# Merge Sort

> **Source:** [https://www.geeksforgeeks.org/problems/merge-sort/1](https://www.geeksforgeeks.org/problems/merge-sort/1)
> **Topic:** Step 2: Learn Important Sorting Techniques — Sorting-II
> **Difficulty:** Medium

## Intuition

Merge sort uses divide and conquer: split the array into halves until single elements remain, then merge the halves back in sorted order. The merging step is linear and stable, leveraging the fact that each half is already sorted. This guarantees O(n log n) time regardless of input order and is particularly good for linked lists or external sorting.

## Approach

- Brute force sorts like selection/insertion take O(n^2); merge sort improves by recursively dividing and linearly merging.
- Recursively split the array into two halves until size 1, then merge two sorted halves using a temporary buffer.
- Allocate a single auxiliary array once and reuse it during all merges to keep auxiliary space O(n).

## Algorithm

1. If l >= r, return (subarray of size 0 or 1 is already sorted).
2. Compute mid = (l + r) / 2.
3. Recursively sort left half [l, mid] and right half [mid+1, r].
4. Merge:
   - Use two pointers i = l, j = mid+1; compare a[i] and a[j], push the smaller into temp[k++].
   - Continue until one side exhausts, then copy remaining elements.
   - Copy temp[l..r] back to a[l..r].
5. To optimize allocations, create one temp array of size n and pass it to recursive calls.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n log n): each level merges all n elements, and there are log n levels of recursion. |
| **Space** | O(n): one auxiliary array for merging (plus O(log n) recursion stack for the recursive variant). |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
