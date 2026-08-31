# Find the Number that Appears Once

> **Source:** [https://leetcode.com/problems/single-number/](https://leetcode.com/problems/single-number/)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

The XOR operation cancels out equal numbers because x ^ x = 0 and preserves the unique number since 0 ^ x = x. As every element except one appears exactly twice, XORing all elements leaves only the single-occurring number. This avoids extra memory or sorting. It is both simple and optimal.

## Approach

Brute force would sort or use a hash map. Optimal: iterate once and XOR all elements; pairs nullify each other, leaving the solitary element.

## Algorithm

1. Initialize an integer ans = 0.
2. For each number num in the array, set ans = ans ^ num.
3. After the loop, ans holds the number that appears once; return ans.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n): single linear pass over the array. |
| **Space** | O(1): constant extra variables. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
