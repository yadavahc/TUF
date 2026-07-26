# Reverse a Number

> **Source:** [https://leetcode.com/problems/reverse-integer/](https://leetcode.com/problems/reverse-integer/)
> **Topic:** Step 1: Learn the Basics — Know Basic Maths
> **Difficulty:** Medium

## Intuition

Take digits from the end using modulo, and append them to the result by multiplying the result by 10 each step. The only pitfall is 32-bit overflow: before appending a digit, ensure the new value would still fit within [-2^31, 2^31-1]. This avoids strings and keeps it purely arithmetic.

## Approach

Iteratively pop the last digit (x % 10), reduce x (x /= 10), and push the digit into the reversed number (rev = rev * 10 + digit). Before pushing, check if rev would overflow a 32-bit signed int by comparing against INT_MAX/10 and INT_MIN/10 (and the last digit thresholds 7 and -8). Brute force via string reversal is simpler but unnecessary and uses extra space.

## Algorithm

1. Initialize rev = 0.
2. While x != 0:
   - digit = x % 10, x /= 10.
   - If rev > INT_MAX/10 or (rev == INT_MAX/10 and digit > 7), return 0.
   - If rev < INT_MIN/10 or (rev == INT_MIN/10 and digit < -8), return 0.
   - rev = rev * 10 + digit.
3. Return rev.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(log10|x|): we process each digit once. |
| **Space** | O(1): only a few integer variables are used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
