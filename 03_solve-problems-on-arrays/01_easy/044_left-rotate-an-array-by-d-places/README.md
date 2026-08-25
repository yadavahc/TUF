# Left Rotate an Array by D Places

> **Source:** [https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1](https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

Rotation just reorders elements cyclically; the first d elements move to the end in the same order. Doing d single-step shifts is too slow. The reversal trick achieves the same effect by reversing segments to place blocks in their final positions. This avoids extra space and runs in linear time.

## Approach

Brute force would shift elements left by one, repeated d times (O(n·d)). Optimal approach: use the reversal algorithm — reverse the first d elements, reverse the remaining n−d elements, then reverse the whole array. Handle d modulo n and edge cases like n=0 or d=0.

## Algorithm

1. Let n be the array size. If n == 0, return.
2. Set d = ((d % n) + n) % n to handle d ≥ n and negative d safely.
3. Reverse the subarray [0, d-1].
4. Reverse the subarray [d, n-1].
5. Reverse the entire array [0, n-1].

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), because we perform three linear-time reversals. |
| **Space** | O(1), in-place using only a few variables. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
