# Maximum Consecutive Ones

> **Source:** [https://leetcode.com/problems/max-consecutive-ones/](https://leetcode.com/problems/max-consecutive-ones/)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

We just need the length of the longest run of 1s that appear contiguously. As we scan left to right, we can keep a running count of the current streak of 1s and reset it when we see a 0. Track the maximum streak seen so far. This is optimal because each element is processed once with O(1) extra state.

## Approach

Single pass with two integers: current streak and global maximum. For each element, increment current if it's 1; otherwise reset to 0. Update the maximum after each step. (Brute force would check all subarrays and count 1s, which is O(n^2).)

## Algorithm

1. Initialize maxLen = 0 and curr = 0.
2. For each element x in the array:
   - If x == 1, increment curr; else set curr = 0.
   - Update maxLen = max(maxLen, curr).
3. Return maxLen.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), since we scan the array once. |
| **Space** | O(1), using only a couple of integers. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
