# Move Zeros to End

> **Source:** [https://leetcode.com/problems/move-zeroes/](https://leetcode.com/problems/move-zeroes/)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

Use a two-pointer compaction: iterate once, keeping a write index for the position of the next non-zero. When you see a non-zero, swap it into the write position and advance the write pointer. This keeps the relative order of non-zeros while pushing zeros to the end in-place.

## Approach

Brute force would copy all non-zeros to a new array then append zeros; optimized approach uses two pointers and in-place swaps: one pass moves each non-zero to the earliest available spot, implicitly shifting zeros to the right and preserving stability.

## Algorithm

1. Let i = 0 be the write pointer (index to place the next non-zero).
2. For j from 0 to n-1:
   - If nums[j] != 0, swap nums[i] and nums[j], then increment i.
3. The array now has all non-zeros in original order at the front and all zeros at the end.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), as each element is visited once and swapped at most once. |
| **Space** | O(1), in-place with only a few variables. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
