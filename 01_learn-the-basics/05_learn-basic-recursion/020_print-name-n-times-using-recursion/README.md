# Print Name N Times Using Recursion

> **Source:** [https://www.geeksforgeeks.org/problems/print-gfg-n-times/1](https://www.geeksforgeeks.org/problems/print-gfg-n-times/1)
> **Topic:** Step 1: Learn the Basics — Learn Basic Recursion
> **Difficulty:** Easy

## Intuition

Recursion can replace loops by reducing the problem size at each call. To print a name N times, print once and recurse for N-1, stopping at zero. This naturally forms a call stack of depth N. Printing before the recursive call maintains the original order.

## Approach

Use a simple tail-recursive function: if n is zero, stop; otherwise print the name and call the function with n-1. (A loop would be the brute force, but recursion demonstrates the concept.)

## Algorithm

1. Define a function printNameNTimes(n, name).
2. If n <= 0, return (base case).
3. Print the name.
4. Call printNameNTimes(n-1, name).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(N), as one print operation occurs per recursive call. |
| **Space** | O(N), due to recursion stack depth N. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
