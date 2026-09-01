# Longest Subarray with Sum K (Positives)

> **Source:** [https://takeuforward.org/data-structure/longest-subarray-with-given-sum-k/](https://takeuforward.org/data-structure/longest-subarray-with-given-sum-k/)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

With strictly positive numbers, increasing the window size can only increase the sum, and shrinking it can only decrease the sum. This monotonic behavior allows a two-pointer sliding window: expand right to increase sum, and shrink left while sum exceeds K. Whenever sum equals K, record the window length.

## Approach

- Brute force checks all subarrays in O(n^2).
- Optimal: Use a sliding window with two pointers (l, r). Keep a running sum of the current window. For each r, add a[r]; while sum > K, move l forward and subtract. When sum == K, update the maximum length.

## Algorithm

1. Initialize l = 0, sum = 0, best = 0.
2. For r from 0 to n-1:
   - sum += a[r].
   - While l <= r and sum > K: sum -= a[l], l++.
   - If sum == K: best = max(best, r - l + 1).
3. Return best.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n): Each index enters and leaves the window at most once. |
| **Space** | O(1): Only a few variables are used regardless of input size. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
