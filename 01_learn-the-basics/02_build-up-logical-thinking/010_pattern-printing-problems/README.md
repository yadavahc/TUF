# Pattern Printing Problems

> **Source:** [https://takeuforward.org/pattern/pattern-problems/](https://takeuforward.org/pattern/pattern-problems/)
> **Topic:** Step 1: Learn the Basics — Build-up Logical Thinking
> **Difficulty:** Easy

## Intuition

Patterns are generated row by row. For each row, compute how many leading spaces and how many symbols (stars/numbers) to print, then emit them in order. Most classic patterns reduce to simple arithmetic on row index: counts like i, n−i, or 2·i−1 drive the shape, and mirroring builds symmetric forms.

## Approach

Use nested loops: the outer loop iterates rows; inner loops print leading spaces and the required characters. For centered shapes, calculate spaces = n − i and width = 2·i − 1. For numeric/palindromic patterns, print descending then ascending sequences around the center. Brute force is already optimal because every printed character must be produced once.

## Algorithm

1. For each desired pattern and row i in [1..n]:
   - Compute leadingSpaces = max(0, n − i) when centering is required.
   - Compute bodyWidth: e.g., i for right triangles, 2·i − 1 for pyramids, or (n − i + 1) for inverted forms.
2. Print leadingSpaces times ' ' (if centered).
3. Print the body:
   - Stars: repeat '*' bodyWidth times (or split into left/right with a center if needed).
   - Numbers: either 1..i, all i’s, or palindromic i..1..i sequences, as per the pattern.
4. Move to next line.
5. For symmetric full shapes (e.g., diamond), print the top half for i=1..n and bottom half for i=n−1..1.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n^2): Across n rows, we print O(n) characters per row in the worst case (centered patterns reach width ~2n). |
| **Space** | O(1) extra space: We use a few counters; output is written directly to stdout. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
