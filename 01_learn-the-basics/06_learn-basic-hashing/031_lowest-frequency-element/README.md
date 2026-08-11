# Lowest Frequency Element

> **Source:** [https://takeuforward.org/hashing/find-the-highest-and-lowest-frequency-elements/](https://takeuforward.org/hashing/find-the-highest-and-lowest-frequency-elements/)
> **Topic:** Step 1: Learn the Basics — Learn Basic Hashing
> **Difficulty:** Easy

## Intuition

Use a hash map to count occurrences of each value. The element(s) with the smallest count are the lowest-frequency elements. If multiple elements tie, pick the smallest value to make the answer deterministic.

## Approach

Count frequencies with an unordered_map in one pass, then scan the map to find the minimum frequency and the corresponding element, breaking ties by choosing the smallest element. Brute force (checking frequency by nested loops) is O(n^2), which we avoid with hashing.

## Algorithm

1. Initialize an unordered_map<int,int> freq.
2. For each element x in the array, do freq[x]++.
3. Initialize minFreq = +infinity and ans undefined.
4. For each (value, count) in freq:
   - If count < minFreq, set minFreq = count and ans = value.
   - Else if count == minFreq and value < ans, update ans = value (tie-breaker).
5. Return ans.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), where n is the array size, due to one pass to count and one pass over distinct elements. |
| **Space** | O(k), where k is the number of distinct elements (O(n) in the worst case) for the hash map. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
