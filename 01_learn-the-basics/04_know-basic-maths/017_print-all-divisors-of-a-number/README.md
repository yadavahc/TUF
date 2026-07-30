# Print All Divisors of a Number

> **Source:** [https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1](https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1)
> **Topic:** Step 1: Learn the Basics — Know Basic Maths
> **Difficulty:** Easy

## Intuition

A divisor d of n always comes paired with n/d. Therefore, instead of checking all numbers up to n, we only need to iterate up to sqrt(n). For each i dividing n, we add both i and n/i. To output in increasing order efficiently, collect small divisors (i) and large divisors (n/i) separately and then merge.

## Approach

- Brute force checks all i from 1..n, which is too slow.
- Optimal: iterate i from 1 to floor(sqrt(n)); if i divides n, push i to a "small" list and (if distinct) n/i to a "large" list. Finally reverse the "large" list and append it to "small" to get sorted divisors.

## Algorithm

1. Initialize two vectors: small and large.
2. For i = 1 to i*i <= n:
   - If n % i == 0:
     - Push i into small.
     - If i != n/i, push n/i into large.
3. Reverse large.
4. Concatenate large to the end of small.
5. Output elements of small (now sorted divisors).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(sqrt(n)) — we test divisibility only up to sqrt(n), adding up to two divisors per hit. |
| **Space** | O(d) — to store all d divisors for sorted output (O(1) extra if order is not required). |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
