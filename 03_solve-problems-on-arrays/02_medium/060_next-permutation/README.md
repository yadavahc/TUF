# Next Permutation

> **Source:** [https://leetcode.com/problems/next-permutation/](https://leetcode.com/problems/next-permutation/)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Medium

## Intuition

The next permutation is the smallest arrangement that is strictly larger in lexicographic order. Scan from right to find the first position where the sequence stops being non-increasing (a "dip"). To minimally increase, swap this element with the smallest number larger than it to its right, then sort that suffix to the smallest order, which is just reversing since it was non-increasing. If no dip exists, the array is the highest permutation; return the lowest by reversing all.

## Approach

Brute force would generate all permutations or sort next greater, which is infeasible. Optimal approach: identify the rightmost dip, swap with just-larger element in the suffix, and reverse the suffix to get the next lexicographic permutation in O(n) time and O(1) space.

## Algorithm

1. Let i be the largest index with nums[i] < nums[i+1] by scanning from right; if no such i, reverse the entire array and return.
2. From the right, find the smallest index j > i with nums[j] > nums[i].
3. Swap nums[i] and nums[j].
4. Reverse the subarray nums[i+1..end] to make it the smallest possible.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n): A few linear scans and one reverse over the array. |
| **Space** | O(1): In-place swaps and reverse. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
