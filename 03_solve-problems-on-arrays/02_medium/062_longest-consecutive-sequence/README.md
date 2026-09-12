# Longest Consecutive Sequence

> **Source:** [https://leetcode.com/problems/longest-consecutive-sequence/](https://leetcode.com/problems/longest-consecutive-sequence/)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Medium

## Intuition

To form the longest run of consecutive integers, we only need to start counting from numbers that are the beginning of a streak (i.e., they have no predecessor). A hash set lets us check existence in O(1) average time and ensures we don't recount the same streak multiple times. Each number participates in at most one linear forward walk.

## Approach

- Brute force (or sorting) either checks all chains or sorts first, costing O(n^2) or O(n log n).
- Optimal: Insert all numbers into an unordered_set. For each number, if (num - 1) is absent, walk forward (num, num+1, ...) and count length, updating the maximum. This ensures each element is processed a constant number of times on average.

## Algorithm

1. If the array is empty, return 0.
2. Insert all elements into an unordered_set to allow O(1) average membership checks (duplicates naturally collapse).
3. Initialize best = 0.
4. For each value x in the input:
   - If (x - 1) is not in the set, then x is a start of a streak:
     - Let cur = x, len = 1.
     - While (cur + 1) exists in the set: cur++, len++.
     - Update best = max(best, len).
5. Return best.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n) average, since each element is inserted once and participates in at most one forward scan. |
| **Space** | O(n) for the hash set storing unique elements. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
