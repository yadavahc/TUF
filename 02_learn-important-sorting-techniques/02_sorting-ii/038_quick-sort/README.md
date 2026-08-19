# Quick Sort

> **Source:** [https://practice.geeksforgeeks.org/problems/quick-sort/1](https://practice.geeksforgeeks.org/problems/quick-sort/1)
> **Topic:** Step 2: Learn Important Sorting Techniques — Sorting-II
> **Difficulty:** Medium

## Intuition

Quick sort partitions the array around a pivot so that elements less than the pivot go left and greater go right, then recursively sorts both sides. Choosing pivots well (e.g., random) keeps partitions balanced on average. Using in-place partitioning avoids extra memory. Sorting the smaller side first and tail-recur on the larger side bounds recursion depth to O(log n).

## Approach

Use Hoare partition with a randomized pivot for expected balanced splits and fewer swaps. Perform tail-recursion elimination: always recurse on the smaller partition and iterate on the larger to ensure O(log n) stack. Brute force alternative would be using another sort (like mergesort or library sort), but here we implement in-place quick sort.

## Algorithm

1. If l >= r, return.
2. Pick a random index p in [l, r] and swap a[p] with a[l]; set pivot = a[l].
3. Hoare partition:
   - i = l - 1, j = r + 1
   - Loop:
     - Increment i until a[i] >= pivot.
     - Decrement j until a[j] <= pivot.
     - If i >= j, partition index = j; break.
     - Swap a[i] and a[j].
4. After partition, subarrays are [l..j] and [j+1..r].
5. Recurse on the smaller subarray; update (l, r) to the larger subarray and continue (tail-call elimination).
6. Repeat until the current segment size is < 2.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | Average/expected O(n log n); worst-case O(n^2) if partitions are highly unbalanced. |
| **Space** | O(log n) auxiliary due to recursion depth after always sorting the smaller side first (in-place array). |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
