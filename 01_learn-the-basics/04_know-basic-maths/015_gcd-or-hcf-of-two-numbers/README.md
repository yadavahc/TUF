# GCD or HCF of Two Numbers

> **Source:** [https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1](https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1)
> **Topic:** Step 1: Learn the Basics — Know Basic Maths
> **Difficulty:** Easy

## Intuition

The key idea is the Euclidean algorithm: the gcd doesn’t change if we replace the larger number by its remainder when divided by the smaller one. Repeating a = b, b = a % b quickly shrinks numbers until the remainder becomes zero. Handle zeros and signs by working with non-negative values; gcd(0, x) = |x| and gcd(0, 0) = 0.

## Approach

Brute force would check all divisors down from min(a, b), which is too slow. Instead, use the iterative Euclidean algorithm: repeatedly set (a, b) = (b, a % b) until b becomes 0; the remaining a is the gcd. Convert inputs to non-negative to handle signs cleanly.

## Algorithm

1. Convert a and b to their absolute values.
2. If one is 0, return the other (if both 0, return 0).
3. While b != 0:
   - temp = a % b
   - a = b
   - b = temp
4. Return a.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(log min(a, b)) due to the Euclidean algorithm’s logarithmic convergence. |
| **Space** | O(1) since it uses a constant amount of extra space. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
