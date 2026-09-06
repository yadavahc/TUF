# Kadane's Algorithm - Maximum Subarray Sum

> **Source:** [https://leetcode.com/problems/maximum-subarray/](https://leetcode.com/problems/maximum-subarray/)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Medium

## Intuition

At each index, either extend the previous subarray or start fresh at the current element—whichever yields a larger sum. This local decision is optimal because a negative running sum can only hurt any future extension. Track the best local sum and the global maximum seen so far. This is a classic 1D dynamic programming optimization.

## Approach

Brute force checks all O(n^2) subarrays; Kadane’s algorithm compresses the DP: let cur be the maximum subarray sum ending at current index, then cur = max(a[i], cur + a[i]) and update the answer with max(ans, cur). Initialize with the first element to correctly handle all-negative arrays.

## Algorithm

1. If the array is non-empty, set cur = ans = a[0].
2. For each i from 1 to n-1:
   - cur = max(a[i], cur + a[i])  // best sum ending at i
   - ans = max(ans, cur)          // best sum overall so far
3. Return ans.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n): Single pass over the array with O(1) work per element. |
| **Space** | O(1): Only constant extra variables are used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
