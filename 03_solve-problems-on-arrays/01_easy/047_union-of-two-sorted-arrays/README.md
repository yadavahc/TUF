# Union of Two Sorted Arrays

> **Source:** [https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

Use the fact that both arrays are already sorted. Walk them simultaneously with two pointers, always taking the smaller current value and skipping duplicates by comparing with the last written value. When elements are equal, add it once and advance both pointers.

## Approach

Brute force would concatenate, sort, and unique — O((n+m) log(n+m)). Optimal: two-pointer merge in a single pass; at each step push the smaller (or equal) value if it’s different from the last pushed, advancing the corresponding pointer(s). Finally, drain any remaining elements similarly.

## Algorithm

1. Initialize i = 0, j = 0 and an empty result vector res.
2. While i < n and j < m:
   - If a[i] <= b[j]: if res is empty or res.back() != a[i], push a[i]; increment i. If a[i] was equal to b[j] (checked before increment), also increment j.
   - Else: if res is empty or res.back() != b[j], push b[j]; increment j.
3. While i < n: if res is empty or res.back() != a[i], push a[i]; increment i.
4. While j < m: if res is empty or res.back() != b[j], push b[j]; increment j.
5. Return res.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n + m), since each pointer advances at most n or m times respectively. |
| **Space** | O(n + m) for the output union; O(1) extra auxiliary space. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
