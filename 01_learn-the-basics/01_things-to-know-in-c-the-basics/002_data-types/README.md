# Data Types

> **Source:** [https://practice.geeksforgeeks.org/problems/data-type-1666706751/1](https://practice.geeksforgeeks.org/problems/data-type-1666706751/1)
> **Topic:** Step 1: Learn the Basics — Things to Know in C++ - The Basics
> **Difficulty:** Easy

## Intuition

Map each allowed type name to its fixed byte size. Since the set of types is small and known, a constant-time lookup is sufficient. No iteration over input size is necessary; it’s a straightforward dictionary/if-else mapping.

## Approach

Use a constant unordered_map (or if-else chain) to translate the given string ("Character", "Integer", "Long", "Float", "Double") to the required byte sizes (1, 4, 8, 4, 8). Brute force isn’t applicable beyond direct mapping.

## Algorithm

1. Create a constant map from type-name strings to their sizes in bytes.
2. Given the input string, look it up in the map and return the corresponding value.
3. (If needed) Handle invalid inputs by returning -1 or another sentinel; for the canonical problem, inputs are valid.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(1): Constant-time hash/dictionary lookup on a fixed set of keys. |
| **Space** | O(1): Only a fixed-size map of five entries is stored. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
