# Count Digits of a Number

> **Source:** [https://takeuforward.org/maths/count-digits-in-a-number/](https://takeuforward.org/maths/count-digits-in-a-number/)
> **Topic:** Step 1: Learn the Basics — Know Basic Maths
> **Difficulty:** Easy

## Intuition

In base-10, removing the last digit by dividing by 10 repeatedly will eventually exhaust the number; the number of such divisions equals the digit count. Handle zero specially since it has one digit, and take the absolute magnitude for negative numbers to avoid sign issues.

## Approach

Use unsigned magnitude of the input (to safely handle negatives, including the minimum 64-bit value), return 1 if it’s zero, otherwise keep dividing by 10 and increment a counter until it becomes zero. A string-based count or log10-based formula also works, but the loop is robust and avoids floating-point pitfalls.

## Algorithm

1. Convert n to its non-negative magnitude as an unsigned long long:
   - If n >= 0, x = n; else x = 0ULL - (unsigned long long)n.
2. If x == 0, return 1.
3. Initialize count = 0.
4. While x > 0:
   - Increment count.
   - x = x / 10.
5. Return count.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(d), where d is the number of digits, since we divide by 10 once per digit. |
| **Space** | O(1), using only a few variables. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
