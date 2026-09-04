# Sort an Array of 0s 1s and 2s

> **Source:** [https://leetcode.com/problems/sort-colors/](https://leetcode.com/problems/sort-colors/)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Medium

## Intuition

The array contains only three distinct values (0, 1, 2), so we can place them in correct positions without a full comparison sort. Think of three regions: left for 0s, middle for 1s, and right for 2s. As we scan once, we expand these regions by swapping the current element into its correct zone. This is the Dutch National Flag idea: partition in one pass with constant extra space.

## Approach

Use three pointers: low (next position for 0), mid (current index), and high (next position for 2 from the end). Traverse with mid; swap 0s to the front (increment low and mid), leave 1s (increment mid), and swap 2s to the back (decrement high, do not increment mid). A simple brute force alternative is counting occurrences of 0/1/2 and overwriting in two passes.

## Algorithm

1. Initialize low = 0, mid = 0, high = n - 1.
2. While mid <= high:
   - If nums[mid] == 0: swap(nums[low], nums[mid]); low++; mid++.
   - Else if nums[mid] == 1: mid++.
   - Else (nums[mid] == 2): swap(nums[mid], nums[high]); high--.
3. End when mid crosses high; array is sorted.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n): Single linear pass with constant-time swaps. |
| **Space** | O(1): Only a few pointer variables; in-place operations. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
