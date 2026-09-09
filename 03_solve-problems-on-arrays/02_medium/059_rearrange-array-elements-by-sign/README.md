# Rearrange Array Elements by Sign

> **Source:** [https://leetcode.com/problems/rearrange-array-elements-by-sign/](https://leetcode.com/problems/rearrange-array-elements-by-sign/)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Medium

## Intuition

We must place positives at even indices and negatives at odd indices while preserving the relative order within each sign. The simplest way is to iterate once and write the next positive to the next even slot and the next negative to the next odd slot. This achieves stable ordering per sign and guarantees alternation if counts are equal.

## Approach

- Use two write pointers: pos = 0 (even indices) and neg = 1 (odd indices).
- Scan the array once; place each positive at res[pos], increment pos by 2; place each negative at res[neg], increment neg by 2.
- Brute force idea (for contrast): split into two lists and then interleave; the optimal approach does this in one pass directly into the result array.

## Algorithm

1. Initialize a result array res of size n.
2. Set two indices: pos = 0, neg = 1.
3. For each x in nums:
   - If x > 0, set res[pos] = x, pos += 2.
   - Else (x < 0), set res[neg] = x, neg += 2.
4. Return res.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), since we scan the array once and perform O(1) work per element. |
| **Space** | O(n), for the result array (stable in-place alternation without extra space is non-trivial). |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
