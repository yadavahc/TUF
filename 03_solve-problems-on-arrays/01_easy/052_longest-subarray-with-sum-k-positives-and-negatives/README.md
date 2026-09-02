# Longest Subarray with Sum K (Positives and Negatives)

> **Source:** [https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Medium

## Intuition

The key is to turn subarray-sum queries into prefix-sum differences. If prefix[j] - prefix[i] = k, then the subarray (i+1..j) sums to k. By storing the earliest index where each prefix sum first appears, we can, for each position j, quickly find the longest valid i to maximize the length. This works with negatives because we don't rely on monotonic properties.

## Approach

Use a running prefix sum and an unordered_map from prefix sum to its earliest index. Initialize map[0] = -1 to allow subarrays starting at index 0. For each index j, let s be the current prefix sum; if (s - k) exists in the map, update the answer with j - map[s - k]. Insert s into the map only if it doesn't exist yet (to keep the earliest index). Brute force would check all O(n^2) subarrays.

## Algorithm

1. Set best = 0, prefix = 0; create unordered_map<long long,int> first, and set first[0] = -1.
2. For each index j from 0 to n-1:
   - Update prefix += nums[j].
   - If (prefix - k) exists in first, set best = max(best, j - first[prefix - k]).
   - If prefix is not in first, store first[prefix] = j.
3. Return best.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), each element is processed once with O(1) average-time hash lookups. |
| **Space** | O(n), for storing the earliest index of each distinct prefix sum. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
