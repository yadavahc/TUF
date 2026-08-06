# Factorial of N Using Recursion

> **Source:** [https://www.geeksforgeeks.org/program-for-factorial-of-a-number/](https://www.geeksforgeeks.org/program-for-factorial-of-a-number/)
> **Topic:** Step 1: Learn the Basics — Learn Basic Recursion
> **Difficulty:** Easy

## Intuition

Think of factorial as a self-similar problem: n! equals n times the factorial of (n−1). The process bottoms out when n is 0 or 1, both of which have factorial 1. Recursion naturally models this definition with a clear base case and a simple recurrence.

## Approach

Use a recursive function: if n ≤ 1 return 1; otherwise return n × factorial(n−1). (An iterative loop is an equivalent brute force alternative but recursion directly mirrors the mathematical definition.)

## Algorithm

1. If n is 0 or 1, return 1.
2. Otherwise, return n multiplied by factorial(n−1).
3. Use a 64-bit type; note that values overflow beyond 20! for unsigned long long.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n): one recursive call per integer from n down to 1. |
| **Space** | O(n): call stack depth equals n in the worst case. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
