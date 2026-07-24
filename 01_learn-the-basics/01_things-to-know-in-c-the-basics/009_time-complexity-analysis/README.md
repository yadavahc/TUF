# Time Complexity Analysis

> **Source:** [https://takeuforward.org/strivers-a2z-dsa-course/time-and-space-complexity/](https://takeuforward.org/strivers-a2z-dsa-course/time-and-space-complexity/)
> **Topic:** Step 1: Learn the Basics — Things to Know in C++ - The Basics
> **Difficulty:** Easy

## Intuition

Time complexity is about counting how many times the key operations run as input size grows. Loops map to standard growth rates: single loop O(n), nested loops O(n^2), doubling steps O(log n), and outer n with inner log gives O(n log n). Using arithmetic series and logarithmic identities lets us compute exact iteration counts without simulating the loops.

## Approach

Model typical code patterns (linear, quadratic, logarithmic, n log n, square root) and compute their exact iteration counts using closed-form formulas: sums of integers, sums of k·2^k, floor of log base 2, and floor of square root. This avoids brute-force simulation and runs in constant time per query.

## Algorithm

1. For linear: count = n.
2. For full quadratic (two full nested loops): count = n^2; for triangular nesting: count = n(n+1)/2.
3. For logarithmic doubling while loop: count = floor(log2(n)) + 1 (for n ≥ 1).
4. For n log n pattern: sum over i=1..n of (floor(log2(i)) + 1). Compute in O(1) using:
   - Let L = floor(log2(n)) and P = 2^L.
   - Sum floor(log2(i)) = sum_{k=0}^{L-1} k·2^k + L·(n − P + 1), where sum_{k=0}^{m} k·2^k = (m−1)·2^{m+1} + 2.
   - Then add n for the “+1” term per i.
5. For square-root loop while i*i ≤ n: count = floor(sqrt(n)).
6. Implement helpers for floor_log2 via bit operations and compute all counts in O(1). Print results for sample n values.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(1) per queried n, because all counts use closed-form formulas (no simulation of loops). |
| **Space** | O(1), using a constant number of variables. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
