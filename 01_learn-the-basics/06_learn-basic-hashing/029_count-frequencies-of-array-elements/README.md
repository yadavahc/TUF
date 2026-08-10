# Count Frequencies of Array Elements

> **Source:** [https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1](https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1)
> **Topic:** Step 1: Learn the Basics — Learn Basic Hashing
> **Difficulty:** Easy

## Intuition

We need counts for values in the range 1..n using linear time. A hash map is straightforward, but we can do better on space by encoding counts directly in the array using modular arithmetic. By treating each cell as “value mod base + count*base” with base = n+1, we can accumulate frequencies without losing the original values.

## Approach

- Brute force or a hashmap gives O(n) time but O(n) extra space.
- Optimal: In-place counting with base B = n+1. For each element, use val = a[i] % B to recover its original value (even after previous increments), and add B to the bucket at index val-1. Finally, each a[i]/B yields the frequency of (i+1). Elements outside 1..n are ignored.

## Algorithm

1. Let n = size of array a and B = n + 1.
2. For i = 0..n-1:
   - val = a[i] % B
   - If 1 ≤ val ≤ n, do a[val - 1] += B.
3. Build freq[0..n-1] where freq[i] = a[i] / B (integer division).
4. freq[i] is the count of element (i+1).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), since we make two linear passes over the array. |
| **Space** | O(1) extra; counts are encoded in-place using modular arithmetic (excluding the output vector). |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
