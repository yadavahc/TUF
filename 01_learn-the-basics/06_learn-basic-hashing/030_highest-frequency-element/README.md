# Highest Frequency Element

> **Source:** [https://www.geeksforgeeks.org/most-frequent-element-in-an-array/](https://www.geeksforgeeks.org/most-frequent-element-in-an-array/)
> **Topic:** Step 1: Learn the Basics — Learn Basic Hashing
> **Difficulty:** Easy

## Intuition

Use a hash map to count occurrences of each element. The mode is the key with the highest count; if multiple keys share this count, return the smallest key to break ties. A single linear pass to build counts and a pass over the map to pick the best suffices.

## Approach

Count frequencies with an unordered_map. Then scan the map to find the element with maximum frequency; on ties, choose the smallest element. Brute force (checking every element’s count by nested loops) is O(n^2) and unnecessary.

## Algorithm

1. Initialize an unordered_map<int,int> freq.
2. For each element x in the array, do freq[x]++.
3. Initialize bestCount = -1 and ans = some sentinel.
4. For each (value, count) in freq:
   - If count > bestCount, set bestCount = count and ans = value.
   - Else if count == bestCount and value < ans, set ans = value (tie-break to smallest value).
5. Return ans.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), where n is the array length, since we build counts in one pass and scan distinct keys once. |
| **Space** | O(k), where k is the number of distinct elements, for the frequency map. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
