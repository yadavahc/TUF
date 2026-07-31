# Check for Prime Number

> **Source:** [https://practice.geeksforgeeks.org/problems/prime-number2314/1](https://practice.geeksforgeeks.org/problems/prime-number2314/1)
> **Topic:** Step 1: Learn the Basics — Know Basic Maths
> **Difficulty:** Easy

## Intuition

A composite number must have a factor not exceeding its square root. Beyond 2 and 3, all primes are of the form 6k ± 1. So we can quickly rule out small cases and then test only candidates 6k − 1 and 6k + 1 up to sqrt(n), minimizing divisions.

## Approach

Handle n <= 1, 2, and 3 directly; eliminate multiples of 2 or 3; then iterate i from 5 to sqrt(n) in steps of 6, checking divisibility by i and i+2. Brute force checking all numbers up to n is unnecessary; even checking all up to sqrt(n) can be halved by skipping evens and multiples of 3.

## Algorithm

1. If n <= 1, return false.
2. If n <= 3, return true.
3. If n is divisible by 2 or 3, return false.
4. For i = 5; i*i <= n; i += 6:
   - If n % i == 0 or n % (i + 2) == 0, return false.
5. Return true.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(sqrt(n)) — we test possible divisors only up to sqrt(n), skipping by 6k ± 1. |
| **Space** | O(1) — constant extra space. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
