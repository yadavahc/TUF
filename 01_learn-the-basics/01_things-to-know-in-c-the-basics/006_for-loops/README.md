# For Loops

> **Source:** [https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem](https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem)
> **Topic:** Step 1: Learn the Basics — Things to Know in C++ - The Basics
> **Difficulty:** Easy

## Intuition

Use a simple for-loop over the interval. Map numbers 1–9 to their English words; for anything beyond 9, classify by parity. This is a straightforward control-flow and mapping exercise.

## Approach

Iterate from a to b inclusive. For each i, if 1 ≤ i ≤ 9, output the pre-stored word; otherwise, output "even" if i is even, else "odd". No optimization beyond direct iteration is needed.

## Algorithm

1. Prepare an array of strings: ["one", ..., "nine"].
2. For i from a to b:
   - If 1 ≤ i ≤ 9: print words[i-1].
   - Else: print "even" if i % 2 == 0, otherwise "odd".

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(b - a + 1), as we process each number once. |
| **Space** | O(1), ignoring the constant-sized words array and output. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
