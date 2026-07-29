# Armstrong Number

> **Source:** [https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1](https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1)
> **Topic:** Step 1: Learn the Basics — Know Basic Maths
> **Difficulty:** Easy

## Intuition

Armstrong (narcissistic) numbers are equal to the sum of their digits each raised to the power of the total number of digits. So, we just need to compute that powered sum and compare it with the original number. Using integer arithmetic avoids floating-point inaccuracies, and precomputing digit^k for digits 0–9 makes the computation efficient. Handle 0 as a special case with digit count 1; negatives are not Armstrong.

## Approach

Count the digits d of n, precompute pow(i, d) for i in [0..9] using integer multiplication, then sum pow(last_digit, d) over all digits and compare with n. The brute idea is similar but might call pow() repeatedly (slower and imprecise); precomputing removes repeated work and precision issues.

## Algorithm

1. If n < 0, return false. Let un = unsigned version of n.
2. Compute d = number of digits of un (treat 0 as having d = 1).
3. Precompute P[i] = i^d for i in 0..9 using integer exponentiation.
4. Sum S = sum of P[digit] for each digit of un (if un == 0, S = P[0]).
5. Return S == un.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(d), where d is the number of digits, since we process each digit once and precompute 10 powers. |
| **Space** | O(1), only a fixed-size array for digit powers. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
