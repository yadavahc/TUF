# Find Missing Number in an Array

> **Source:** [https://leetcode.com/problems/missing-number/](https://leetcode.com/problems/missing-number/)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

You have all numbers from 0 to n except one. Pairing each expected value with the seen value cancels out if we use XOR, since a^a = 0 and 0^b = b. The only value that never finds a matching pair is the missing number, which remains after all cancellations. This avoids overflow and extra memory.

## Approach

Use XOR: XOR all indices 0..n and all array elements; the duplicates cancel, leaving the missing number. (Brute force would sort or use a hash set to find the gap, but that’s slower or uses extra space.)

## Algorithm

1. Let n be the array size and initialize xr = 0.
2. For each i in [0, n-1], do xr ^= i and xr ^= nums[i].
3. After the loop, do xr ^= n (to include the last expected index).
4. Return xr; this is the missing number.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n): single pass over the array with O(1) work per element. |
| **Space** | O(1): only a few variables are used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
