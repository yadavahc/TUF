# Check Palindrome Number

> **Source:** [https://leetcode.com/problems/palindrome-number/](https://leetcode.com/problems/palindrome-number/)
> **Topic:** Step 1: Learn the Basics — Know Basic Maths
> **Difficulty:** Easy

## Intuition

A negative number or any number ending with 0 (except 0 itself) cannot be a palindrome. Reversing the whole number risks overflow and is unnecessary. If we reverse only half of the digits and compare with the remaining half, we avoid overflow and keep constant space. For odd digit counts, the middle digit can be ignored.

## Approach

- Reject negatives and numbers ending with zero (unless the number is zero).
- Iteratively build the reversed second half of the number until it becomes greater than or equal to the remaining first half.
- Compare the two halves; for odd lengths, drop the middle digit from the reversed half by dividing by 10.
- Brute force would convert to string and compare ends; we avoid that and extra space by numeric processing.

## Algorithm

1. If x < 0 or (x % 10 == 0 and x != 0), return false.
2. Initialize rev = 0.
3. While x > rev:
   - rev = rev * 10 + (x % 10)
   - x = x / 10
4. Return true if x == rev (even digits) or x == rev / 10 (odd digits); else false.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(log10 n) — we process roughly half the digits of n. |
| **Space** | O(1) — only a few integer variables are used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
