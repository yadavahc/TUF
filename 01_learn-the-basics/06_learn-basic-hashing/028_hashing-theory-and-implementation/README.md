# Hashing Theory and Implementation

> **Source:** [https://takeuforward.org/data-structure/count-frequency-of-each-element-in-the-array/](https://takeuforward.org/data-structure/count-frequency-of-each-element-in-the-array/)
> **Topic:** Step 1: Learn the Basics — Learn Basic Hashing
> **Difficulty:** Easy

## Intuition

Use a hash table to count how many times each value appears. After a single pass to build frequencies, each query can be answered in constant average time by a direct lookup.

## Approach

Brute force would scan the array for every query (O(n·q)). Optimize by precomputing a frequency hash map in O(n), then answer each query in O(1) average time using unordered_map.

## Algorithm

1. Initialize an empty unordered_map<int,int> freq.
2. For each element x in the array, do freq[x]++.
3. For each query value v, append freq[v] if present; otherwise append 0.
4. Return the list of answers.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n + q): one pass to build the frequency map and one hash lookup per query. |
| **Space** | O(k): extra space for the hash map where k is the number of distinct elements. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
