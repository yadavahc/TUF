# Majority Element (More than N/2 Times)

> **Source:** [https://leetcode.com/problems/majority-element/](https://leetcode.com/problems/majority-element/)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Easy

## Intuition

The key idea is that a majority element (> n/2) can’t be completely canceled out when pairing different elements. Boyer–Moore’s voting algorithm maintains a candidate and a counter; non-equal elements cancel each other, leaving the true majority as the final candidate. A second pass can verify the candidate if the majority is not guaranteed.

## Approach

Brute force uses a hash map or sorting; optimal uses Boyer–Moore Voting: sweep once to compute a candidate by cancellation, then (optionally) verify its frequency exceeds n/2. This runs in O(n) time and O(1) space.

## Algorithm

1. Initialize candidate = 0 and count = 0.
2. For each x in the array:
   - If count == 0, set candidate = x.
   - If x == candidate, increment count; else decrement count.
3. Verify: count occurrences of candidate; if it’s > n/2, return candidate; otherwise return -1 (for problems without guarantee).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n) — one linear pass to find the candidate and an optional linear pass to verify. |
| **Space** | O(1) — only constant extra variables. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
