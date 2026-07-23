# Functions and Pass by Reference

> **Source:** [https://www.geeksforgeeks.org/problems/swap-two-numbers/1](https://www.geeksforgeeks.org/problems/swap-two-numbers/1)
> **Topic:** Step 1: Learn the Basics — Things to Know in C++ - The Basics
> **Difficulty:** Easy

## Intuition

Passing parameters by reference lets a function operate directly on the caller’s variables, so changes persist outside the function. For a classic demonstration, swapping two variables can be done in-place without returning anything. Using a temporary variable is the safest and clearest method.

## Approach

Define a function that takes two integers by reference and swaps them using a temporary variable. A brute way would be returning a pair and reassigning at the caller, but references avoid extra copies and are idiomatic in C++.

## Algorithm

1. Create a function swapByRef(int& a, int& b).
2. Store a in a temporary variable temp.
3. Assign a = b.
4. Assign b = temp.
5. Return; the caller’s variables are now swapped due to pass-by-reference.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(1): A constant number of assignments. |
| **Space** | O(1): Only one temporary variable is used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
