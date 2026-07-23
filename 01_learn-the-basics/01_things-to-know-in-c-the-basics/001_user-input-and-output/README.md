# User Input and Output

> **Source:** [https://www.geeksforgeeks.org/basic-input-output-c/](https://www.geeksforgeeks.org/basic-input-output-c/)
> **Topic:** Step 1: Learn the Basics — Things to Know in C++ - The Basics
> **Difficulty:** Easy

## Intuition

Input/output in C++ centers on cin/cout. Use getline to read full lines (including spaces) and operator>> for tokenized inputs like integers. Be mindful of newline handling when mixing getline with operator>>.

## Approach

Read a full line (e.g., a name) using getline, then read an integer using operator>>. Output the values with cout on separate lines. Brute force isn’t applicable here; it’s about correct API usage.

## Algorithm

1. Read a full line string with getline for text that may contain spaces.
2. Read an integer with operator>>.
3. Print the string and the integer on separate lines using cout (or an ostringstream if simulating I/O).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(L), where L is the total length of the read input, since each character is processed once. |
| **Space** | O(L) for storing the input string; O(1) auxiliary space otherwise. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
