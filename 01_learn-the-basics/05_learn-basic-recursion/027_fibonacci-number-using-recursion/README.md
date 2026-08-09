# Fibonacci Number Using Recursion

> **Source:** [https://leetcode.com/problems/fibonacci-number/](https://leetcode.com/problems/fibonacci-number/)
> **Topic:** Step 1: Learn the Basics — Learn Basic Recursion
> **Difficulty:** Easy

## Intuition

Fibonacci follows a simple recurrence: F(n) = F(n-1) + F(n-2) with base cases F(0)=0 and F(1)=1. Naive recursion recomputes the same subproblems exponentially many times. Memoization remembers computed results so each n is solved once. This keeps the recursive style while achieving linear time.

## Approach

Use top-down recursion with a memo array where memo[k] stores F(k). On each call, if memo[k] is known, return it; otherwise compute recursively from k-1 and k-2, store, and return. (Brute force naive recursion is exponential due to repeated subproblems.)

## Algorithm

1. If n <= 1, return n.
2. Initialize a vector memo of size n+1 with -1; set memo[0]=0 and memo[1]=1.
3. Define a recursive function dfs(k):
   - If memo[k] != -1, return memo[k].
   - Else compute memo[k] = dfs(k-1) + dfs(k-2) and return it.
4. Return dfs(n).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), because each F(k) for k in [0..n] is computed once and then reused. |
| **Space** | O(n), for the memo array and the recursion stack depth up to n. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
